///����Dev-C++�Ҽg���{���A�G���h�[���g�C
#include<stdio.h>
#include<iostream>
#include<stdlib.h>///����Code Blocks����ɻݭn���ŧi,system()
using namespace std;

int main()
{
    for(int n=1; n<2000; n++) {
        if(n%8==6 && n%9==7 && n%15==13) {
            printf("\n�{�bn: %d\n", n);
            printf("��8���l%d\n", n%8);
            printf("��9���l%d\n", n%9);
            printf("��15���l%d\n", n%15);
        }
    }


    system("pause");
    return 0;
}
