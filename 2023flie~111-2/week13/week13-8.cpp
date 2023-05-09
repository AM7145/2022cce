#include <stdio.h>
int main()
{
	int n, ans;
	scanf("%d", &n);

	if(n%10==1) ans+=1;
	if(n/10%10==1) ans+=2;
	if(n/100%10==1) ans+=4;
	if(n/1000%10==1) ans+=8;

	printf("%d\n", ans);

}
