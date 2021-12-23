#include <stdio.h>
#include <string.h>

//int main()
//{
//    int arr[10] = {1,2,3};// 不完全初始化，剩下的元素默认为0；
//    char arr2[5] = "ab";
//    char arr3[] = "abcdef";
//    printf("%d\n", sizeof(arr3)/sizeof(arr3[1]));// sizeof 计算所占空间的大小
//    printf("%d\n",strlen(arr3));//strlen是求字符串的长度--'\0'之前的字符个数
//
//}

//int main()
//{
//    char arr1[] = "abc";
//    char arr2[] = {'a','b','c'};
//    printf("%d\n",sizeof(arr1));
//    printf("%d\n",sizeof(arr2));
//    printf("%d\n",strlen(arr1));
//    printf("%d\n",strlen(arr1));
//}

//int main()
//{
//    char arr[] = "abcdef";
//    printf("%c\n",arr[3]);
//    int i = 0;
//    for ( i = 0; i < 6; i++)
//    {
//       printf("%c\n",arr[i]);
//    }
//
//}

//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof arr/sizeof(arr[0]);
//    int i = 0;
//    for ( i = 0; i < sz; i++)
//    {
//        printf("&arr[%d] = %p\n", i , &arr[i]);
//    }
//
//}

//int main()
//{
//    int arr[3][4] = {{1,2,3},{4,5}};// 3行4列
//    //printf("%d\n",arr[1][1]);  // 行可以省略，列不能省略  下标从0开始
//    int i = 0;
//    for ( i = 0; i < 3; i++)
//    {
//        int j = 0;
//        for ( j = 0; j< 4; j++)
//        {
//            printf("%d ",arr[i][j]);
//        }
//        printf("\n");
//
//    }
//
//}

//int main()
//{
//    int arr[3][4] = {{1, 2, 3}, {4, 5}}; // 3行4列
//    //printf("%d\n",arr[1][1]);  // 行可以省略，列不能省略  下标从0开始
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 4; j++)
//        {
//            printf("&arr[%d][%d] = %p\n ", i, j, &arr[i][j]);
//        }
//    }
//
//}

void bubble_sort(int arr[], int sz)
{
    //确定冒泡排序的趟数
    int i = 0;
    for (i = 0; i < sz - 1; i++)
    {
        int flag = 1;
        // 每一趟冒泡排序
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++) // 每一趟进行两两比较排序
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                flag = 0;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {9, 6, 7, 5, 8, 4, 3, 2, 1, 0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    // 对arr进行排序，升序
    bubble_sort(arr, sz); //冒泡排序函数
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d", arr[i]);
    }
}

// 数组名是数组的首地址 ，除了sizeof(数组名)-计算整个数组的大小，单位是字节
// &数组名----数组名代表整个数组，&数组名，取出的是整个数组的地址。