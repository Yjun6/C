#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void menu1()
{
    printf("**************************************\n");
    printf("******* Simplified address book ******\n");
    printf("*******   1> increase contact   ******\n");
    printf("*******   2> delete contact     ******\n");
    printf("*******   3> find contact       ******\n");
    printf("*******   4> revise contact     ******\n");
    printf("*******   5> Show all contacts  ******\n");
    printf("*******   6> Empty all contacts ******\n");
    printf("*******   7> Sort by name       ******\n");
    printf("*******   0> Quit Contacts      ******\n");
    printf("**************************************\n");
}

void test()
{
    //创建通讯录
    contact con;
    //初始化通讯录
    init_contact(&con);
    //将文件信息保存到通讯录中
    load_contact(&con);

    size_t choice = 0;
    do
    {
        menu1();
        printf("请输入您的选择性:");
        scanf("%u", &choice);

        switch (choice)
        {
        case increase:
            //增加
            increase_contact(&con);
            break;
        case delete:
            //删除
            delete_contact( &con );
            break;
        case find:
            //查找
            find_contact(&con);
            break;
        case revise:
            //修改
            revise_contact(&con);
            break;
        case show:
            //展示
            show_contact(&con);
            break;
        case empty:
            //清空
            init_contact(&con);
            break;
        case sort:
            //排序
            sort_contact(&con);
            break;
        case quit:
            //保存
            save_contact(&con);
            //销毁
            destroy_contact(&con);
            printf("Exiting Contacts...\n");
            break;
        default:
            printf("You entered the wrong number, please re-enter it.\n");
            break;
        }
    } while (choice);

    printf("Exited Contacts.\n");

}

int main()
{
    test();
    return 0;
}