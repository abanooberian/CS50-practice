#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int price = get_int("price: \n");
    int quantity = get_int("quantity: \n");
    int total = price*quantity;

    printf("Total is %i\n" , total);
    if (total >= 500)
{
    printf("Congratulations! You got a discount.\n");
    total = total - 50;
    printf("New total after discount is %i\n", total);
}
else
{
    printf("No discount available.\n");
}
}
