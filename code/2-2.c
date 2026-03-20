#include <stdio.h>

void swap(int *x, int *y) {
    
   *x = addr. Of x;
   *y = addr.Of y;
    x = *y;
    y = *x;
}

int main() {
    int x= 100; 
    int y = 200;

    printf("x = %d, y = %d\n", x, y);

    swap( );
    printf("x = %d, y = %d\n", x, y);
    
    return 0;
}

