#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void){
    int count[19] = {0};
    int match_count = 1;
    printf("3連複の結果を入力してください。\n");
    printf("0を入力すると終了します。\n");
    
    while(1){
        int a, b, c;
        printf("第%d試合 : ", match_count);
        scanf("%d %d %d", &a, &b, &c);
        
        if((a == 0) || (b == 0) || (c == 0)){
            printf("入力を終了します。\n");
            break;
        }
        
        if((a < 0) || (b < 0) || (c < 0) || (a > 18) || (b > 18) || (c > 18)){
            printf("正しい数を入力してください。\n");
            continue;
        }
        
        count[a]++;
        count[b]++;
        count[c]++;
        
        match_count++;
    }
    
    printf("第%d試合までの結果は以下のようになりました。\n",(match_count - 1));
    
    for(int i = 1; i <= 18; i++){
        printf("%d番 : %d回\n", i, count[i]);
    }
    
    return 0;
}