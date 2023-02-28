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
        case increase:
            increase_contact(&con);
            break;
        case delete:
            delete_contact( &con );
            break;
        case find:
            find_contact(&con);
            break;
        case revise:
            revise_contact(&con);
            break;
        case show:
            show_contact(&con);
            break;
        case empty:
            init_contact(&con);
            break;
        case sort:
            sort_contact(&con);
            break;
        case quit:
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