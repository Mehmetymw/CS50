#include <stdio.h>
#include <cs50.h>

int calculator(int cents);

int main(void)
{
    int cents;
    do
    {
        printf("Change owed: ");
        cents = get_int();
    }
    while(cents < 0);

    int quarters = calculator(cents);
    printf("Quarters: %d\n", quarters);

    return 0;
}


int calculator(int cents)
{
    int quarters = 0;

    while(cents >= 25)
    {
        cents = cents - 25;
        quarters++;
    }

    return quarters;
}
