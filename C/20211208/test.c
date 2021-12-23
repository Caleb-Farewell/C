#include <stdio.h>

//#include <string.h>
//#include <assert.h>
//void* my_memcpy(void* dest,const void* src,size_t count)
//{
//    char* ret = dest;
//    assert(dest != NULL);  //如果条件返回错误，则终止程序执行
//    assert(src != NULL);
//
////由于是void型指针无法直接解应用，因此需要强制转化为char*型指针
////char*指针每次只变动一个字节，因此采用count也就是所有字节进行
////一次一次的循环
//    while(count--)
//    {
//        *(char*)dest = *(char*)src;
//        ++(char*)dest;  //必须是首先转换为char*,如何加加
//        ++(char*)src;
//    }
//    return ret;
//
//}
//
//int main()
//{
//    int arr1[] = {1,2,3,4,5};
//    int arr2[10] = {0};
//    //arr1中的数组拷贝到arr2中
//   // int sz = sizeof(arr1);
//   // int sa = sizeof(arr1[0]);
//   // printf("%d,%d\n",sz,sa);
//    memcpy(arr2,arr1,sizeof(arr1));
//    my_memcpy(arr2,arr1,sizeof(arr1));
//    //printf("%d\n",arr2[0]);
//
//}

//#include <string.h>
//#include <assert.h>
//void *my_memmove(void *dest, const void *src, size_t count)
//{
//    void*ret = dest; //把dest的地址给ret，后面地址改变了
//    assert(dest != NULL);
//    assert(src != NULL);
//
//    if (dest < src || dest >(char*)src + count)
//    {
//        //前->后
//        while (count--)
//        {
//            *(char *)dest = *(char *)src;
//
//            ++(char *)dest; //必须是首先转换为char*,如何加加
//
//            ++(char *)src;
//        }
//    }
//    else
//    {
//        //后->前
//        while(count--)
//        {
//           *((char*)dest + count) = *((char*) src+count);
//
//        }
//    }
//    return ret; //解应用，返回ret的地址，也就是dest
//}
//
//int main()
//{
//    int arr3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    memmove(arr3 + 2, arr3, 20); //地址重叠的拷贝
//    //C语言标准：memcPy函数可以拷贝不重叠的
//    //memmove可以实现重叠拷贝和不重叠拷贝
//    my_memmove(arr3 + 2, arr3, 20);
//}


//#include <string.h>
//int main()
//{
//    int arr1[] = {1,2,3,4,5};
//    int arr2[] = {1,2,5,4,3};
//    int ret = memcmp(arr1,arr2,8); //内存比较
//    int ret1 = memcmp(arr1,arr2,9);
//    printf("%d,%d\n",ret,ret1);
//}


//memset(),内存设置
//#include <string.h>
//int main()
//{
//    char arr[10] = "";
//    memset(arr,'#',10);
//    printf("%s\n",arr);
//
//}


int main()
{
    char arr[10] = "helloword!";
    printf("%s\n",arr);
    printf("%c\n",arr[0]);
}