#include <stdio.h>
int main()
{
    int a[10]={90,80,70,60,50,40,30,20,10,0};
    for(int i=0;i<10;i++){///方便對照用
        printf("%d ",a[i]);
    }
    for(int i=0;i<10-1;i++){///我懶得複製直接用迴圈幫我處理
        for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            }
        }
        printf("\n");///換行排版
        for(int i=0;i<10;i++){
            printf("%d ",a[i]);
        }
    }

}
