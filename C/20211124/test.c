#include <stdio.h>
//int main()
//{
//    //int* p = NULL; // p是整型指针--指向整型的指针---可以存放整形的地址
//    //char* pc = NULL; //pc是字符指针--指向字符的指针--可以存放字符的地址
//    ////数组指针--指向数组的指针---存放数组的地址
//    //
//    //int arr[10] = {0};
//    //// arr-- 首元素地址
//    //// &arr[0]--首元素的地址
//    //// &arr -- 数组的地址
//
//
//   //int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//   //int (*p)[10] = &arr; // 数组的地址存储起来
//   //// 上面的p就是数组指针
//   //int *p1[10] // 这是一个存放指针的数组
//   //// (*p)[10] 则表示数组指针，因为p先和*结合，说明是一个指针，如何指向大小为10个整型的数组
//   ////而[]的优先级高于*，所以数组指针必须加上()
//
//
//  //char* arr[5];
//  //char*(*pa)[5] = &arr; // 因为指向的数组类型是char*，因此前面还要加*
//  //// char*--pa指向的数组类型是char*
//  //// (*pa)--说明pa是指针
//  //// [5]--pa指向的数组是5个元素
//
//  ////&arr+1---跳过一个数组
//  ////arr+1---跳过一个元素
//
//}

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//   //int (*pa)[10] = &arr; // 数组指针--存放数组的地址
//   //int i = 0;
//   //for(i=0;i<10;i++)
//   //{
//   //    printf("%d ",*(*pa+i));
//   //}
//   int* pa = arr; //数组首元素地址
//   int i = 0;
//   for(i=0;i<10;i++)
//   {
//       printf("%d ",*(pa+i));
//   }
//
//}



//void print1(int arr[3][5],int x,int y)
//{
//    int i = 0; int j = 0;
//    for(i=0;i<x;i++)
//    {
//        for(j=0;j<y;j++)
//        {
//            printf("%d ",arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//void print2(int (*pa)[5], int x,int y)
//{
//    int i = 0;int j = 0;
//    for(i=0; i<x;i++)
//    {
//        for(j=0;j<y;j++)
//        {
//          // printf("%d ",*(*(pa+i)+j)); //pa+i 是找到那一行的地址
//             printf("%d ",pa[i][j]);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//    print1(arr,3,5);
//    print2(arr,3,5); //arr -- 传递过去的是首元素地址（二维数组的话就是第一行的地址）
//}


int main()
{
    
}