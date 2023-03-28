#include <stdio.h>
int main()
{
    int a[10]={9,8,1,2,6,3,5,4,0,7};
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10-1;i++){
        for(int i=0;i<10;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
    }
}
