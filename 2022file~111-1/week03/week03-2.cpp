#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	printf("�п�J�Ʀrn:");
	
	int n;
	scanf("%d", &n);
	printf("��8���l%d\n", n%8);
	printf("��9���l%d\n", n%9);
	printf("��15���l%d\n", n%15);
	
	system("pause");
	return 0;
}
