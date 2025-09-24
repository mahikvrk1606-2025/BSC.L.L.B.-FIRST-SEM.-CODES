#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    switch(ch)
    {
    case'a':case'e':case'i':case'o':case'u':
    case'A':case'E':case'I':case'O':case'U':
        printf("vowel\n");
        break;
    default:
        if(ch>='0'&&ch<='9')
            printf("digit\n");
        else
            printf("consonant\n");
    }
}
