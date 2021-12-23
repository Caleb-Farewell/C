#include <stdio.h>

//void print(int n)
//{
//    if (n > 9)
//    {
//        print(n/10);
//    }
//    printf("%d ",n%10);
//
//}
//int main()
//{
//    unsigned int num = 0;
//    scanf("%d",&num);
//    print(num);
//    return  0;
//}

//int my_strlen(char*str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count ++;
//        str ++ ;
//    }
//    return count;
//
//}

//int my_strlen(char *str)
//{
//    if (*str != '\0')
//        {
//            return 1 + my_strlen(str + 1);
//        }
//    else
//        return 0;
//}
//
//int main()
//{
//    char arr[] = "bit";
//
//    int len = my_strlen(arr); // arr 是数组，数组传参，传过去的不是整个数组，而是数组的第一个元素的地址
//    printf("%d\n", len);
//    return 0;
//}

//nt Facl(int n)
//
//   if (n <= 1)
//   {
//       return 1;
//   }
//   else
//       return  n * Facl(n - 1);
//
//
//nt main()
//
//   int num = 0;
//   int ret = 0;
//   scanf("%d", &num);
//   ret = Facl(num);
//   printf("%d\n", ret);
//   return 0;
//


int Fib(int n)
{
if (n<=2)
{
    return 1;
}
else 
{
    return Fib(n-1) +Fib(n-2);
}


}

int main()
{
    int n = 0;
    int ret = 0;
    scanf("%d",&n);
    ret = Fib(n);
    printf("%d\n",ret);
}