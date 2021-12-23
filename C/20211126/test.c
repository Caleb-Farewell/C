#include <stdio.h>

//int main()
//{
//    char ch = 'w';
//    char* p = &ch;
//    const char* p2 = "abcdef"; //把字符串的首字母a的地址给指针
//    
//}

//void test(int arr[3][5])
//{}
//
//void test1(int arr[][5])// 二维数组传参，行可以省略，列不可以
//{}

//void test2(int* arr)//error,二维数组传参是传的的第一行的地址，第一行是一维数组，所以需要用数组指针接收
//{}

//void test3(int (*arr)[5])//传过来的是第一行的地址
//{}
//
//int main()
//{
//  int arr[3][5] = {0};
// //test(arr);
// //test1(arr);  
// //test2(arr);
// test3(arr);
//}


//int Add(int x, int y)
//{
//    int z = 0;
//    z = x+y;
//    return z;
//}
//
//int main()
//{
//    int a = 10,b=20;
//    printf("%d\n",Add(a,b));
//    printf("%p\n",&Add);
//    printf("%p\n",Add);//&函数名和函数名都是函数的地址
//    int (*pa)(int, int) = Add;
//    printf("%d\n",(*pa)(2,3));
//}


//void Print(char* str)
//{
//    printf("%s\n", str);
//}
//
//
//int main()
//{
//    void (*p)(char*) = Print;
//    (*p)("hello bit");
//
//}


//void(* signal(int,void(*)(int)) ) (int);
//signal是一个函数声明
//signal函数的参数有2个，第一个是int，第二个是函数指针，该指针指向的函数的参数是int,返回类型是void；
//signal 函数的返回类型也是一个函数指针，该函数指针指向的参数是int，返回类型是void


//int Add(int x, int y)
//{
//    return x+y;
//}
//
//int Sub(int x, int y)
//{
//    return x-y;
//}
//
//int Mul(int x, int y)
//{
//    return x*y;
//}
//
//int Div(int x, int y)
//{
//    return x/y;
//}
//int main()
//{
//    int* arr[5];//指针数组
//    
//    int (*pa) (int,int) = Add;
//    //需要一个数组，这个数组可以存放4个函数的地址---函数指针的数组
//    int(*parr[4])(int,int) = {Add,Sub,Mul,Div};
//    int i = 0;
//    for(i=0;i<4;i++)
//    {
//        printf("%d\n",parr[i](2,3));
//    }
//
//}

char* my_strcpy(char* dest, const char* src)

char* (*pf)(char*,const char*) = my_strcpy;
char* (*pfArr[4])(char*, const char*) = {};