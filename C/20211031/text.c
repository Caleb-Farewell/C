// switch 语句中case表达式不要求顺序

#include <stdio.h>

//int main()
//{
//    int x = 3;
//    int y = 3;
//    switch (x % 2)
//    {
//    case 1:
//        switch (y)
//        {
//        case 0:
//            printf("first");
//        case 1:
//            printf("second");
//            break;
//        default:
//            printf("hello");
//        }
//    case 2:
//        printf("third");
//    }
//    return 0;
//}

//int main()
//{
//    int year = 0;
//    for (year = 1000; year <= 2000; year++)
//    {
//        if (year % 4 == 0 && year % 100 != 0)
//        {
//
//            printf("闰年=%d\n", year);
//        }
//
//        else if (year % 400 == 0)
//        {
//            printf("闰年=%d\n", year);
//        }
//    }
//}

//int main()
//{
//    int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
//    int max = arr[0];
//    int i = 0;
//    int a = sizeof(arr)/sizeof(arr[0]);
//    for (i=1;i<a;i++)
//    {
//        if(arr[i]>max)
//        max = arr[i];
//    }
//    printf("%d\n",max);
//    return 0;
//}

//int main()
//{
//    int a = 0; int b = 0; int s = 0;
//    for(a=1;a<=9;a++)
//    {
//        for(b=1;b<=a;b++)
//        {
//            s = a*b;
//            printf("  %d*%d=%-2d",b, a, s);
//        }
//        printf("\n");
//
//    }
//}

// shutdown -s -t 60   60秒后关机
// shutdown -a 取消关机
// system() --执行系统命令
#include<string.h>
int main()
{
    char input[20] = {0};
    system("shutdown -s -t -60");
again:
    printf("Please input keyword:>");
    scanf("%s", input);
    if (strcmp(input, "mm") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}