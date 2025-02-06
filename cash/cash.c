#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickles(int cents);
int calculate_pennies(int cents);


int main(void)
{
    // Prompt the user for change owed, in cents
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Calculate how many quarters you should give customer
    int quarters = calculate_quarters(cents);

    // Subtract the value of those quarters from cents
    cents = cents - (quarters * 25);

    // Calculate how many dimes you should give customer
    int dimes = calculate_dimes(cents);

    // Subtract the value of those dimes from cents
    cents = cents - (dimes * 10);


    // Calculate how many dimes you should give customer
    int nickles = calculate_nickles(cents);

    // Subtract the value of those nickles from cents
    cents = cents - (nickles * 5);


    // Calculate how many  you should give customer
    int pennies = calculate_pennies(cents);

    int sum = quarters + dimes + nickles + pennies;

    printf("%d\n",sum);

    return 0;
}

int calculate_quarters(int cents)
{
    // Calculate how many quarters you should give customer
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    // Calculate how many dimes you should give customer
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }
    return dimes;
}

int calculate_nickles(int cents)
{
   // Calculate how many nickels you should give customer
    int nickles = 0;
    while (cents >= 5)
    {
        nickles++;
        cents = cents - 5;
    }
    return nickles;
}

int calculate_pennies(int cents)
{
    // Calculate how many pennies you should give customer
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents = cents - 1;
    }
    return pennies;
}
