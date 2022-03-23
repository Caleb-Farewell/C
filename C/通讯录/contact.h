
#define Max 1000
#define Max_name 20
#define Max_sex  5
#define Max_tele  12
#define Max_addr  30

#include <stdio.h>
#include <string.h>

enum Option  //枚举
{
    EXIT,//0
    ADD,//1
    DEL,
    SEARCH,
    MODIFY,
    SHOW,
    SORT
};

struct PeoInfo
{
    char name[Max_name];
    int age;
    char sex[Max_sex];
    char tele[Max_tele];
    char addr[Max_addr];
};


//通讯录的类型
struct Contact
{
    struct PeoInfo data[Max];//存放一千个信息，一千个name、age等等
   // struct PeoInfo *data;
    int size
    
};

//声明函数
void InitContace(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);//只显示通讯里，而不更改，所以用const
//删除指定的联系人
void DelContact(struct Contact* ps);
//查找指定人的信息
void SearchContact(const struct Contact* ps); 
//修改指定联系人
void ModifyContact(struct Contact* ps);


