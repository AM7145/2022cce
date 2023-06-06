#include <stdio.h>
int main()
{
	char c[200];

	int i=0;
	while(scanf("%c", &c[i])==1){
		if(c[i]!='2') printf("%c", c[i]);
		i++;
	}
}
