#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void menu2()
{
    system("cls");

    printf("1> name \t 2> age\n");
    printf("3> sex \t 4> address\n");
    printf("5> phone\n");
    printf("Please select:");
}

//静态
//void init_contact(contact* con)
//{
//    assert(con);
//
//    // person per[NUM]    sz
//    con->sz = 0;
//    memset(con->per, 0, NUM * sizeof(person));
//}

//动态
void init_contact(contact* con)
{
    assert(con);

    // per    sz ContactMax
    con->sz = 0;

    person* p = (person*)calloc(Max, sizeof(person));
    if (p == NULL)
    {
        perror("init_contact::calloc");
        return;
    }

    con->per = p;
    con->ContactMax = Max;
}

//将文件信息保存到通讯录中
void load_contact(contact* con)
{
   //打开文件
    FILE* p = fopen("contact.txt", "rb");
    if (p == NULL)
    {
        perror("load_contact::fopen");
        return;
    }

    person tmp = { 0 };
    size_t i = 0;
    while(fread(&tmp, sizeof(person), 1, p))
    {
        //考虑增容
        tune(con);
        con->per[i] = tmp;
        con->sz++;
        i++;
    }
    //关闭文件
    fclose(p);
    p = NULL;
}

//静态添加通讯录成员
//void increase_contact(contact* con)
//{
//    assert(con);
//
//    if (con->sz == NUM)
//    {
//        printf("The address book is full.\n");
//        return;
//    }
//
//    printf("name:");
//    scanf("%s", &(con->per[con->sz].name));
//    printf("age:");
//    scanf("%u", &(con->per[con->sz].age));
//    printf("sex:");
//    scanf("%s", &(con->per[con->sz].sex));
//    printf("address:");
//    scanf("%s", &(con->per[con->sz].address));
//    printf("phone:");
//    scanf("%s", &(con->per[con->sz].phone));
//
//    (con->sz)++;
//}

void tune(contact* con)
{
    if (con->sz == con->ContactMax)
    {
        person *p = (person *)realloc(con->per, (con->ContactMax + Max) * sizeof(person));
        if (p == NULL)
        {
            perror("tune::realloc");
            return;
        }

        con->per = p;
        con->ContactMax += Max;
    }
}

//动态开辟
void increase_contact(contact* con)
{
    assert(con);
    //检测当前通讯录是否需要增容
    tune(con);

    printf("name:");
    scanf("%s", &(con->per[con->sz].name));
    printf("age:");
    scanf("%u", &(con->per[con->sz].age));
    printf("sex:");
    scanf("%s", &(con->per[con->sz].sex));
    printf("address:");
    scanf("%s", &(con->per[con->sz].address));
    printf("phone:");
    scanf("%s", &(con->per[con->sz].phone));

    (con->sz)++;
}

void delete_contact(contact* con)
{
    assert(con);

    int result = find1(&con);
            
    if (result != -1)
    {
        char true[5] = { 0 };
        printf("Are you sure you want to delete %s's information?", &con->per[result].name);
        printf("yes/no:");
        scanf("%s", true);

        if (!strcmp(true, "yes"))
        {
            if ( con->sz )
            {
                memmove(con->per[result].name, con->per[(con->sz) - 1].name, sizeof(con->per[0]));
            }
            else
            {
                memset(con->per[result].name, 0, sizeof(con->per[0]));
            }
            (con->sz)--;
            printf("The deletion was successful, thanks for using!\n");          
        }
        else
        {
            printf("Delete failed, please try again!\n");
        }
    }
    else
    {
        printf("Delete failed, please try again!\n");
    }
}

int find1(const contact** con)
{
    assert(*con);

    size_t i = 0;
    char sample1[20] = { 0 };

    printf("请输入你要查找的名字:");
    scanf("%s", sample1);

    while (i < (*con)->sz)
    {
        if (!strcmp(sample1, (*con)->per[i].name))
        {
            return i;
        }
        else
        {
            i++;
        }
    }

    return -1;
}

void find_contact(const contact* con)
{
    assert(con);

    int result = find1(&con);

    if (result != -1)
    {
        printf("Found, the basic information of the contact is:");
        printf("name:%-20s\tage:%-4d\tsex:%-5s\taddress:%-30s\tphone:%-12s\n",
            con->per[result].name,
            con->per[result].age,
            con->per[result].sex,
            con->per[result].address,
            con->per[result].phone);
    }
    else
    {
        printf("Didn't find it!\n");
    }

}

void revise_contact(contact* con)
{
    assert(con);

    int result = find1(&con);

    if (result != -1)
    {
        char choice1[5] = { 0 };
        printf("Are you sure you want to revise %s's information?", con->per[result].name);
        printf("yes/no:");
        scanf("%s", choice1);

        if (!strcmp(choice1, "yes"))
        {
            menu2();
            printf("Please enter the option you want to modify:");
            int choice2 = -1;
            scanf("%d", &choice2);

            char sample1[30] = { 0 };
            size_t sample2 = 0;

            printf("请输入:");
            switch ( choice2 )
            {
            case 1:
            case 3:
            case 4:
            case 5:
                scanf("%s", sample1);
                break;
            case 2:
                scanf("%d", sample2);
                break;
            }

            switch (choice2)
            {
            case 1:
                memmove(con->per[result].name, sample1, sizeof(sample1));
                break;
            case 3:
                memmove(con->per[result].sex, sample1, sizeof(sample1));
                break;
            case 4:
                memmove(con->per[result].address, sample1, sizeof(sample1));
                break;
            case 5:
                memmove(con->per[result].phone, sample1, sizeof(sample1));
                break;
            case 2:
                con->per[result].age = sample2;
                break;
            }

            printf("修改成功，感谢使用！！！\n");
        }
        else
        {
            printf("修改失败，请再次尝试！！！\n");
        }
    }
    else
    {
        printf("修改失败，请再次尝试！！！\n");
    }
}

void show_contact(const contact* con)
{
    assert(con);

    printf("\n\n================================================\n");
    printf("================================================\n\n");

    if ( con->sz )
    {
        size_t i = 0;
        for (; i < (con->sz); i++)
        {
            printf("name:%-20s\tage:%-4d\tsex:%-8s\taddress:%-15s\tphone:%-12s\n",
                con->per[i].name, con->per[i].age, con->per[i].sex,
                con->per[i].address, con->per[i].phone);
        }
        printf("\n\n");
    }
    else
    {
        printf("There is no contact information in the address book!\n");
    }
}

int cmp_char(const void* str1, const void* str2)
{
    return strcmp(((person*)str1)->name, ((person*)str2)->name);
}

void sort_contact(contact* con)
{
    qsort(con -> per[0].name, con -> sz, sizeof(con -> per[0]), cmp_char);
}

void destroy_contact(contact* con)
{
    free(con->per);
    con->per = NULL;
    con->ContactMax = 0;
    con->sz = 0;
    con = NULL;
}

void save_contact(contact* con)
{
    //写文件
    FILE* p = fopen("contact.txt", "wb");
    if (p == NULL)
    {
        perror("save_contact::fopen");
        return;
    }

    int i = 0;
    for (i = 0; i < con->sz; i++)
    {
        fwrite(con->per + i, sizeof(person), 1, p);
    }
    //关闭文件
    fclose(p);
    p = NULL;
    printf("保存成功\n");
}