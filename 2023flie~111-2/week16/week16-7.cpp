#include <stdio.h>
int main()
{
	char c[100];

	int count[7]={0};

	scanf("%s", &c);

	int i=0;
	while(c[i]!='\0'){
		count[c[i]-'0']++;
		i++;
	}
	for(int i=1;i<=6;i++){
		printf("%d:%d\n",i, count[i]);
	}
}
