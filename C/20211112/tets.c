#include<stdio.h>
//int main()
//{
//    short s = 0;  // short 占2个字节
//    int a = 10;
//    printf("%d\n",sizeof(s=a+5)); // sizeof的表达式是不参与运算的
//    printf("%d\n",s);
//
//}


//int main()
//{
//    int a =0;
//    printf("%d\n",~a);   // ~ 按位取反(二进制)
//    return 0 ;
//}

//void test1(int arr[])
//{
//    printf("%d\n",sizeof(arr));
//}
//
//void test2(char ch[])
//{
//    printf("%d\n",sizeof(ch));
//}
//
//
//int main()
//{
//    int arr[10] = {0};
//    char ch[10] = {0};
//    printf("%d\n",sizeof arr);
//    printf("%d\n",sizeof(ch));
//    test1(arr);  // 数组传参是首元素的地址，传过去地址用指针接收
//    test2(ch);
//
//}


//int main()
//{
//    int i = 1,a=0,b=2,c=3,d=4;
//    i = a++&&++b&&d++;   // 逻辑操作符与，只要左边是假，就不算；如果是或，只要左边是真就不算
//    printf("%d %d %d %d\n",a,b,c,d);
//
//}


/*struct stu
{
    char name[20];
    int age;
    char id[20];
};

int main()
{
    int a = 10;
    struct stu s1 = {"张三",20,"2020170136"};
    struct stu *ps = &s1;
    printf("%d\n",ps->age);
    printf("%s\n", s1.name);

}*/


