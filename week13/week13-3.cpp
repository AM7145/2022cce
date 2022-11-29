#include <stdio.h>

void display_num(int a)
{
    printf("你丟給display_num()的參數引數:%d", a);
    return;///如果是 void 可以不用寫
}

int main()
{
    display_num(100);
}
