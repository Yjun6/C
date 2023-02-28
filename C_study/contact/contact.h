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
    quit,
    increase,
    delete,
    find,
    revise,
    show,
    empty,
    sort
};

typedef struct Person
{
    char name[20];
    size_t age;
    char sex[5];
    char address[30];
    char phone[12];
}person;

//静态
//typedef struct contact
//{
//    person per[NUM];
//    size_t sz;
//}contact;

//动态
typedef struct contact
{
    person *per;
    size_t sz;//通讯录已有人员个数
    size_t ContactMax;//通讯录当前最大容量
}contact;

void init_contact(contact* con);

void increase_contact(contact* con);

void delete_contact(contact* con);

//return -1(no) / address(yes)
int find1(const contact** con, size_t choice);
void find_contact(const contact* con);

void revise_contact(contact* con);

void show_contact(const contact* con);
//排序通讯录
void sort_contact(contact* con);
//销毁通讯录
void destroy_contact(contact* con);

