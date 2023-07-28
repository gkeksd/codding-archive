#include <stdio.h>

int main() {
    int ber = 1;

    for (int i=0; i<10; i++) {
        printf("%d\n", ber);
        ber += 1;
    }
    
    return 0;
}