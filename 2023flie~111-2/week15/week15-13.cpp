#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int b[100];
	for(int i=0;i<n;i++){
		scanf("%d", &b[i]);
	}
	for(int i=0;i<n;i++) printf("%d ",a[i]+b[i]);
}
