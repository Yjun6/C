#include"contact.h"

void init_contact(contact *con)
{
    // person per[NUM]    sz
    con -> sz = 0;
    memset(con -> per, 0, NUM * sizeof( person ));
}

void increase_contact(contact *con)
{
    if(con -> sz == NUM)
    {
        printf("The address book is full.\n");
        return;
    }

    printf("name:");
    scanf("%s", &(con -> per[con -> sz].name));
    printf("age:");
    scanf("%d", &(con -> per[con -> sz].age));
    printf("sex:");
    scanf("%s", &(con -> per[con -> sz].sex));
    printf("address:");
    scanf("%s", &(con -> per[con -> sz].address));
    printf("phone:");
    scanf("%s", &(con -> per[con -> sz].phone));

    (con->sz)++;
}

void delete_contact(contact* con)
{
    printf("");
}

void find_contact(contact* con)
{
    system("cls");

    printf("1> name \t 2> age\n");
    printf("3> sex \t 4> address\n");
    printf("5> phone\n");
    printf("Please select:");

    int choice = 0;
    scanf("%d", &choice);

}


void show_contact(contact *con)
{
    int i = 0;
    for(; i < con->sz; i++)
    {
        printf("name:%s  age:%d  sex:%s  address:%s  phone:%s\n", 
                con -> per[i].name, con -> per[i].age, con -> per[i].sex,
                con -> per[i].address, con -> per[i].phone);
    }
}