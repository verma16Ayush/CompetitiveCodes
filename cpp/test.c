#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[10] = {1, 23, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int* ap = a;

    int k = *ap;
    ap+4;
    int k2 = *ap;
    return 0;
    
}