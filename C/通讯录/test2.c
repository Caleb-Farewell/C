#include <stdio.h>
#include "contact.h"

//实现通讯录

void menu()
{
    printf("*****************************");
    printf("****1.add           2.del****");
    printf("****3.search     4.modift****");
    printf("****5.show         6.sort****");
    printf("****0.exit               ****");
    printf("*****************************");
}

int main()
{
    int input = 0;
    //创建通讯录
    // struct PeoInfo con[Max];//存放一千个人的信息
    struct Contact con; //con就是通讯录，里边包含：1000的元素的数和size
    //初始化通讯录
    InitContact(&con);

    do
    {
        meun();
        printf("请选择:>\n");
        scanf("%d", &input);
        switch (input)
        {
        case ADD:
            AddContact(&con);
            break;
        case DEL:
            DelContact(&con);
            break;
        case SEARCH:
            SearchContact(&con);
            break;
        case MODIFY:
            ModifyContact(&con);
            break;
        case SHOW:
            ShowContact(&con);
            break;
        case SORT:
            SortContact(&con);
            break;
        case EXIT:
            break;
        default:
            printf("选择错误\n");
            break;
        }
    } while (input);
    return 0;
}