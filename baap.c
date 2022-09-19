#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
/*    ...   ...   ... Title : Clothing  Strore ...   ...   ...     */

int run(int *first_choise);
int fuc2(int choise1);
int admin();
int contomer();
int happy();
int decotation();
int selection(int num, int cloth_choice);
struct billing
{
    int value;
    char name[20];
};
int laiihappy();

int main()
{
    int first_choise;
    system("cls");
    run(&first_choise);
    // printf("%d", first_choise);
    return 0;
}

int run(int *first_choise)
{
    int choise1;
    int num;
    decotation();
    printf(("Who are you .... \n\n\t1. Owner \n\t2. Costomer \n\t3. Need a Help"));
    printf("\n\nEnter Your Choise (1/2/3):\n");
    scanf("%d", &choise1);
    printf("You Have selected %d \n\n", choise1);
    *first_choise = choise1;
    system("cls");
    fuc2(choise1);
}

int fuc2(int choise1)
{
    int num = choise1;
    if (num == 1)
    {
        printf("Opening admin page\n");
        admin();
    }
    else if (num == 2)
    {
        printf("This is for costomer.....\n");
        contomer();
    }
    else
    {
        printf("This is created by Atharv \nKindly contact to \n\t:- +918485898613  \n");
    }
    int i;
    int first_choise;
    printf("Enter zero to (Exit) : ");
    scanf("%d", &i);
    if (i == 0)
    {
        system("cls");
        run(&first_choise);
    }
}

int admin()
{
    int pass, x = 10;
    while (x != 0)
    {
        printf("\nInput the password: \n");
        scanf("%d", &pass);
        if (pass == 1234)
        {
            printf("Correct password\n");
            x = 0;
        }
        else
        {
            printf("Wrong password, try another\n");
        }
        printf("\n");
    }
    printf("This is for admin.....\n");
}

int contomer()
{
    struct billing cloth[100];
    int num, cloth_choice;
    int price[num];
    time_t t = time(NULL);
    decotation();
    printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb___What You Want To Purchase___\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("1.Sweater\n2.Shirt.\n3.Jeans.\n4.Gloves.\n5.Cap.\n6.Suit. \n7.T-Shirts\n\n");
    printf("How many clothes do you want to purchase :");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter your choice %d :  ", i + 1);
        scanf("%d", &cloth_choice);
        if (cloth_choice == 1)
        {
            strcpy(cloth[i].name, "Sweater");
            cloth[i].value = 999;
        }
        else if (cloth_choice == 2)
        {
            strcpy(cloth[i].name, "Shirt");
            cloth[i].value = 499;
        }
        else if (cloth_choice == 3)
        {
            strcpy(cloth[i].name, "Jeans");
            cloth[i].value = 599;
        }
        else if (cloth_choice == 4)
        {
            strcpy(cloth[i].name, "Gloves");
            cloth[i].value = 49;
        }
        else if (cloth_choice == 5)
        {
            strcpy(cloth[i].name, "Caps");
            cloth[i].value = 99;
        }
        else if (cloth_choice == 6)
        {
            strcpy(cloth[i].name, "Suits");
            cloth[i].value = 4999;
        }
        else if (cloth_choice == 7)
        {
            strcpy(cloth[i].name, "T-Shirts");
            cloth[i].value = 299;
        }
    }
    printf("Items you have purchase are :  ");
    for (int i = 0; i < num; i++)
    {

        printf("%s, ", cloth[i].name);
    }
    happy();
    printf("Billing section will opening sooon ......................");
    Sleep(10000);
    system("cls");
    // printf("\n\n");
    decotation();
    printf("\n\n\tYour shooping bill with our speial discount \n\tand gst is as follows  \n\n");printf("\n\n\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d. %s\t|\t ", i + 1, cloth[i].name);
        printf("%i\n", cloth[i].value);
    }
    int sum = 0 ;
 
    for (int i = 0; i < num; i++)
        sum = sum + cloth[i].value;
    printf("\n\n\nCalculating.................");
    Sleep(4000);
    printf("\n\n\n");
    printf("______________________________________\n");
    printf("Dear constomer yor total bill is %d\n\n\n\n", sum);
    laiihappy();
}

int happy()
{
    printf("\n\n\n\nCongratulations !!!!!! \n \tYour purchase is succesful    !!! \n\t\t Your item will deliver after billing..... \n\n\n\n\n\n");
}

int decotation()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("************************************************************\n");
    printf("                Welcome To Zara's Cloth Shop                \n");
    printf("************************************************************\n");
    printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n"); // create white spaces
    printf("\t\t\t\t\t    Date: %d/%02d/%02d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("\n \n \n");
}


int laiihappy(){
     printf("\n\n\n\nCongratulations !!!!!! \n \tYour purchase is succesful    !!! \n\t\t Your item will deliver very soon ..... \n contact to \n\tMr. Atharv Daware for any other querey  \n\n\n\n\n\n");
}