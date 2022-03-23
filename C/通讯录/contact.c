#include "contact.h"

//实现函数
void InitContace(struct Contact *ps)
{
    memset(ps->data, 0, sizeof(ps->data)); //在一段内存块中填充某个给定的值
    ps->size = 0;                          //设置通讯录最初只有0个元素
}

void AddContact(struct Contact *ps)
{
    if (ps->size == Max)
        printf("通讯录已满，无法增加\n");
    else
    {
        printf("请输入名字:>");
        scanf("%s", ps->data[ps->size].name);
        printf("请输入年龄:>");
        scanf("%s", &ps->data[ps->size].age);
        printf("请输入性别:>");
        scanf("%s", ps->data[ps->size].sex);
        printf("请输入电话:>");
        scanf("%s", ps->data[ps->size].tele);
        printf("请输入地址:>");
        scanf("%s", ps->data[ps->size].addr);

        ps->size++; //存放下一个人的信息到通讯录中
        printf("添加成功\n");
    }
}

void ShowContact(const struct Contact *ps)
{
    if (ps->size == 0)
        printf("通讯录为空\n");
    else
    {
        int i = 0;
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
        //左对齐是-
        for (i = 0; i < ps->size; i++)
        {
            printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
                   ps->data[i].name,
                   ps->data[i].age,
                   ps->data[i].sex,
                   ps->data[i].tele,
                   ps->data[i].addr);
        }
    }
}

//static 声明之后，只能在这个contact.c中使用
static int FindByName( const struct Contact *ps, char name[Max_name])
{
    int i = 0;
    for (i = 0; i < ps->size; i++)
    {
        if (0 == strcmp(ps->data[i].name, name))
        {
            return i;
        }
    }
    return -1; //找不到情况
}

void DelContact(struct Contact *ps)
{
    char name[Max_name];
    printf("请输入要删除人的名字\n");
    scanf("%s", name);
    //查找要删除的人在什么位置
    //int i = 0;(原始方法)
    //for (i = 0; i < ps->size; i++)
    //{
    //    if (0 == strcmp(ps->data[i].name, name))
    //    {
    //        break;
    //    }
    //}
    //找到了返回名字所在位置的下标，找不到返回-1（新方法）
    int pos = FindByName(ps, name);
    //删除
    // if (i == ps->size)
    if (pos == -1)
        printf("要删除的人不存在\n");
    else
    {
        int j = 0;
        for (j = pos; j < ps->size - 1; j++)
        {
            ps->data[j] = ps->data[j + 1];
        }
        ps->size--;
        printf("删除成功\n");
    }
}

void SearchContact(const struct Contact *ps)
{
    char name[Max_name];
    printf("请输入要删除人的名字\n");
    scanf("%s", name);
    int pos = FindByName(ps, name);
    if (pos == -1)
        printf("要删除的人不存在\n");
    else
    {
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
        printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
               ps->data[pos].name,
               ps->data[pos].age,
               ps->data[pos].sex,
               ps->data[pos].tele,
               ps->data[pos].addr);
    }
}

void ModifyContact(struct Contact *ps)
{
    char name[Max_name];
    printf("请输入要修改人的名字");
    scanf("%s", name);
    int pos = FindByName(ps, name);
    if (pos == -1)
        printf("要修改人的信息不存在\n");
    else
    {
        printf("请输入名字:>");
        scanf("%s", ps->data[pos].name);
        printf("请输入年龄:>");
        scanf("%s", &ps->data[pos].age);
        printf("请输入性别:>");
        scanf("%s", ps->data[pos].sex);
        printf("请输入电话:>");
        scanf("%s", ps->data[pos].tele);
        printf("请输入地址:>");
        scanf("%s", ps->data[pos].addr);

        printf("修改成功\n");
    }
}