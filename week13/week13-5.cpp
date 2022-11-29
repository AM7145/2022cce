#include <stdio.h>///我很無聊所以換個方式寫作業
int a[100][100];
int main()
{
    for(int i=0;i<5;i++) printf("1 2 3 4 5 6\n");

    int m,n;
    scanf("%d%d", &n,&m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int j=0;j<m;j++){
        for(int i=n-1;i>=0;i--){
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }


}
