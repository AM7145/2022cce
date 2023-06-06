#include <stdio.h>
int max_digit(int n)
{
	int max;
	max=n%10;
	while(n>0){
		if(max<(n%10)) max=n%10;
		n=n/10;
	}
	return max;
}


int main()
{
	int n;
	scanf("%d",&n);
	printf("[%d]",max_digit(n));
	return 0;
}
