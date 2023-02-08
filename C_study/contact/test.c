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
    printf("*******   0> Quit Contacts      ******\n");
    printf("**************************************\n");
}

void test()
{
    //create contacts
    contact con;
    //initialize contacts
    init_contact(&con);

    size_t choice = 0;
    do
    {
        menu1();
        printf("Enter the feature options you need:");
        scanf("%u", &choice);

        switch (choice)
        {
        case 1:
            increase_contact(&con);
            break;
        case 2:
            delete_contact( &con );
            break;
        case 3:
            find_contact(&con);
            break;
        case 4:
            revise_contact(&con);
            break;
        case 5:
            show_contact(&con);
            break;
        case 0:
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