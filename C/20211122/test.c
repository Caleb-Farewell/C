#include <stdio.h>

int main()
{
    int n = 9;
// 补码：0000 0000 0000 0000 0000 0000 0000 1001
    float *pfloat = (float*) &n;
    printf("n：%d\n",n);

    printf("*pfloat: %f\n", *pfloat);
// 存储为浮点数时由 s m e 组成
// 第一位是s  然后8为是e,其余的是m
// 可以发现e为全0，原来的+127=0
// (-1)^ 0 * 0.00000000000000000001001 * 2^-126 所以打印出来是0
    *pfloat = 9.0;
//按照浮点数存
// 1001.0
// 写成科学计数法: 1.001*2^3
// (-1)^0 *1.001 * 2^3   (存储时e要加127)
//存储到内存中 0 10000010 001(M中去除小数点前的1，然后直接写下来)
// 0 10000010 0010000000000
    printf("num= %d\n", n);
//打印整数时，直接把补码对应的数值打出来
    printf("*pfloat = %f\n", *pfloat);
//直接打印浮点数存储的数值

    return 0;

}

// 切记：整型与浮点型数据的存储与读取的方式不同//