// 🔟 Reverse a string without using strrev().

#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s",&str);
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

