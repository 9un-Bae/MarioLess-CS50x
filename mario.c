#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, row, column, space;
    do
    {
        height = get_int("Enter height here: ");
    }
    // While loop up to 8
    while (height < 1 || height > 8);
    for (row = 0; row < height; row++)
    {
        // Adding the space in front of the column, so this goes first
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}