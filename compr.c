# include<stdio.h>
int main(void)
{
int inp;
const int mine = 2;
printf("Enter your points: \n");
scanf("%i", &inp);
if (inp > mine)
{
    printf("You have got more points than me \n");

}
else if(inp<mine)
{
    printf("You have got less points than me \n");

}
else 
{
    printf("We both have got similar points \n");
}
return 0;
}