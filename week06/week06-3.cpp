#include<stdio.h>
int main()
{
    int a,b,ans;
    printf("(�n����)�п�J��ӼƦr: ");
    scanf("%d%d", &a, &b);

    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            ans=i;

        }
    }
    printf("ans: %d �i����",ans);
}
