#include <cs50.h>
#include <stdio.h>
int main(void)
{
    string name = get_string("what's your name?\n");
    printf("Hello, %s\n", name);
    string product = get_string("What is the name of the product you are buying?\n");
    printf("you selected %s!\n", product);
}
