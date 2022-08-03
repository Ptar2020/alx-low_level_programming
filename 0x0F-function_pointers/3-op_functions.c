#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int opp_add(int a, int b)
{
	return (a + b);
}

int opp_sub(int a, int b)
{
	return (a - b);
}

int opp_mul(int a, int b)
{
	return (a * b);
}
int opp_div(int a, int b)
{
	return (a / b);
}
int opp_mod(int a, int b)
{
	return (a % b);
}

