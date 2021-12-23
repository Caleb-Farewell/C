#include <stdio.h>
//int main()
//{
//   int num1 = 0; int num2 = 0; int sum = 0;
//   printf("num1=,num2=\n");
//   scanf("%d,%d",&num1,&num2);
//   sum = num1 + num2;
//   printf("sum=%d\n",sum);
//   return 0; 
//}

//int main()
//{
//    const int num = 4;  // const 修饰常变量
//    printf("%d\n",num);
//    return 0 ;
//}

//#define max 10 // #define 定义的标识符常量，后面跟着的数字就是常值
//int main()
//{
//    int arr[max] ={0};
//    printf("%d\n",arr[2]);
//    return 0;
//}

// 枚举----enum
//enum Sex
//{
//    male,female,secret //将值一一列举出来，它是有一个确定的值的； 枚举常量的值不可以更改，但是枚举给定后的变量的值是可以更改的
//};
//int main()
//{
//    enum Sex s = male;
//    printf("%d\n",female);
//    printf("%d\n",s);
//    return 0 ;
//}


//int main()
//{
//    char arr1[] = "abc"; // 字符串赋值给数组;  这个字符串里面实际上包含 "a","b","c","\0"(\0代表字符串的结束标志)
//   //字符串的结束标志是一个\0的转义字符；在计算字符串长度的时候\0是结束标志，不算作字符串内容
//    char arr2[] = {'a','b','c','\0'};
//    char arr3[] = {'a','b','c'};
//
//    printf("%d\n",strlen(arr1)); // strlen - string length --计算字符串长度，遇到\0结束
//    printf("%d\n",strlen(arr2));
//    printf("%d\n",strlen(arr3)); // 随机值
//
//    printf("%s\n",arr1);
//    printf("%s\n",arr2);
//    return 0;
//}


// \t - 水平制表符   \\用于表示一个反斜杆
//#include <string.h>
//int main ()
//{
//    int a = 0;int b = 0; char arr1[] = "C:\\test\\32\\test.c";
//    a = strlen("C:\\test\\32\\test.c");
//    b = strlen(arr1);
//  // printf("%d\n",strlen("C:\\test\\32\\test.c"));
//    printf("a=%d,b=%d\n",a,b);
//    return 0;
//}


//  \ddd 表示1~3个八进制的数字； \xdd，dd表示2个十六进制的数字
/*
int main ()
{
    printf("%c\n",'\132');    //   \32 -- 32位2个8进制的数字，转换成十进制为3*8^1+2*8^0；所对应的ASCII码值代表的字符
    return 0;
}
*/


//int main()
//{
//    int line = 0; 
//    printf("study\n");
//    while (line<5)
//    {
//        printf("Work: %d\n",line);
//        line++;
//    }
//    printf("Success: %d\n",line);
//    return 0;
//}


int Add(int x,int y)
{
    int z = x + y;
    return z;
}

int main()
{
    int num1 = 0; int num2 = 0; int sum = 0;
    printf("num1=,num2=\n");
    scanf("%d,%d",&num1,&num2);
    sum = Add(num1,num2);
    printf("sum= %d\n",sum);
    return 0;
}