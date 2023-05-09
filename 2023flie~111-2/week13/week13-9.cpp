#include <stdio.h>
int main()
{
	int a[11];

	int i=0,k=0;
	while(scanf("%d", &a[i])==1){
		if(a[i]==0) break;

		k++;
		i++;
	}
	int count,ans=0;
	scanf("%d", &count);
	for(int i=0;i<k;i++){
		if(a[i]==count) ans++;
	}
	printf("%d\n", ans);

}
