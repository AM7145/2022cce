#include<stdio.h>
int main()///印出储存在陣列裡的字串字串
{
    char line[]="Hello World\n";

    for(int i=0;i<12;i++){
        printf("%c ",line[i]);
    }
}
