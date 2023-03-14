#include <stdio.h>

 int main()
 {
    int x;
    char y;

    printf("quanti anni hai?");
    scanf("%d", &x);
    printf("qual é il tuo sesso?");
    scanf(" %c", &y);
    printf("hai %d anni e sei %c\n", x, y);
 }
    