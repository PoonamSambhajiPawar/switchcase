#include<stdio.h>
int main()
{
    printf("what would you like to eat : \n1. Garlic bread..! price:- Rs 75.\n2. Cheese Pizza..! price:- Rs 120.\n3. Sandwich..! price:- Rs 60.\n4. French Fries..! price:- Rs 80.\n5. Burger..! price:- Rs 80.\n");
    int choice=0;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
             printf("Your oder Garlic bread..! price:- Rs 75 ");
             break;
        case 2:
             printf("Your oder Cheese Pizza..! price:- Rs 120");
             break;
        case 3:
             printf("Your oder Sandwich..! price:- Rs 60");
             break;
        case 4:
             printf("Your oder French Fries..! price:- Rs 80");
             break;
        case 5:
             printf("Your oder Burger..! price:- Rs 80");
             break;
        default: printf("Invalid choice");
        return 0;
    }

}
