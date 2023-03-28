///Quick Sort
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
int main()
{
    int a[10]={9,8,7,3,2,1,6,5,4,0};
    std::sort(a, a+10);

    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}
