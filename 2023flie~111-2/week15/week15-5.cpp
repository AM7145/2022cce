#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d", &a, &b);
	int sum=0;
	for(int i=a;i<=b;i++){
		if(i%3==0) sum+=i;
	}
	printf("%d", sum);
}
