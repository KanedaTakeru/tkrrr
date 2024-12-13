#include <stdio.h>
#include <ctype.h>
#include <string.h>

void check_password_strength(const char* password) {
    int length = strlen(password);
    int has_upper = 0, has_lower = 0;

    
    if (length < 8) {
        printf("改善点: パスワードは8文字以上である必要があります。\n");
    }

    
    for (int i = 0; i < length; i++) 
    {
        if (isupper(password[i])) 
        {
            has_upper = 1;
        } else if (islower(password[i])) 
        {
            has_lower = 1;
        }
    }

    if (!has_lower) {
        printf("改善点: パスワードには小文字が含まれている必要があります。\n");
    }
    if (!has_upper) {
        printf("改善点: パスワードには大文字が含まれている必要があります。\n");
    }

    
    if (length >= 8 && has_upper && has_lower) 
    {
        printf("このパスワードは強いです！\n");
    } else {
        printf("このパスワードは強くありません。改善点を確認してください。\n");
    }
}

int main() 
{
    char password[100];

    // ユーザー入力を取得
    printf("パスワードを入力してください: ");
    scanf("%s", password);

    check_password_strength(password);
      return 0;
}

