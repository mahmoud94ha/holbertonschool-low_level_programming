#include<stdio.h>
/**
* main to start
* 
* return 0
*/
int main(void)
{
int i;
float floatt;
char c;
long int longint;
long long int longlong;
printf("Size of char: %zu byte(s)\n", sizeof(c));
printf("Size of int: %zu byte(s)\n", sizeof(i));
printf("Size of long int: %zu byte(s)\n", sizeof(longint));
printf("Size of long long int: %zu byte(s)\n", sizeof(longlong));
printf("Size of float: %zu byte(s)\n", sizeof(floatt));
return(0);
}
