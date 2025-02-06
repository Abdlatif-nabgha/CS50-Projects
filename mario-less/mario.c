#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    // Prompt the user for the pyramid's height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);

    // Print a pyramid of that height
    for (int i = 1; i <= n; i++)
    {
        // Calculate spaces and bricks for each row
        int spaces = n - i;
        int bricks = i;

        // Print the row
        print_row(spaces, bricks);
    }

    return 0;
}

void print_row(int spaces, int bricks)
{
    // Print spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // Print bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }

    // Move to the next line
    printf("\n");
}
