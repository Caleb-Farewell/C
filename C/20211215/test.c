#include <stdio.h>

//枚举---就是列举

//enum Day //枚举类型
//{
//    //枚举的可能取值
//    Mon,//0
//    Tues,//1
//    Wed,
//    Thur,
//    Fri,
//    Sat,
//    Sun//6
//};
//
//int main()
//{
//    enum Day s = Mon;
//    //printf("%d %d %d\n",Mon,Tues,Sun);
//
//}

//联合体---共用体：其实就是共用一个空间
//联合体的大小，至少时最大成员的大小
//union Un
//{
//    char c;
//    int i;
//};
//
//int main()
//{
//    union Un u;
//    printf("%d\n",sizeof(u));
//    printf("%p\n",&u);
//    printf("%p\n",&(u.c));
//    printf("%p\n",&(u.i));
//
//}

//判断大小端存储
//int main()
//{
//    //int a = 0x11223344;  //高位------低位
//    //低地址------------高地址
//    //...[][][][11][22][33][44][][][]......//大端存储
//    //...[][][][44][33][22][11][][][]......//小端存储
//
//    //低位放在低地址，高位放在高地址-----小端存储
//    //低位放在高地址，高位放在低地址-----大端存储
//
//    int a = 1; //二进制：0x 00 00 00 01
//    if (1 == *(char*)&a)
//    {
//        printf("small小端\n");
//    }
//    else
//        printf("big大端\n");
//}

//int check_sys()
//{
//    union Un
//    {
//        char c;
//        int a;
//    }u;
//    u.a = 1;
//    return u.c;
//    
//}
//
//int main()
//{
//    int ret = check_sys();
//
//    if (1 == ret)
//        printf("small小端");
//    else
//        printf("big大端");
//}


union Un
{
    int a;
    char arr[5];
};

int main()
{
    union Un u;
    printf("%d\n",sizeof(u));
}

