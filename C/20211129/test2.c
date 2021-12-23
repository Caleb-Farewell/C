#include <stdio.h>
#include <stdlib.h>



int cmp_int(const void* e1,const void* e2)
{
    //比较两个整型值
    return *(int*)e1 - *(int*)e2;
}
int main()
{
    //int a = 0;
    //void* p = &a;//void*类型的指针，可以接收任意类型的地址
    ////void* 类型的指针不能进行解应用操作；也不能加减运算
    ////但可以强制转换---*(int*)p

    int arr[] = {9,8,7,6,5,4,3,2,1,0};
    int sz = sizeof(arr)/sizeof(arr[0]);

    qsort(arr,sz,sizeof(arr[0]),cmp_int);//快速排序函数
    int i = 0;
    for (i = 0; i < sz ; i++)
    {
        printf("%d ",arr[i]);
    }
    
}