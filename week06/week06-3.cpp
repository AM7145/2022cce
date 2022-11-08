#include<stdio.h>
int main()
{
    int a,b,ans;
    printf("(要約分)請輸入兩個數字: ");
    scanf("%d%d", &a, &b);

    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            ans=i;

        }
    }
    printf("ans: %d 可約分",ans);
}
