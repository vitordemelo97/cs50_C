#include <stdio.h>
#include <cs50.h>

// Prototype
float getPositiveCashNumbers();
// Main
int main(void)
{
    // Geting the debit (c)
    float c = getPositiveCashNumbers();

    // changing c to integer cents
    c = c * 100 + .5;
    printf("You will recive:\n");

    // Defining the coins
    float tf = 25;
    float tn = 10;
    float fv = 5;
    float oe = 1;

    // Number of coins variable
    int ntf = 0;
    int ntn = 0;
    int nfv = 0;
    int noe = 0;
    int numberOfCoins = 0;

    // Dividing in coins
    if (c >= 25)
    {
        ntf = c / tf;
        // Changing the variable c (cash) with de rest of the division
        c = (int) c % (int) tf;
    }
    printf("%i coins of U$ 0.25\n", ntf);
    if (c >= 10)
    {
        ntn = c / tn;
        // Changing the variable c (cash) with de rest of the division
        c = (int) c % (int) tn;
    }
    printf("%i coins of U$ 0.10\n", ntn);
    if (c > 4)
    {
        nfv = c / fv;
        // Changing the variable c (cash) with de rest of the division
        c = (int) c % (int) fv;
    }
    printf("%i coins of U$ 0.05\n", nfv);
    if (c > 0)
    {
        noe = c / oe;
        // Changing the variable c (cash) with de rest of the division
        c = (int) c % (int) oe;
    }
    printf("%i coins of U$ 0.01\n", noe);

    numberOfCoins = ntf + ntn + nfv + noe;
    printf("You recive a total of %i coins.\n", numberOfCoins);

}

float getPositiveCashNumbers(void)
{
    float n;
    do
    {
        n = get_float("How much is the debit: U$ ");
    }
    while (n < 0);
    return n;
}