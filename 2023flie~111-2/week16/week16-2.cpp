#include <stdio.h>
int main()
{
	int a[6];

	int i=0,max=a[1],min=a[0];
	while(scanf("%d", &a[i])==1){
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
		i++;
	}
	printf("%d", max-min);

}
