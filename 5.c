#include<stdio.h>

int main(void)
{
    int diff;
    char large;//大文字
    char small;//小文字

    printf("");
    scanf("%c", &small);
    diff = 'A' - 'a';
    large = small + diff;
    printf("%c,%c,", large,small);
    return 0;

}