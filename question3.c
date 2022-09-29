#include<stdio.h>
int PerfectSquare(int number)
{
int x;
for(x=1; x*x<=number; x++)
{
if(x*x==number)
return 1;
}
return 0;
}
int main()
{
int user_number;
printf("Enter any number of your choice: ");
scanf("%d", &user_number);
if(user_number<1)
{
printf("Please enter a number greater than 1");
return 1;
}
if (PerfectSquare(user_number) == 1)
{
printf("Your number was a perfect square!\r\n");
return 0;
}
int x,y,up_counter,down_counter,closest;
for(x=user_number+1,y=0,up_counter=0; y!=1; x++, up_counter++)
{
y = PerfectSquare(x);
}
for (x = user_number-1, y = 0, down_counter = 0; y != 1; --x, ++down_counter)
{
y = PerfectSquare(x);
}
if (up_counter < down_counter)
{
closest = user_number+up_counter;
}
else if (up_counter > down_counter)
{
closest = user_number-down_counter;
}
printf("Closest number with a perfect square is: %d\r\n", closest);
return 0;
}
