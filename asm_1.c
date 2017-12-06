#include <stdio.h>

int main (void)
{
	int a;
	int b;
	int res;
	int rem;

	a = 10;
	b = 5;
	asm(
		"movw %[a],%%dx\n\t"
		"divw $2\n\t"
		:"=res"(res)
		:[a]"m"(a), [b]"m"(b)
		:"cc");	
	printf("res is %d\n", res);
	return (0);
}