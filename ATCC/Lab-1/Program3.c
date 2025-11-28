#include <stdio.h>
#include <ctype.h>
void main()
{
    FILE *fp;
    fp = fopen("try.txt", "r");
    char c;
    char temp;

    fscanf(fp, "%c", &c);
    temp = toupper(c);
    printf("%c", temp);
    while (fscanf(fp, "%c", &c) == 1)
    {
        printf("%c", c);
        if (c == ' ' || c == '\n')
        {
            fscanf(fp, "%c", &c);
            temp = toupper(c);
            printf("%c", temp);
        }
    }
}