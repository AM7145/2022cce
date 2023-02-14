///此為Dev-C++所寫之程式，故有多加撰寫。
#include<stdio.h>
#include<iostream>
#include<stdlib.h>///此為Code Blocks執行時需要的宣告,system()
using namespace std;

int main()
{
    for(int n=1; n<2000; n++) {
        if(n%8==6 && n%9==7 && n%15==13) {
            printf("\n現在n: %d\n", n);
            printf("用8除餘%d\n", n%8);
            printf("用9除餘%d\n", n%9);
            printf("用15除餘%d\n", n%15);
        }
    }


    system("pause");
    return 0;
}
