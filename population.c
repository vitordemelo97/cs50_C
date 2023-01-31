#include <stdio.h>
#include <cs50.h>

// Prototype
int startPopulation(void);
int finalPopulation(int s);
int yearsOfPopulation(int s, int f);

// Main
int main(void)
{
    // Get what is the Lhama start population.
    int s = startPopulation();
    // Get what is the Lhama final population.
    int f = finalPopulation(s);
    // Calcule in how many years the Lhama's population will get reached.
    int y = yearsOfPopulation(s, f);
    // Print the years in the screen.
    printf("Years: %i\n", y);
}

// This function will get a start population
int startPopulation(void)
{
    int n;
    do
    {
        n = get_int("How much is the start population? ");
    }
    // Using a "while" function to get only numbers greater than 9.
    while (n < 9);
    return n;
}

// This function will get a final population
int finalPopulation(int s)
{
    int n;
    do
    {
        n = get_int("How much is the final population? ");
    }
    // Using a "while" function to get only numbers greater than the variable "s".
    while (n < s);
    return n;
}

// This function will calculate in how many years the population gonna be reached.
int yearsOfPopulation(int s, int f)
{
    // Using "if" function to return a value based in the variable "s" and "f"
    if (s == f)
    {
        return 0;
    }
    else
    {
        int c = 0;
        int y = 0;
        while (c < f)
        {
            // This equation is the algorithim of Lhama's population.
            c = (s / 3) + s - (s / 4);
            s = c;
            // Add 1 to variable "y" eache time "while" function works.
            y++;
        }
        return y;
    }
}