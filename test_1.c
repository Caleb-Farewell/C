#include <stdio.h> // 包含一个叫stdio.h的文件
//int 是整型的意思
// main前面的int表示main函数调用返回一个整型值
//int main() // 主函数-程序的入口-有且只有一个
//{
//  // char a = 'A';
//  // int b = 20;
//  // double d =3.14;
//  // printf("%d\n",b);
//  // printf("%c\n",a);
//  // printf("%lf\n",d);
//  printf("%d\n",sizeof(char));  //sizeof运算符，可以算出字节数
//  printf("%d\n",sizeof(int));
//  printf("%d\n",sizeof(short));
//  printf("%d\n",sizeof(long));
//  printf("%d\n",sizeof(double));


//  // bit-比特位；byte-字节；kb;mb;gb;tb;pb;1个字节=8个比特位
//    //printf("helloword!\n");
//    return 0; // 返回 0
//}


//int a = 100;
//
//int main()
//{
//    int a = 10;
//    // 局部变量和全局变量的名字尽量不相同；相同时，局部变量优先
//    printf("%d\n",a);
//    return 0;
//}

//int main()
//{
//    int num1 = 0; int num2 = 0; int sum = 0;
//    printf("num1=,num2=\n");
//    scanf("%d,%d", &num1, &num2); // 输入数据-使用函数scanf
//    sum = num1 + num2;
//    printf("sum=%d\n",sum);
//    return 0;
//}

int main()
{
    extern int num1;   // 声明extern外部符号的
    printf("num1=%d\n",num1); 
    return 0;
}