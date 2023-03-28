#include<stdio.h>
int main()
{
    ///FILE * fout =fopen("File.txt","w");
    FILE * fin =fopen("File.txt","r");
    char line[200];
    fscanf(fin,"%s",line);
    printf("現在執行目錄的檔案裡讀入 %s\n",line);

    fscanf(fin,"%s",line);
    printf("現在執行目錄的檔案裡讀入 %s\n",line);
}
