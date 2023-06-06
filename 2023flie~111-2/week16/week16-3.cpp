#include <stdio.h>
int main()
{
	int a[100];

	int i=0,total=0;
	printf("Enter an integer ( 999 to end ): \n");
	while(scanf("%d", &a[i])==1){
		if(a[i]!=999){
			printf("Enter an integer ( 999 to end ): \n");
			total+=a[i];
		}
		i++;
	}
	printf("The total is: %d", total);

}
