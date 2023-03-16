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
    quit,//�˳�  Ĭ��ֵΪ0
    increase,//����  Ĭ��ֵΪ1
    delete,//ɾ��  Ĭ��ֵΪ2
    find,//����   Ĭ��ֵΪ3
    revise,//�޸�   Ĭ��ֵΪ4
    show,//չʾ   Ĭ��ֵΪ5
    empty,//���   Ĭ��ֵΪ6
    sort//����   Ĭ��ֵΪ7
};

//������
typedef struct Person
{
    char name[20];//����
    size_t age;//����
    char sex[8];//�Ա�
    char address[15];//��ַ
    char phone[12];//�绰
}person;

//��̬
//typedef struct contact
//{
//    person per[NUM];
//    size_t sz;
//}contact;

//��̬
//����ͨѶ¼
typedef struct contact
{
    person *per;//ָ��������ṹ������
    size_t sz;//ͨѶ¼������Ա����
    size_t ContactMax;//ͨѶ¼��ǰ�������
}contact;

//��ʼ��
void init_contact(contact* con);
//����
void tune(contact* con);
//����
void increase_contact(contact* con);
//ɾ��
void delete_contact(contact* con);
//����
//return -1(no) / address(yes)
int find1(const contact** con);
void find_contact(const contact* con);
//�޸�
void revise_contact(contact* con);
//չʾ
void show_contact(const contact* con);
//����ͨѶ¼
void sort_contact(contact* con);
//����ͨѶ¼
void destroy_contact(contact* con);
//�����ļ�
void save_contact(contact* con);
//���ļ���Ϣ���浽ͨѶ¼��
void load_contact(contact* con);
