#include <stdio.h>
void display_num(int);///宣告

int main()
{
    display_num(5);
}

void display_num(int a)///定義
{
    printf("你丟給display_num()的參數引數:%d", a);
    return;///如果是 void 可以不用寫
}

