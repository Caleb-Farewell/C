#include <stdio.h>
#include <stdlib.h>


int cmp(const void* e1,const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}
void test4()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, sz, sizeof(arr[0]), cmp);
}

void swap(char* buf1,char*buf2,int width)
{
    int i = 0;
    for(i=0;i<width;i++)
    {
        char* tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
}

void bubble_sort(void *base, int sz, int width, int (*cmp)(void *e1, void *e2))
{
    int i = 0;
    //趟数
    for (i = 0; i < sz - 1; i++)
    {
        //每一趟比较对数
        int j = 0;
        for(j = 0;j<sz-1-i;j++)
        {
            //两个元素比较
            if(cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
            {
                swap((char*)base + j*width,(char*)base+(j+1)*width,width);
            }
        }
    }
}
 
//int cmp_stu_by_name(const void* e1,const void* e2)
//{
//    //比较名字是比较字符串
//    //字符串的比较是不能直接用大于号小于号比较，应该用strcmp函数
//    return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
//}

int main()
{
    test4();
    //qsort();
    //第一个参数：待排序数组的首元素地址
    //第二个参数：待排序数组的元素个数
    //第三个参数：待排序数组的每个元素的大小----单位是字节
    //第四个参数：是函数指针，比较两个元素的所用函数的地址---这个函数使用者自己实现
    //           函数指针的两个参数是：待比较的两个元素的地址
}