#include<stdio.h>
int main()
{
    ///FILE * fout =fopen("File.txt","w");
    FILE * fin =fopen("File.txt","r");
    char line[200];
    fscanf(fin,"%s",line);
    printf("�{�b����ؿ����ɮ׸�Ū�J %s\n",line);

    fscanf(fin,"%s",line);
    printf("�{�b����ؿ����ɮ׸�Ū�J %s\n",line);
}
