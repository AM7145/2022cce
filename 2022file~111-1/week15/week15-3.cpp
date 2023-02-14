#include<stdio.h>
int main()
{
    printf("A 的值是 %d\n", 'A');
    printf("B 的值是 %d\n", 'B');
    printf("C 的值是 %d\n", 'C');

    for(int c='D';c<='Z';c++){
        ///稍微修改一下讓他從D ～ Z看起來比較好看
        printf("%c 的值是 %d\n", c, c);
    }
}
