#include <stdio.h>
#include <string.h>
int main()
{
    char c;
    char line[30];
    int count=0;
    scanf("%s",line);

    int N=strlen(line);

    for(int i=0;i<N;i++){
        if(line[i]=='2') count++;
    }
    printf("%d\n",count);
}
