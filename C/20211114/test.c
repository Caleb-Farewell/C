#include <stdio.h>

//int main()
//{
//    int arr[10] = {0};
//    int *p = arr; // 数组名-首元素地址
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        *(p + i) = 1;
//        printf("%d\n", arr[i]);
//    }
//}

//规避野指针
// 指针初始化、小心指针越界、指针指向空间释放及使置NULL、指针使用之前检查有效性

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int i = 0;
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int* p = arr;
//    for (i = 0; i<sz;i++)
//    {
//        printf("%d ",*(p+i));
//      //  p = p+1;
//    }
//}

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    printf("%d\n",&arr[9] - &arr[0]);  // 指针减指针等于中间的元素个数
//
//}

//int my_strlen(char* str)  // 模拟strlen()的功能
//{
//    char* start = str;
//    char* end = str;
//    while (*end != '\0')
//    {
//        end ++;
//    }
//    return end - start;
//
//}
//
//int main()
//{
//    char arr[] = "hello";
//    int len = my_strlen(arr);
//    printf("%d\n",len);
//}

//int main()
//{
//    int arr[10] = {0};
//    printf("%p\n", arr);
//    printf("%p\n", arr + 1);
//
//    printf("%p\n", &arr[0]);
//    printf("%p\n", &arr[0] + 1);
//    
//    printf("%p\n", &arr);
//    printf("%p\n", &arr + 1);
//}


// 指针数组---数组----存放指针的数组
// 数组指针---指针

//int main()
//{
//    int a = 10,b= 20,c= 30;
//    int* arr2[3] = {&a,&b,&c};// 指针数组
//    int i =0;
//    for ( i = 0; i < 3; i++)
//    {
//        printf("%d ",*(arr2[i]));
//    }
//    
//}


//int main()
//{
//    int a = 10;
//    float b =10.0;
//    printf("%p\n",&a);
//    printf("%p\n",&b);
//}


//原码：直接将二进制按照正负数的形式翻译城二进制就可以
//反码：将原码的符号位不变，其他位依次按位取反就可以得到
//补码： 反码+1即可得到补码

//正整数的补码就是原码本身



/// 大端（存储）模式：数据的低位保存在内存的高地址中，数据的高位保存在内存的低地址中
/// 小段（存储）模式：数据的低位保存在内存的低地址中，数据的高位保存在内存的高地址中

///  低地址-------------------------------高地址
/// 0x11223344  ---- 11 为高位，44为低位

int main()
{
    int a = 20;
    printf("%p\n",&a);
}