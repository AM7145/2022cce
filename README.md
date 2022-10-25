# 2022cce week06
##week06-1:利用「左手i、右手j」的口訣,  先把 i:5 i:4 i:3 i:2 i:1 印出來, 使用倒過來的迴圈。裡面的 j迴圈, 則是用基礎型, 畫出星星形狀
```cpp
#include<stdio.h>
int main()
{
    for(int i=5;i>0;i--){
        for(int j=0;j<i;j++){
            printf("*", j);
        }
        printf("i:%d星星\n", i);
    }
}

```
##week06-2:畫出等腰三角形。利用雙重迴圈處理，利用Star(星星) & space(畫出空格)
```cpp
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int space=5-i, star=2*i-1;
        for(int k=0;k<space;k++) printf(" ");
        for(int k=0;k<star;k++) printf("*");
        printf("\n");
    }
}

```
##week06-3:利用暴搜法(從1開始一個一個慢慢搜)找出最大公因數，利用迴圈跟if判斷，假設a&b兩數可以整除即為正確
```cpp
#include<stdio.h>
int main()
{
    ///暴搜法
    int a,b,ans;
    printf("(要約分)請輸入兩個數字: ");
    scanf("%d%d", &a, &b);

    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            ans=i;

        }
    }
    printf("ans: %d 可約分",ans);
}

```
##week06-4:利用輾轉相除法來處理最大公數
```cpp
#include<stdio.h>
int main()
{
    ///輾轉相除法
    int a,b,c;///老大,老二,老三
    printf("(要約分)請輸入兩個數字: ");
    scanf("%d%d", &a, &b);

    while(1){///一直做事直到答案出來
        c=a%b;
        printf("老大:%d 老二:%d 老三:%d\n", a, b, c);
        if(c==0) break;
        a=b;///換位
        b=c;///換位
    }
    printf("答案b: %d", b);
}
```
# 2022cce week07
##week07-1:比較int及long long int的差別(可存的位數有差別)
```cpp
#include<stdio.h>
int main()
{
    int n=9876543210;
    printf("int印出來為:%d\n", n);

    long long int a=9876543210;
    printf("long long int印出來為:%lld\n", a);
}
```
##week07-2:用long long int來處理最大公因數
```cpp
#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld", &a, &b);

    long long int ans;
    for(long long int i=1;i<=a;i++){
        if( a%i==0 && b%i==0) ans=i;
    }
    printf("最大公因數為:%lld\n", ans);
}
```
##week07-3:用long long int來處理輾轉相除法
```cpp
#include<stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld", &a, &b);
    while(1){
        c=a % b;
        printf("a:%lld b:%lld c:%lld\n", a, b, c);
        if(c==0) break;
        a = b;
        b = c;
    }
    printf("答案是: %lld\n", b);
}
```
##week07-4:討論10進位轉2進位從個位數來剝,把 123456789 分別剝出 9 8 ... 1 用 %10 取餘數可以得到值，n=n/10便能把數字慢慢變小(較為繁雜，有簡化方案)
```cpp
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    printf("瞷计:%d\n", n%10);
    n= n / 10;

    printf("瞷计:%d\n", n%10);
    n= n / 10;

    printf("瞷计:%d\n", n%10);
    n= n / 10;

    printf("瞷计:%d\n", n%10);
    n= n / 10;

    printf("瞷计:%d\n", n%10);
    n= n / 10;

    printf("瞷计:%d\n", n%10);
    n= n / 10;

    printf("瞷计:%d\n", n%10);
    n= n / 10;

    printf("瞷计:%d\n", n%10);
    n= n / 10;

    printf("瞷计:%d\n", n%10);
    n= n / 10;

    printf("瞷计:%d\n", n%10);
    n= n / 10;


}
```
# 2022cce week08
##week08-1:列出全部質數,使用for迴圈用一個變數bad=0表示迴圈之前沒有壞掉迴圈後看bad的值就可以知道是不是質數
```cpp
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int bad=0;///讀值

    for(int i=2;i<n;i++){
        if(n%i==0) bad=1;///如果發生可以整除的時候
    }
    if(bad==0) printf("%d 是質數", n);
    else printf("%d 不是質數", n);
}
```
##week08-2:瘋狂程設題目講解:用迴圈找質數
##week08-3:迴圈練習，數字加總
```cpp
#include<stdio.h>
int main()
{
    printf("請輸入5個數字(要加起來):");
    int n,sum=0;
    for(int i=0;i<5;i++){
        scanf("%d", &n);
        sum+=n;
    }
    printf("總和是:%d",sum);
}
```
##week08-4:瘋狂程設題目講解:直角三角形，外部結構--->空格---->星星
```cpp
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++) printf(" ");

        for(int k=1;k<=i;k++) printf("*");
        printf("\n");
    }

}
```
##week08-5:瘋狂程設題目講解:直角三角形，利用判斷if else
```cpp
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
            if(k<=n-i) printf(" ");
            else printf("*");
        }


        printf("\n");
    }

}
```
##week08-6:瘋狂程設題目講解:直角三角形,whlie迴圈寫法，利用if判斷來決定誰印空格、誰印星星
```cpp
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int i=1;
	while(i<=n){
		int k=1;
		while(k<=n){
			if(k<=n-i) printf(" ");
			else printf("*");

			k++;
		}
	printf("\n");
	i++;
	}
}
```



