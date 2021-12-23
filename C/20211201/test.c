#include <stdio.h>

//int main()
//{
//    //数组名是首元素地址，例外：
//    //1 sizeof(数组名) -- 数组名表示整个数组
//    //2 &数组名--- 数组名表示整个数组
//    int a[] = {1, 2, 3, 4};
//    printf("%d\n", sizeof(a));         // --- 计算的是数组总大小---单位是字节--16
//    printf("%d\n", sizeof(a + 0));     //这里是首元素地址---4/8
//    printf("%d\n", sizeof(*a));        //这是首元素地址，解应用找到首元素---4个字节
//    printf("%d\n", sizeof(a + 1));     //是第二个元素的地址，地址大小是4/8个字节
//    printf("%d\n", sizeof(&a));        //&a取出的是数组的地址，但也是地址，地址的大小就是4/8个字节
//    printf("%d\n", sizeof(*&a));       //16，&a是数组的地址，数组的地址解应用访问的是数组
//    printf("%d\n", sizeof(&a + 1));    //4/8，&a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址，所以是4/8个字节
//    printf("%d\n", sizeof(&a[0]));     //4/8，a[0]代表第一个元素的地址
//    printf("%d\n", sizeof(&a[0] + 1)); //4/8，&a[0]+1 是第二个元素的地址
//    return 0;
//}

//int main()
//{
//    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//    printf("%d\n", sizeof(arr));         //6---计算的数组的大小，6*1--6个字节
//    printf("%d\n", sizeof(arr + 0));     //8---这里的arr是首元素的地址，所以+0还是首元素的地址---地址的大小是4/8
//    printf("%d\n", sizeof(*arr));        //1
//    printf("%d\n", sizeof(arr[1]));      //1
//    printf("%d\n", sizeof(&arr));        //8
//    printf("%d\n", sizeof(&arr + 1));    // 8
//    printf("%d\n", sizeof(&arr[0] + 1)); //8
//    return 0;
//}


int main()
{
    //strlen() --- 要的是地址
    char arr[] = {'a','b','c','d','e','f'};
    printf("%d\n",strlen(arr)); //  没有'\0'--随机值
    printf("%d\n",strlen(arr + 0));// 同理，--随机值
    printf("%d\n",strlen(*arr));//error//这是取得第一个元素'a'，但是strlen要的是地址，报错
    printf("%d\n",strlen(arr[1]));
    printf("%d\n",strlen(&arr));
    printf("%d\n",strlen(&arr + 1));
    printf("%d\n",strlen(&arr[0] + 1));


}