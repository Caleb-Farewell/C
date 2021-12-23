#include <stdio.h>

//int compare(int x,int y)
//{
//    if(x<y)
//        return y;
//    else 
//        return x;
//}
//int main()
//{
//    int x = 0; int y =0; int z=0;
//    printf("x=,y=\n");
//    scanf("%d,%d",&x,&y);
//    z = compare(x,y);
//    printf("max= %d\n",z);
//    return 0;
//} 


//  int main()
// {
//     int a = 10;
//     int arr[]  = {1,2,3,4,5,6};
//     printf("%d\n",sizeof a);
//     printf("%d\n",sizeof arr);  //数组arr里面6个元素为整型-占4个字节，因此整个数组占6*4=24个字节；
//     printf("%d\n",sizeof arr/sizeof arr[0]); // 计算得到数组元素的个数
//     return 0;
// }
// // 负数在内存中存储的时候，存储的是二进制的补码
// // 原码-》反码：符号位不变(最高位)不变，其余位取反；
// // 反码-》补码：加1（最低位加1）；
// // 只要是整数，内存中存储的都是二进制的补码
// // 正数--原码、反码、补码  相同；

//int main()
//{
//    int a = 10; 
//    int b = --a;  // 后置++为先使用，再++
//    // int c = ++a;  // 前置++为先++，再使用
//    printf("a= %d,b= %d\n",a,b);
//    return 0;
//}

//int main()
//{
//    int a = 10; int b = 20; int max = 0;
//    max = (a > b ? a:b);
//    printf("max= %d\n",max);
//    return 0;
//}


// int main()
// {
//     register int a = 10; // 建议把a定义成寄存器变量 ---访问速度：寄存器>高速缓存>内存>硬盘
//     return 0;
// }


//int main()
//{
//    // typedef - 类型定义 - 类型重定义
//    typedef unsigned int  u_int;
//    u_int num = 20;
//    printf("num = %d\n",num);
//    return 0;
//}



// static 修饰局部变量
// 局部变量的生命周期变长

// static修饰全局变量时，改变其作用域--只能在所在的源文件内部使用，出了源文件就无法使用
//void test()
//{
//   static int a = 1;  // 加入static则是一个静态的局部变量
//    a++;
//    printf("a = %d\n",a);
//}
//
//int main()
//{
//    int i = 0;
//    while (i<5)
//    {
//        test();
//        i++;
//    }
//    return 0;
//    
//}


// #define 定义标识符常量   #define MAX 100
// #define 可以定义宏-带参数

//#define MAX(X,Y) (X>Y?X:Y)
//
//int main()
//{
//    int a = 10; int b = 20;
//    int max = MAX(a,b);
//    printf("max = %d\n",max);
//    return 0;
//
//}



//int main()
//{
//    int a = 10; // 整数占4个字节
//    int* p = &a; // 取地址  （指针存放的是首地址）
//    // 有一种变量是用来存放地址的--指针变量
//    // *p;  // *--解引用操作符---对p进行解引用操作，找到它所指向的对象；
//    *p = 20;  // 将地址p所对应的变量的值改为20；
//    printf("a = %d\n",a);
//    //printf("%p\n",&a);
//    //printf("%p\n",p);
//    return 0;
//}


int main()
{
    char ch = 'w';
    char* pc = &ch;
    printf("%d\n",sizeof pc);
   // *pc = 'a';
   // printf("%c\n",ch);
    return 0;

}

// 指针大小在32位平台上是4个字节，64位平台上8个字节