#include<stdio.h>
int main()
{
    ///輾轉相除法
    int a,b,c;///老大,老二,老三
    printf("(要約分)請輸入兩個數字: ");
    scanf("%d%d", &a, &b);

    while(1){///一直做事直到答案出來
        c=a%b;
        printf("老大:%d 老二:%d 老三:%d\n", a, b, c);
        if(c==0) break;
        a=b;///換位
        b=c;///換位
    }
    printf("答案b: %d", b);
}
