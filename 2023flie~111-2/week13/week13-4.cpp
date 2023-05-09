#include <stdio.h>
#include <string.h>
int main()
{
	char a[81];

	scanf("%s", &a);
	int len=strlen(a);
	int i=0;
	while(i<len/2){
		if(a[i]!=a[len-1-i]) break;
		i++;
	}
	if(i==len/2) printf("YES\n");
	else printf("NO\n");
}
