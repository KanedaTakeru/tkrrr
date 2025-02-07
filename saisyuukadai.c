#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int target, guess;
    
    srand(time(0));    
    
    target=rand()%100+1;
    
    printf("1から100までの数を当ててください！\n");
    
    while(1){
        printf("あなたの予想を入力：");
        scanf("%d",&guess);
        
        if(guess>target){
            printf("高いなあ　もう一度ためせ。\n");
        }else if(guess < target){
        printf("低いなあ。もう一度ためせ\n");
        }else{
            printf("正解\n");
            break;
        
        }
    }


    return 0;
}
