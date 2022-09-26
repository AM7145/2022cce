#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	printf("½Ð¿é¤J¼Æ¦rn:");
	
	int n;
	scanf("%d", &n);
    if(n>10) printf("n>10");
    if(n<10) printf("n<10");
    if(n==10) printf("n==10");
    
    
	system("pause");
	return 0;
}
