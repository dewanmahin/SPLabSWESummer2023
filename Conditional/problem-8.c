#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if(ch=='A' ||  ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("Entered Character is Vowel");
    }else if(ch=='a' ||  ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("Entered Character is Vowel");
    }else{
        printf("Entered Character is Consonant");
    }

    return 0;
}