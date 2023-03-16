#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<stdlib.h>

//#define NUM 100

#define Max 10


enum function
{
    quit,//退出  默认值为0
    increase,//增加  默认值为1
    delete,//删除  默认值为2
    find,//查找   默认值为3
    revise,//修改   默认值为4
    show,//展示   默认值为5
    empty,//清空   默认值为6
    sort//排序   默认值为7
};

//创建人
typedef struct Person
{
    char name[20];//姓名
    size_t age;//年龄
    char sex[8];//性别
    char address[15];//地址
    char phone[12];//电话
}person;

//静态
//typedef struct contact
//{
//    person per[NUM];
//    size_t sz;
//}contact;

//动态
//创建通讯录
typedef struct contact
{
    person *per;//指向人这个结构体类型
    size_t sz;//通讯录已有人员个数
    size_t ContactMax;//通讯录当前最大容量
}contact;

//初始化
void init_contact(contact* con);
//增容
void tune(contact* con);
//增加
void increase_contact(contact* con);
//删除
void delete_contact(contact* con);
//查找
//return -1(no) / address(yes)
int find1(const contact** con);
void find_contact(const contact* con);
//修改
void revise_contact(contact* con);
//展示
void show_contact(const contact* con);
//排序通讯录
void sort_contact(contact* con);
//销毁通讯录
void destroy_contact(contact* con);
//保存文件
void save_contact(contact* con);
//将文件信息保存到通讯录中
void load_contact(contact* con);
