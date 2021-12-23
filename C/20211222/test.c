#include <stdio.h>

#include <string.h>
#include <stdlib.h>

//char* GetMemory(char *p)
//{
//    p = (char *)malloc(100);
//    return p;
//}
//
//void test(void)
//{
//    char *str = NULL;
//    char* str1 = GetMemory(str);
//    strcpy(str1, "hello world");
//    printf(str1);
//    free(str1);
//    str1 = NULL;
//}
//
//int main()
//{
//    test();
//}



//void GetMemory(char**p)
//{
//    *p = (char *)malloc(100);
//}
//
//void test(void)
//{
//    char *str = NULL;
//     GetMemory(&str);
//    strcpy(str, "hello world");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//
//int main()
//{
//    test();
//}


//返回栈空间的地址的问题（非法访问内存问题）
//char* GetMemory(void)
//{
//    char p[] = "hello world";
//    return p;
//}
//
//void test()
//{
//    char* str = NULL;
//    str = GetMemory();
//    printf(str);
//}
//
//int main()
//{
//    test();
//
//}


//free（）释放str指向的空间后，并不会赋值为空指针，需要自己赋值


