// Vowel or Consonant 1

#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("Vowel.");
    } 
    else if(isalpha(ch) == 0){
        printf("Not an alphabet.");
    }
    else{
        printf("Consonant.");
    }
}
