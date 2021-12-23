#include <stdio.h>
#include <string.h>

//int main()
//{
//    char arr1[] = "bit";
//    char arr2[20] = "#########";
//    strcpy(arr2,arr1);
//    printf("%s\n",arr2);  // 拷贝了 /0 ,因此输出的时候到/0终止
//    return 0;
//}

//int main()
//{
//    char arr[] = "hello word";
//    memset(arr,'&',5);
//    printf("%s\n",arr);
//    return 0;
//}

//void Swap(int* x, int* y)
//{
//    int tmp = 0;
//    tmp = *x;    // *x  为解引用
//    *x = *y;
//    *y = tmp;
//}
//int main()
//{
//    int a = 10; int b = 20;
//    printf("a=%d b=%d\n",a,b);
//    Swap(&a,&b);   // 传址，以此改变该有地址的值，采用指针解决
//    printf("a=%d b=%d\n",a,b);
//    return 0;
//
//}

// 传值调用： 函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参
// 传址调用： 把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式
//           可以让函数和函数外部的变量建立真正联系，也就是函数内部可以直接操作函数外部的变量

//int is_prime(int n)
//{
//   int j = 0;
//   for (j=2;j<n;j++)
//   {
//       if(n%j == 0)
//       return 0;
//   }
//   return 1;
//}
//
//
//int main()
//{
//    int i = 0;
//    for(i=100;i<=200;i++)
//    {
//        if(is_prime(i) == 1)
//        printf("%d ",i);
//    }
//    return 0;
//}

//int is_leap_year(int y )
//{
//    if(y%4 == 0 && y%100 !=0)
//    return 1;
//    else if(y%400 == 0)
//    return 1;
//    else
//    return 0;
//}
//
//int main()
//{
//    int i = 0;
//    for(i=1000;i<=2000;i++)
//    {
//        if(is_leap_year(i) == 1)
//        {
//            printf("%d ",i);
//        }
//    }
//}

/////          这里的arr1 本质上是指针，传递过来的数组元素的首地址
//int search(int arr1[] , int k, int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//
//    while(left <= right)
//    {
//        int mid = (left+right)/2;
//         if (arr1[mid] < k)
//    {
//        left = mid + 1;
//
//    }
//    else if(arr1[mid] > k)
//    {
//        right  = mid -1;
//    }
//    else
//    {
//        return mid;
//    }
//    }
//    return -1;
//
//}
//
//
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int p = 7;
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int i = search(arr,p,sz);// 传递过去的是数组元素的首地址
//    if (i == 1)
//    {
//        printf("找不到数字\n");
//    }
//    else
//    {
//        printf("%d\n",i);
//    }
//    return 0;
//
//}

void ADD(int *p)
{
    (*p)++;
}

int main()
{
    int num = 0;
    int i = 0;
    for (i = 1; i <= 3; i++)
    {
        ADD(&num);
        printf("num = %d\n",num);
    }
    return 0;
}
