#include <stdio.h>

//struct S
//{
//    /* data */
//    int a;
//    char c;
//    double d;
//};
//
//
//void Init(struct S* ps)
//{
//    ps->a = 100;
//    ps->c = 'w';
//    ps->d = 3.14;
//}
//
//void Print1(struct S tmp)//传值
//{
//    printf("%d %c %lf\n",tmp.a,tmp.c,tmp.d);
//}
//
//void Print2(struct S* ps)//传址
//{
//    printf("%d %c %lf\n",ps->a,ps->c,ps->d);
//}
//int main()
//{
//    struct S s = {0};
//    Init(&s);
//    Print1(s);
//    Print2(&s);
//}


//
// 位段--二进制位

struct S
{
    int a : 2;
    int b : 5;
    int c : 10;
    int d : 30;//位后面的数字不能大于32
};

int main()
{
    struct S s;
    printf("%d\n",sizeof(s));
}