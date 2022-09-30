#include <stdio.h>
 
int main()
{
    int i, num, odd_sum = 0, even_sum = 0, diff, third, fifth;
 
    printf("Enter the value of num\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {//checking if the numbers in the given range is even or odd.
        if (i % 2 == 0)
            even_sum = even_sum + i;
        else
            odd_sum = odd_sum + i;
    }
    diff = odd_sum - even_sum;
    third = even_sum / 3;
    fifth = odd_sum / 5;
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
    printf("Difference between the sums = %d\n", diff);
    printf("1/3 of the even sum = %d\n", third);
    printf("1/5 of the odd sum = %d\n", fifth);
    return 0;
}
