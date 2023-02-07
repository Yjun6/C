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
    menu1();

    //create contacts
    contact con;
    //initialize contacts
    init_contact(&con);

    int choice = 0;
    do
    {
        printf("Enter the feature options you need:");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            increase_contact(&con);
            break;
        case 2:
            //delete_contact(&con);
            break;
        case 3:
            find_contact(&con);
            break;
        case 4:
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
    }while( choice );

    printf("Exited Contacts.\n");

}

int main()
{
    test();
    return 0;
}