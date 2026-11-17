#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int price = get_int("price: \n");
    int quantity = get_int("quantity: \n");
    int total = price*quantity;

    printf("Total is %i\n" , total);
}
