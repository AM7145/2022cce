#include <stdio.h>
int main()
{
	int sum=0;
	while(1){
		int n;
		scanf("%d", &n);

		if(n==0) break;
		if(n>0) sum+=n;
	}
	printf("%d", sum);
}
