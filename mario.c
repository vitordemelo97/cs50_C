#include <stdio.h>
#include <cs50.h>

// Prototype
int getValidHeight(void);
void putHashes(int n);


// Main
int main(void)
{
    //Use it to get the height value
    int h = getValidHeight();

    //Here start a piramid loop who set how many rows it gonna be.
    for (int i = h; i > 0; i--)
    {
        // This loop create numbers of spaces equal of the number of rows you need
        for (int r = i; r > 1; r--)
        {
            printf(" ");
        }
        // this equation difines how many hashes you want to put in the row, and I call the time to Blocks (b)
        // this say (Numbes of Blocks = Height - Rows Number[Counting higher to Lower] + 1)
        int b = h - i + 1;

        // Executing the put hashes function b (Number of Blocks) times
        putHashes(b);
        printf("  ");
        putHashes(b);
        // making a new line
        printf("\n");
    }


}

// To get valid piramid height
int getValidHeight(void)
{
    int h;
    do
    {
        h = get_int("Height(1-8):");
    }
    while (h < 1 || h > 8);
    return h;
}

// To make hashes blocks in the piramid
void putHashes(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}