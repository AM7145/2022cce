#include<stdio.h>
int main()
{
    printf("A ���ȬO %d\n", 'A');
    printf("B ���ȬO %d\n", 'B');
    printf("C ���ȬO %d\n", 'C');

    for(int c='D';c<='Z';c++){
        ///�y�L�ק�@�U���L�qD �� Z�ݰ_�Ӥ���n��
        printf("%c ���ȬO %d\n", c, c);
    }
}
