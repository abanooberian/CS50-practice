#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int price = get_int("price: \n");
    int quantity = get_int("quantity: \n");
    int total = price*quantity;

    printf("Total is %i\n" , total);
    if (total >= 1000)
{
    printf("You got a VIP gift!\n");
}
else
{
    printf("Thank you for shopping!\n");
}
}
