#include <stdio.h>

int main(void)
{
    int k;
    int l;
    printf("Did you sleep well last night?Y=1 N=0\n");
    scanf("%d", &l);
    if (l=0);
     printf("How many houres do you sleep?:");
    scanf("%d", &k);

    if(k >= 8){
        printf("You sleep well.\n");
    }
    else if(k >= 5){
        printf("You sleep normaly.\n");
    }
    else{
        printf("You sleep less.\n");
    }
    if (l=k){
        printf("Good night!\n");
    }
    
}