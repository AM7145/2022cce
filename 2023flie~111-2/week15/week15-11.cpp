#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d", &a, &b);

	//if((ans*M)<N) printf("%d",ans+1);
	if( ((a/b)*b)<a) printf("%d",(a/b)+1);
	else printf("%d",(a/b));
}
