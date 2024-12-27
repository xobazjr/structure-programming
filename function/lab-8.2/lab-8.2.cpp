#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_between(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    int N,i;
    printf("Enter N: ");
    scanf("%d", &N);
    srand(time(NULL));

    printf("\nRandom between 1 to 1000\nN = %d\n\n", N);
    
    for (i = 0; i < N; i++) {
        printf("%d\n", random_between(1, 1000));
    }

    return 0;
}
