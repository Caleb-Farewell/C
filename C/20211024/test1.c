# include <stdio.h>

// int sum (int a)
// {
//     int c = 0;
//     static int b = 3;  // 局部变量时加入static，只是保证这一次要使用的到这个变量是这个值，但是不改变其原有的值
//     c += 1;
//     b += 2;
//     return(a+b+c);
// }
// 
// int main()
// {
//     int i;
//     int a = 2;
//     for(i=0; i<5;i++)
//     {
//         printf("%d,",sum(a));
//     }
// }



// 创建一个结构体类型
//struct Book
//{
//    char name[20]; // 书名
//    short price;  // 价格
//};  // 分号不能丢
//
//int main()
//{
//    struct Book b1 = {"C语言程序设计",55};
//    printf("name: %s\n", b1.name);
//    printf("price: %dRMB\n",b1.price);
//    b1.price = 15;
//    printf("new price: %dRMB\n",b1.price);
//    return 0;
//}


//struct Book
//{
//    char name[20]; // 书名
//    short price;  // 价格
//};  // 分号不能丢
//
//int main()
//{
//    struct Book b1 = {"C语言程序设计",55};
//    struct Book* pb = &b1;  // pb为指针
//    printf("%s\n", (*pb).name);
//    printf("%d\n", (*pb).price);   // .  结构体变量.成员
//    printf("%d\n", pb->price);     // -> 结构体指针->成员
//    return 0;
//}



#include <string.h>
struct Book
{
    char name[20]; // 书名
    short price;  // 价格
};  // 分号不能丢

int main()
{
    struct Book b1 = {"C语言程序设计",55};
    // 当想要更改书名的时候，由于 name是数组，因此无法采用 b1.name = "C++"
    // 需要借助： strcpy --- string copy -- 字符串拷贝---是一个库函数--需要有个标头： string.h
    strcpy(b1.name,"C++");
    printf("%s\n",b1.name);
    return 0;
    
}


