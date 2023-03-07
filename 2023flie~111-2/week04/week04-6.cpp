#include <stdio.h>
#include <string.h>
char line[300];
char table1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";//basic string
char table2[]="A   3  HIL JM O   2TUVWXY51SE Z  8";//Mirror string
int lookTable(char c)
{
	for(int i=0;table1[i]!=0;i++){
		if(table1[i]==c) return table2[i];//if basic string have Mirror string
	}
}
int testMirror()
{
	int N=strlen(line);
	for(int i=0;i<N;i++){
		if(lookTable(line[i])!=line[N-1-i]) return 0;//NOT Mirror
	}
	return 1;//if that is a Mirror

}
int testpalindrome()//TEST
{
	int N=strlen(line);
	for(int i=0;i<N;i++){
		if(line[i]!=line[N-1-i]) return 0;//NOT palindrome
	}
	return 1;//if that is a palindrome
}
int main()
{
	while(scanf("%s",line)==1){//input string
		int palindrome=testpalindrome();
		int mirror=testMirror();

		if(palindrome==1 &&mirror==0) printf("%s -- is a regular palindrome.\n\n",line);
		else if(palindrome==1 &&mirror==1) printf("%s -- is a mirrored palindrome.\n\n",line);
		else if(palindrome==0 &&mirror==1) printf("%s -- is a mirrored string.\n\n",line);
		else printf("%s -- is not a palindrome.\n\n",line);
	}
}
