#include <stdio.h>
//int main()
//{
//    int a = 1;
//    char *pa = (char*)&a;
//    if (*pa == 1)
//    {
//        printf("small小端\n");
//    }
//    else
//    {
//        printf("big大端\n");
//    }
//
//    return 0;
//}

//int cheack_sys()
//{
//    int a = 1;
//    char *p = (char *)&a;
//    return *p;
//    //if (*p == 1)
//    //{
//    //    return 1;
//    //}
//    //else
//    //    return 0;
//}
//
//int main()
//{
//    int ret = cheack_sys();
//    if (ret == 1)
//    {
//        printf("small小端\n");
//    }
//    else
//    {
//        printf("big大端\n");
//    }
//}


/// 指针类型的意义：
/// 1.指针类型决定了指针解引用操作符能访问几个字节  char*p---*p访问了1个字节；int*p----*p访问四个字节
/// 2.指针类型决定了指针+1、-1，加的或者减的是几个字节；char*p;p+1跳过一个字符， int*p;p+1跳过一个整形-4个字节


//int main()
//{
//    char a = -1;
//    //补码：11111111111111111111111111111111
//    //char 只需要8个： 11111111
//    signed char b = -1;
//    //有符号char 也只需要8个：11111111
//    unsigned char c = -1;
//    //无符号char 也只需要8个: 11111111
//    printf("a=%d b =%d c=%d",a,b,c);
//    //整型提升：有符号类型则按符号位补齐；无符号类型则按0补齐
//    //char---%d:11111111111111111111111111111111
//    //signed char---%d:11111111111111111111111111111111
//    //unsigned char---%d:00000000000000000000000011111111
//
//}


//int main()
//{
//    char a = -128;
//    printf("%u\n",a);
//    //%d---打印十进制的有符号数字
//    //%u---打印十进制的无符号数字  无符号位的补码与原码一样
//    
//}

//有符号位的char的范围是 -128~127
//无符号位的char的范围是 0~255


//int main()
//{
//    int i = -20;
//    unsigned int j = 10;
//    printf("%d\n",i+j);
//
//}

//#include <Windows.h>
//int main()
//{ 
//    unsigned int i;  ///无符号位正数，因此永远不可能为负数
//    for(i = 9; i>=0; i--)
//    {
//        printf("%u\n",i);
//        Sleep(100);
//    }
//}

//int main()
//{
//    char a[1000];   //有符号位的char的范围是 -128~127,大于127的需要转换城范围内的数进行存储
//                     //无符号位的char的范围是 0~255
//    int i;
//    for(i=0;i<1000;i++)
//    {
//        a[i] = -1-i;  //sigend char的存放的数为-1,-2,-3,-4...-128,127,126,.....3,2,1,0, -1....一直循环下去
//    }
//    printf("%d",strlen (a));  //遇到\0停止
//}


//unsigned char i = 0;  //无符号位的char的范围是 0~255
//int main()
//{
//    for(i=0; i<=255;i++)  ///当大于255的时候就会转换为0~255中的数继续存储
//    {
//        printf("hello world\n");
//    }
//}


