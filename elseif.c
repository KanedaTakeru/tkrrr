#include <stdio.h>
int main()
{
    int k;
    printf("入荷したじゃがりこの数はいくつですか？");
    scanf("%d",&k);
    if (k>=50)
    {
    printf("余りはアフリカに寄付");
    }
    else if (k>20 && k<50)
    {
    printf("品出します");
    }
    else if(k<=20)
    {
    printf("在庫点検");
    }
    else
    {
    printf("入荷申請");
    }
    return 0;
}