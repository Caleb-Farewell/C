#include <stdio.h>

// 声明一个结构体类型
// 声明一个学生类型，是想通过学生类型来创建学生变量（对象）
// 描述学生：属性-名字-电话-性别
//struct  Stu
//{
//    char name[20];  //结构体的成员变量
//    char tele[12];
//    char sex[10];
//    int age;
//}s4,s5,s6;//全局变量
//
//struct Stu s3;//全局变量
//int main()
//{
//    //创建结构体变量
//    struct Stu s1;
//    struct Stu s2;
//
//}


//struct Node
//{
//    int data;
//    struct Node* next;//数据结构中的知识，数据体中要能找到同类型的其他变量---用指针
//};


//struct S
//{
//    char c;
//    int a;
//    double d;
//    char arr[20];
//};
//
//int main()
//{
//    struct S s ={'c',100,3.14,"hello bit"};
//    printf("%c %d %lf %s\n",s.c,s.a,s.d,s.arr); 
//}

//struct T
//{
//    double weight;
//    short age;
//};
//
//struct S
//{
//    char c;
//    struct T st;
//    int a;
//    double d;
//    char arr[20];
//};
//
//int main()
//{
//    struct S s = {'c',{55.6,30},100,3.14,"hello bit"};
//    printf("%c %d %lf %s\n",s.c,s.a,s.d,s.arr);
//    printf("%lf\n",s.st.weight);
//}


//struct s1
//{
//    char c1;
//    int a;
//    char c2;
//};
//
//struct S2
//{
//    char c1;
//    char c2;
//    int a;
//};
//
//int main()
//{
//    struct s1 s1={0};
//    printf("%d\n",sizeof(s1));//结构体内存对齐
//    struct S2 s2={0};
//    printf("%d\n",sizeof(s2));
//}

//设置默认对齐数位
//#pragma pack(1)
//struct S
//{
//    char c1;
//    double a;
//};
//#pragma pack()//取消设置的默认对齐数
//
//int main()
//{
//    struct S s;
//    printf("%d\n",sizeof(s));
//}


#include <stddef.h>

struct S
{
    /* data */
    char c;
    int i;
    double d;
};

int main()
{
    printf("%d\n",offsetof(struct S,c));//返回偏移量
    printf("%d\n",offsetof(struct S,i));
    printf("%d\n",offsetof(struct S,d));
}

