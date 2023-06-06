#include <stdio.h>
#include <string.h>
int main()
{
	char a[81];
	scanf("%s", &a);

	int len=strlen(a);

	int i;
	for(i=0;i<(len/2);i++){
		if(a[i]!=a[len-1-i]) break;
	}

	if(i==(len/2)) printf("YES");
	else printf("NO");

}
