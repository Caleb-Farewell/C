#include <stdio.h>

//int main()
//{
//    double a = 5.0/2;
//    printf("a = %lf\n",a);
//    return 0;
//}

//int main()
//{
//    int a = -1;
//    // >>  ----右移动操作符(代码右移)
//    //移动的是二进制位
//    int b = a >>2;
//    //右移操作符：算数右移：(内存中进行) 右边丢弃，左边最高位补原符号位，正数为0，负数为1
//    //           逻辑右移： 右边丢弃，左边补0
//    printf("%d\n",b);
//
//}

//整数的二进制表示有：原码、反码、补码
//存储到内存的是补码

//int main()
//{
//    int a = 5;
//    int b = a << 1; //代码左移，左边丢弃，右边补0
//    printf("%d\n", b);
//}

//左移有加的效果，右移有减小的效果


//int main()
//{
//    int a = 3;
//    int b = 5;
//    a = a^b;
//    b = a^b;
//    a = a^b;
//    printf("after : a = %d b =%d\n",a,b);
//}

int main()
{
    int num = 0; int count=0;
    scanf("%d",&num);
    while(num)
    {
        if (num % 2 ==1)
        {
            count ++;
            num = num/2;
        }      
    }
}