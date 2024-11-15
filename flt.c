#include <stdio.h>

int main(void)
{
int ringo, mikan, kaki;

ringo = 20; //りんごの個数
mikan = 30; //ミカンの個数
kaki = 15; //かきの個数

//変数と定数の比較
 if(ringo == 20)
  printf("リンゴは20個あります\n");
 if(mikan !=20)
 printf("みかんは20個ではありません\n");
 if(mikan>=20)
 printf("ミカン20個以上あります\n");
 if(kaki < 20)
 printf("かきは20個未満です\n");
 
 //変数と変数の比
 if(ringo>kaki)
 printf("リンゴの数はかきの数より多いです\n");
 if(mikan >kaki)
 printf("みかんはかきよりおおいです\n");
 
    
    return 0;
}