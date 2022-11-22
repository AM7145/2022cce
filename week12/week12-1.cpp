#include <stdio.h>
int main()
{
    int a[10]={10,7,5,6,9,4,8,2,1,3};

    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0;i<10;i++) printf("%d ",a[i]);

}
