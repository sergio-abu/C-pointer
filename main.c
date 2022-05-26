#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *point;
    point = (int *) malloc(sizeof(int));
    *point = 54;
    printf("Value: %d \n", *point);
    printf("Adress: %x ", &point);

    return 0;
}
