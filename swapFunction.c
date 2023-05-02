#include <stdio.h>

#include <stdio.h>

int swap(int a, int b)
{
	int swapA = a;
	a = b;
	b = swapA;
	
	printf("a is now %d and b is now %d", a, b);
}


int main()
{
	swap(90, 91);
}
