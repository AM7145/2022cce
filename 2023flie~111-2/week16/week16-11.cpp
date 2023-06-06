#include <stdio.h>
#include <string.h>
int main()
{
	char line[80];
	scanf("%s", &line);

	int ans=0;
	for(int i=0;i<=80;i++){
		if(line[i]>='0' && line[i]<='9') ans++;
	}
	printf("%d\n", ans);
}
