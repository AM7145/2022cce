#include <stdio.h>
int main()
{
	int a[100];
	int i=0,max=0,min=0;
	while(scanf("%d", &a[i])==1){
		if(a[i]==0) break;
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
		i++;
	}
	printf("[%d,%d]",min, max);
}
