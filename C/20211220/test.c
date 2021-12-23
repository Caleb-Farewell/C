#include <stdio.h>

//内存的使用方式
//1.创建一个变量
//局部变量，局部范围数组----栈区：存放局部变量和函数的形式参数（形参）
//全局变量，全局范围数组----静态区:存放全局变量，静态变量
//
//堆区：动态内存分配

#include <stdlib.h>
#include <errno.h>
#include <string.h>
//int main()
//{
//    //向内存申请10个整型空间
//    int* p = (int*)malloc(10*sizeof(int));
//    if(p == NULL)
//    {
//        //打印错误原因的一个方式
//        printf("%s\n",strerror(errno));
//    }
//    else
//    {
//        //正常使用空间
//        int i = 0;
//        for(i=0;i<10;i++)
//        {
//            *(p+i) = i;
//        }
//        for ( i = 0; i < 10; i++)
//        {
//            printf("%d ",*(p+i));
//        }
//
//    }
//    //当内存使用完毕后，需要释放内存
//    free(p);//谁开辟谁释放
//    p = NULL;//断开他们的联系，赋值一个空指针
//
//}

//int main()
//{
//    //malloc(10*sizeof(int))
//    int *p = (int*)calloc(10, sizeof(int));//开辟内存空间，并初始化为0
//    if (p == NULL)
//        printf("%s\n", strerror(errno));
//    else
//    {
//        int i = 0;
//        for (i = 0; i < 10; i++)
//        {
//            printf("%d ", *(p + i));
//        }
//    }
//    free(p);
//    p = NULL;
//}

int main()
{
    //realloc()调整动态开辟内存的大小
    int *p = (int *)malloc(20);
    if (p == NULL)
        printf("%s\n", strerror(errno));
    else
    {
        int i = 0;
        for (i = 0; i < 5; i++)
        {
            *(p + i) = i;
        }
    }
    //假设开辟的20个字节不够用
    //采用realloc()调整开辟的空间
    // int* p2 = realloc(p,40);
    // p = realloc(p,40);
    //注意事项：1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
    //         2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会
    //重新找一个新的内存区域，开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来
    //释放旧的内存空间，最后返回新开辟的内存空间地址
    //         3.得用一个新的变量来接受realloc函数的返回值

    int *ptr = realloc(p, 40);
    if (ptr != NULL)
    {
        p = ptr;
    }

    free(p);
    p = NULL;
}