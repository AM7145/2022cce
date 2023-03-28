#include<stdio.h>
int main()
{
    FILE * fout =fopen("File.txt","w");
    fprintf(fout,"Hello World\n");

    printf("檔案出現，請檢查檔案總管\n");
}
