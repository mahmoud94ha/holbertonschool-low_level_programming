#include<stdio.h>
/**
 * main to start
 * 
 * return 0
*/
int main(void)
{
int i;
float f;
char c;
long int lint;
long long int llint;
printf("Size of char: %zu byte(s)\n", sizeof(c));
printf("Size of int: %zu byte(s)\n", sizeof(i));
printf("Size of long int: %zu byte(s)\n", sizeof(lint));
printf("Size of long long int: %zu byte(s)\n", sizeof(llint));
printf("Size of float: %zu byte(s)\n", sizeof(f));
return 0;
}
