#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int bad=0;///讀值
    for(int i=2;i<n;i++){
        if(n%i==0) bad=1;///如果發生可以整除的時候
    }
    if(bad==0) printf("%d 是質數", n);
    else printf("%d 不是質數", n);
}
