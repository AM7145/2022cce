#include<stdio.h>
int main()
{
    ///����۰��k
    int a,b,c;///�Ѥj,�ѤG,�ѤT
    printf("(�n����)�п�J��ӼƦr: ");
    scanf("%d%d", &a, &b);

    while(1){///�@�����ƪ��쵪�ץX��
        c=a%b;
        printf("�Ѥj:%d �ѤG:%d �ѤT:%d\n", a, b, c);
        if(c==0) break;
        a=b;///����
        b=c;///����
    }
    printf("����b: %d", b);
}
