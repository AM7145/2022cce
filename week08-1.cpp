#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int bad=0;///Ū��
    for(int i=2;i<n;i++){
        if(n%i==0) bad=1;///�p�G�o�ͥi�H�㰣���ɭ�
    }
    if(bad==0) printf("%d �O���", n);
    else printf("%d ���O���", n);
}
