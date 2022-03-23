#include <stdio.h>

#include <stdlib.h>
//struct S
//{
//    /* data */
//    int n;
//    int arr[0];//未知大小-属于柔性数组成员----数组的大小是可以调整的
//};
//
//int main()
//{
//    struct S s;
//    printf("%d\n",sizeof(s));
//    struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
//    ps->n = 100;
//    int i = 0;
//    for(i = 0;i<5;i++)
//    {
//        ps->arr[i] = i;
//    }
//    struct S* ptr = realloc(ps,44);
//    if(ptr != NULL)
//    {
//        ps = ptr;
//    }
//    for (i=5;i<10;i++)
//    {
//        ps->arr[i] =i;
//    }
//    for(i= 0;i <10;i++)
//    {
//        printf("%d ",ps->arr[i]);
//    }
//    free(ps);
//    ps = NULL;
//
//}

//struct S
//{
//    /* data */
//    int n;
//    int *arr;
//};
//
//int main()
//{
//    struct S *ps = (struct S *)malloc(sizeof(struct S));
//    ps->arr = malloc(5 * sizeof(int));
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        ps->arr[i] = i;//arr指向的是连续的空间，因此可以当作数组
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", ps->arr[i]);
//    }
//    int *ptr = realloc(ps->arr, 10 * sizeof(int));
//    if (ptr != NULL)
//    {
//        ps->arr = ptr;
//    };
//    for (i = 5; i < 10; i++)
//    {
//        ps->arr[i] = i;
//    }
//    for (i = 5; i < 10; i++)
//    {
//        printf("%d ", ps->arr[i]);
//    }
//    free(ps->arr);//有多少个malloc，就释放多少个内存
//    ps->arr = NULL;
//    free(ps);
//    ps = NULL;
//}



int main()
{
    
}