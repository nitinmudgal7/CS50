# include <stdio.h>
int main (void)
{
    int i = 1,j=1, n;
    printf("Lines of block: ");
    scanf("%i", &n);
    
    if(n<1||n>8){

        while(n<1||n>8)
        {
           printf("Lines of block: ");
    scanf("%i", &n); 
        }
    }
    else
    i = 1,j=1;
    for (j=1;j<=n; j++)
    {
        i =1;
    for (i=1; i <= n; i++)
    {

        if (i>=n+1-j){
            printf("#");
        }
        else
        {
        printf(" ");
        }
    }
    printf("\n");
}
}
