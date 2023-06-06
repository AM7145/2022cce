#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d", &a, &b);
	int A=a;
	int B=b;

	int ans=0;
	while(a!=0 && b!=0){
		ans=b;
		if(a>=b) a=a%b;
		else if(b>a) b=b%a;
	}
	if(a>=b) ans=a;
	else ans=b;

	printf("Enter two integers: \n");
	printf("The greatest common divisor of %d and %d is %d\n",
	A, B, ans);


}
