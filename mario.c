# include <stdio.h>
int main(void)
{
    int i = 1, j = 1, n;
    //Ask for user input
    printf("Lines of block: ");
    scanf("%i", &n);
    //Check if user input is in the range, if not ask user to provide input again
    if (n < 1 || n > 8)
    {
        while (n < 1 || n > 8)
        {
            printf("Lines of block: ");
            scanf("%i", &n);
        }
    }
    //If user input is in range proceed with printing the blocks
    else
    i = 1, j = 1;
    //loop for row printing
    for (j = 1; j <= n; j++)
    {
        i = 1;
    //loop for column printing
        for (i = 1; i <= n; i++)
    {

            if (i >= n + 1 - j)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
    }
//to move into next row once all columns are populated of a row
    printf("\n");
    }
}
