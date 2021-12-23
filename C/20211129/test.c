#include <stdio.h>

//char* my_strcpy(char* dest, const char* src);
//char* (*pa)(char* , const char*);
//char* (*pfArr[4]) (char* , const char*);

// 计算器
//void menu()
//{
//    printf("*************************\n");
//    printf("**  1.add         2.sub**\n");
//    printf("**  4.mul         4.div**\n");
//    printf("**         0.ext       **\n");
//    printf("*************************\n");
//}
//
//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int Sub(int x, int y)
//{
//    return x - y;
//}
//
//int Mul(int x, int y)
//{
//    return x * y;
//}
//
//int Div(int x, int y)
//{
//    return x / y;
//}
//
////int main()
////{
////    int input = 0;
////    int x = 0;
////    int y = 0;
////    do
////    {
////        menu();
////        printf("请选择:>");
////        scanf("%d", &input);
////        printf("请输入两个操作数:>");
////        scanf("%d %d", &x, &y);
////        switch (input)
////        {
////        case 1:
////            printf("%d\n", Add(x, y));
////            break;
////        case 2:
////            printf("%d\n", Sub(x, y));
////            break;
////        case 3:
////            printf("%d\n", Mul(x, y));
////            break;
////        case 4:
////            printf("%d\n", Div(x, y));
////            break;
////        case 0:
////            printf("exit");
////            break;
////        default:
////            printf("选择错误");
////            break;
////        }
////    } while ((input));
////
////}
//
//int main()
//{
//    int input = 0;
//    int x = 0, y = 0;
//    int (*pfArr[5])(int, int) = {0, Add, Sub, Mul, Div}; //函数指针数组
//
//    do
//    {
//        menu();
//        printf("请选择:>");
//        scanf("%d", &input);
//        if (input >= 1 && input <= 4)
//        {
//            printf("请输入两个操作数:>");
//            scanf("%d,%d", &x, &y);
//            int ret = pfArr[input](x, y);
//            printf("%d\n", ret);
//        }
//        else if (input == 0)
//        {
//            printf("退出\n");
//        }
//        else
//        {
//            printf("选择错误\n");
//        }
//    } while (input);
//}

// 回调函数：一个通过函数指针调用的函数
//void Calc(int (*pf)(int,int))
//{
//    int x = 0,y=0;
//    printf("请输入两个数:>");
//    scanf("%d,%d",&x,&y);
//    printf("%d\n",pf(x,y));
//
//}
//
//int main()
//{
//    int input = 0;
//    do
//    {
//        menu();
//        printf("选择:>");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            Calc(Add);//将函数的指针（地址）作为参数传递给另一个函数
//            break;
//        case 2:
//            Calc(Sub);
//            break;
//        case 3:
//            Calc(Mul);
//            break;
//        case 4:
//            Calc(Div);
//            break;
//        case 0:
//            printf("exit");
//        default:
//            break;
//        }
//    }while (input);
//
//}

//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int main()
//{
//    int arr[10] = {0};
//    int(*p)[10] = &arr;
//
//    int (*pfArr[4])(int, int); //pfArr是一个数组---函数指针的数组
//    int (*(*ppfArr)[4])(int, int) = &pfArr;
//    //ppfArr是一个数组指针，指针指向的数组有4个元素
//    //指向的数组的每个元素的类型是一个函数指针 int(*) (int,int)
//}


//void print(char * str)
//{
//    printf("hehe:%s",str);
//}
//void test(void (*p)(char*))
//{
//    printf("test\n");
//    p("bit");
//}
//
//int main()
//{
//    test(print);
//    return 0;
//}