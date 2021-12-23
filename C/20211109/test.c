#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
    printf("********************************************\n");
    printf("***************1.play   0.exit**************\n");
    printf("********************************************\n");
}

void Initboard(char boar[3][3], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            boar[i][j] = ' ';
        }
    }
}

void Displayboard(char arr[3][3], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        //printf(" %c | %c | %c \n", arr[i][0], arr[i][1], arr[i][2]);
        int j = 0;
        for (j = 0; j < col; j++)
        {
            printf(" %c ", arr[i][j]);
            if (j < col - 1)
            {
                printf("|");
            }
        }
        printf("\n");
        if (i < row - 1)
        {
            int z = 0;
            for (z = 0; z < col; z++)
            {
                printf("---");
                if (z < col - 1)
                {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
}

void PlayMove(char arr[3][3], int row, int col)
{
    int x = 0;
    int y = 0;
    //判断x,y的合法性
    while (1)
    {
        printf("玩家走 :>\n");
        printf("请输入要下的坐标 :>");
        scanf("%d%d", &x, &y);
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (arr[x - 1][y - 1] = ' ')
            {
                arr[x - 1][y - 1] = '*';
                break;
            }
            else
            {
                printf("该坐标被占用\n");
            }
        }
        else
        {
            printf("坐标非法,请重新输入! \n");
        }
    }
}

void ComputerMove(char arr[3][3], int row, int col)
{
    int x = 0;
    int y = 0;
    while (1)
    {
        x = rand() % row;
        y = rand() % col;
        if (arr[x][y] = ' ')
        {
            arr[x][y] = '#';
            break;
        }
        else
        {
            printf("该坐标被占用\n");
        }
    }
}

void IsWin(char arr[3][3], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ')
        {
            return arr[i][1];
        }
    }
    for (i = 0; i < row; i++)
    {
        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != ' ')
        {
            return arr[1][i];
        }
    }
    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')
        return arr[1][1];
    if (arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2] && arr[1][1] != ' ')
        return arr[1][1];
}

void game()
{
    char ret = 0;
    //产生棋格
    char arr[3][3] = {0};
    //初始化棋盘
    Initboard(arr, 3, 3);
    //打印棋盘
    Displayboard(arr, 3, 3);
    //下棋
    while (1)
    {
        // 玩家下棋
        PlayMove(arr, 3, 3);
        Displayboard(arr, 3, 3);
        //判断玩家是否赢
        ret = IsWin();
        if (ret != 'C')
        {
            break;
        }

        // 电脑下棋
        ComputerMove(arr, 3, 3);
        Displayboard(arr, 3, 3);
        //判断电脑是否赢
        IsWin(arr, 3, 3);
        if (ret != 'C')
        {
            break;
        }
    }
    if (ret == '*')
    {
        printf("玩家赢\n");
    }
    else if (ret == '#')
    {
        printf("电脑赢\n");
    }
    else
    {
        printf("平局\n");
    }
}

void test()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("三子棋\n");
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("重新选择\n");
            break;
        }
    } while (input);
}
int main()
{
    test();
    return 0;
}