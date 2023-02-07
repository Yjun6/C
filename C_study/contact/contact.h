#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define NUM 100

typedef struct Person
{
    char name[20];
    int age;
    char sex[20];
    char address[50];
    char phone[12];
}person;

typedef struct contact
{
    person per[NUM];
    int sz;
}contact;

void init_contact(contact *con);

void increase_contact(contact *con);

void delete_contact(contact* con);

void find_contact(contact* con);

void show_contact(contact *con);

