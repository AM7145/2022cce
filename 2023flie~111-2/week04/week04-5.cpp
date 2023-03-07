#include <stdio.h>
#include <string.h>
char line[300];
char table1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";//basic string
char table2[]="A   3  HIL JM O   2TUVWXY51SE Z  8";//Mirror string
int mirrored_char(char c)
{
	for(int i=0;table1[i]!=0;i++){
		if(table1[i]==c) return table2[i];
	}
	return ' ';
}
int main()
{
	char c;
	scanf("%c",&c);

	printf("%c\n",mirrored_char(c));

}
