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

//��̬
//typedef struct contact
//{
//    person per[NUM];
//    size_t sz;
//}contact;

//��̬
typedef struct contact
{
    person *per;
    size_t sz;//ͨѶ¼������Ա����
    size_t ContactMax;//ͨѶ¼��ǰ�������
}contact;

void init_contact(contact* con);

void increase_contact(contact* con);

void delete_contact(contact* con);

//return -1(no) / address(yes)
int find1(const contact** con, size_t choice);
void find_contact(const contact* con);

void revise_contact(contact* con);

void show_contact(const contact* con);
//����ͨѶ¼
void sort_contact(contact* con);
//����ͨѶ¼
void destroy_contact(contact* con);

