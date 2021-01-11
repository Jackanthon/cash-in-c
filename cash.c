#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int q = 25;
    int d = 10;
    int n = 5;
    int p = 1;
    float dollar;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    do
    {
        dollar = get_float("Enter your change: ");
    }
    while (dollar <= 0); //dollar is greater than or equal to 0
    int change = round (dollar*100);
    int coins = 0; //number of current coins
    while (change >= q) //quarters are less than or equal to change
    {
        change -= q; //change = equals total change - 25
        coins++; // adding each coin until unsignifanct ammount
        quarters = coins;
        //printf("Total quarters: %i", change -= q);
    }
    while (change >= d)
    {
        change -= d;
        coins++;
        dimes = coins;
    }
    while (change >= n)
    {
        change -= n;
        coins++;
        nickels = coins;
    }
    while (change >= p)
    {
        change-= p;
        coins++;
        pennies = coins - quarters - dimes - nickels;
    }
    printf("That's a total of %i coins\n", coins);
    printf("Quarters: %i\nDimes: %i\nNickels: %i\nPennies: %i\n", quarters, dimes, nickels, pennies);
}