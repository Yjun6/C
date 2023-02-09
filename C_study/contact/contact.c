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

void init_contact(contact* con)
{
    assert(con);

    // person per[NUM]    sz
    con->sz = 0;
    memset(con->per, 0, NUM * sizeof(person));
}

void increase_contact(contact* con)
{
    assert(con);

    if (con->sz == NUM)
    {
        printf("The address book is full.\n");
        return;
    }

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

    menu2();

    size_t choice = 0;
    size_t result = 0;
    while (1)
    {
        scanf("%u", &choice);

        if (choice <= 5 && choice >= 1)
        {
            result = find(&con, choice);
            break;
        }
        else
        {
            printf("Your input is incorrect, please re-enter it:");
        }
    }

    if (result != -1)
    {
        char true[5] = { 0 };
        printf("Are you sure you want to delete %s's information?", &con->per[result].name);
        printf("yes/no:");
        scanf("%s", &true);

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

int find(const contact** con, size_t choice)
{
    assert(con);

    size_t i = 0;
    char sample1[30] = { 0 };
    size_t sample2 = 0;

    printf("Please enter:");
    switch (choice)
    {
    case 1:
    case 3:
    case 4:
    case 5:
        scanf("%s", &sample1);
        break;
    case 2:
        scanf("%u", &sample2);
        break;
    }

    switch (choice)
    {
    case 1:
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
        break;
    case 3:
        while (i < (*con)->sz)
        {
            if (!strcmp(sample1, (*con)->per[i].sex))
            {
                return i;
            }
            else
            {
                i++;
            }
        }
        break;
    case 4:
        while (i < (*con)->sz)
        {
            if (!strcmp(sample1, (*con)->per[i].address))
            {
                return i;
            }
            else
            {
                i++;
            }
        }
        break;
    case 5:
        while (i < (*con)->sz)
        {
            if (!strcmp(sample1, (*con)->per[i].phone))
            {
                return i;
            }
            else
            {
                i++;
            }
        }
        break;
    case 2:
        while (i < (*con)->sz)
        {
            if (sample2 == (*con)->per[i].age)
            {
                return i;
            }
            else
            {
                i++;
            }
        }
        break;
    }

    return -1;
}

void find_contact(const contact* con)
{
    assert(con);
    
    menu2();

    size_t choice = 0;
    size_t result = 0;
    while (1)
    {
        scanf("%u", &choice);

        if (choice <= 5 && choice >= 1)
        {
            result = find(&con, choice);
            break;
        }
        else
        {
            printf("Your input is incorrect, please re-enter it:");
        }
    }

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

    menu2();

    size_t choice = 0;
    size_t result = 0;
    while (1)
    {
        scanf("%u", &choice);

        if (choice <= 5 && choice >= 1)
        {
            result = find(&con, choice);
            break;
        }
        else
        {
            printf("Your input is incorrect, please re-enter it:");
        }
    }

    if (result != -1)
    {
        char true[5] = { 0 };
        printf("Are you sure you want to revise %s's information?", &con->per[result].name);
        printf("yes/no:");
        scanf("%s", &true);

        if (!strcmp(true, "yes"))
        {
            menu2();
            printf("Please enter the option you want to modify:");
            scanf("%u", &choice);

            char sample1[30] = { 0 };
            size_t sample2 = 0;

            printf("Please enter:");
            switch (choice)
            {
            case 1:
            case 3:
            case 4:
            case 5:
                scanf("%s", &sample1);
                break;
            case 2:
                scanf("%u", &sample2);
                break;
            }

            switch (choice)
            {
            case 1:
                memmove(con->per[result].name, sample1, sizeof(con->per[0].name));
                break;
            case 3:
                memmove(con->per[result].name, sample1, sizeof(con->per[0].sex));
                break;
            case 4:
                memmove(con->per[result].name, sample1, sizeof(con->per[0].address));
                break;
            case 5:
                memmove(con->per[result].name, sample1, sizeof(con->per[0].phone));
                break;
            case 2:
                con->per[result].age = sample2;
                break;
            }

            printf("The modification is complete, thanks for using!\n");
        }
        else
        {
            printf("Revise failed, please try again!\n");
        }
    }
    else
    {
        printf("Revise failed, please try again!\n");
    }
}

void show_contact(const contact* con)
{
    assert(con);

    if ( con->sz )
    {
        int i = 0;
        for (; i < (con->sz); i++)
        {
            printf("name:%-20s\tage:%-4d\tsex:%-5s\taddress:%-30s\tphone:%-12s\n",
                con->per[i].name, con->per[i].age, con->per[i].sex,
                con->per[i].address, con->per[i].phone);
        }
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