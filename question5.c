#include <stdio.h>

int main(void) {
int upper = 0, lower = 0, special = 0;
char ch[100];
int i;
printf("\nEnter The String : ");
fgets(ch, sizeof(ch), stdin);
i = 0;
while (ch[i] != '\0') {
if (ch[i] >= 'A' && ch[i] <= 'Z')
upper++;
else if (ch[i] >= 'a' && ch[i] <= 'z')
lower++;
else
special++;
i++;
}
printf("\nuppercase letter(s): %d \nlowercase letter(s): %d \nspecial character(s): %d", upper, lower, special);
return 0;
}
