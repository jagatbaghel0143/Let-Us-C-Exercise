#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any Character: ");
    scanf("%c", &ch);
    if (ch>64 && ch<91)
        printf("Character \'%c\' is a capital letter.", ch);
    else if (ch>96 && ch<123)
        printf("Character \'%c\' is a small case letter.", ch);
    else if (ch>=48 && ch<57)
        printf("Character \'%c\' is a digit.", ch);
    else
        printf("Character \'%c\' is a special symbol.", ch);
    return 0;
}