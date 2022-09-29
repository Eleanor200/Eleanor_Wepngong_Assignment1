#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int num, guess, tries = 0;
srand(time(0)); /* seed random number generator */
num = rand() % 100 + 1; /* random number between 1 and 100 */
printf("Guess My Number Game\n\n");
do{
printf("Enter a guess between 1 and 100 : ");

if (tries>= 10) {
printf("\nYou Loose!\n");
break;
}
scanf("%d", &guess);
if (guess > num)
{
printf("Too high!\n\n");
tries++;
}
else if (guess < num)
{
printf("Too low!\n\n");
tries++;
}
else
printf("\nCorrect! You got it in %d guesses!\n", tries);
}
while (guess != num);
}
