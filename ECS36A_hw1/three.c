
// three.c
//
// Yuxin Wang

#include <stdio.h>

int main(void)
{
    int num = 3;
    
    while (num <= 100) {
        printf("%d", num);
        
        num *= 2;
        
        if (num <= 100) {
            printf(" ");
        }
    }
    
    printf("\n");
    
    return 0;
}
