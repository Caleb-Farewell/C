#include <stdio.h>

// int main()
// {
//     int ret = 0;
//     int ch = 0;
//     char password[20] = {0};
//     printf("请输入密码:>");
//     scanf("%s", password);
//     // 在终端输入完 password所想要的东西且赋值后，还存在 '\n'
//     // 缓冲区还剩余  \n
//     // 因此需要 getchar()来读取一下\n
//
//     // getchar();   // 函数从屏幕读取下一个可用字符，并把它返回未一个整数
//
//     while (ch = getchar() != '\n')
//     {
//         ;
//     }
//     ////
//     printf("请确认(Y/N):>");
//     ret = getchar();
//     if (ret == 'Y')
//     {
//         printf("确认成功\n");
//     }
//     else
//     {
//         printf("放弃确认\n");
//     }
// }

//int main()
//{
//    int i = 0;
//    int n = 0;
//    int sum = 1;
//    printf("input n:\n");
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        sum = sum * i;
//    }
//    printf("sum = %d\n", sum);
//    return 0;
//}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int lf = 0; // 数组下标
    int rf = sz - 1;

    while (lf<=rf)
    {
        int mid = (lf+rf)/2;
        if (arr[mid] > k)
        {
            rf = mid - 1;
        }
        else if (arr[mid] < k)
        {
            lf = mid + 1;
        }
        else
        {
            printf("%d\n", mid);
            break;
        }
    }
    if(lf>rf)
    {
        printf("找不到\n");
    }
    return 0;
}

//int main()
//{
//    char arr[] = "welcome to bit!";
//    printf("%c\n",arr[3]);  //%c代表字符型格式符，%s代表字符串类型格式
//}


#include <string.h>
int main()
{
    char arr1[] = "welcome to bit!";
    char arr2[] = "###############";
    int left = 0;
    int right = strlen(arr1) - 1;

    while (left <= right)
    {
        arr2[left] = arr1[left];
      //  arr2[right] = arr1[right];
        printf("%s\n",arr2);
        left++;
    }
    return 0;
}


不能用 == 比较两个字符串是否相等，应该使用一个库函数： -strcmp
stecmp(s1,s2)  如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回小于 0；如果 s1>s2 则返回大于 0。