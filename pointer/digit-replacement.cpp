#include <stdio.h>
#include <string.h>

void wip(char amd[]) {
    int len = strlen(amd);
    
    for (int i = 0; i < len; i++) {
        if (amd[i] >= '0' && amd[i] <= '9') {
            switch (amd[i]) {
                case '0': printf("zero"); break;
                case '1': printf("one"); break;
                case '2': printf("two"); break;
                case '3': printf("three"); break;
                case '4': printf("four"); break;
                case '5': printf("five"); break;
                case '6': printf("six"); break;
                case '7': printf("seven"); break;
                case '8': printf("eight"); break;
                case '9': printf("nine"); break;
            }
        } else {
            printf("%c", amd[i]);
        }
    }
}

int main() {
    char amd[50];
    scanf("%s", amd);
    
    printf("\n%s", amd);
    wip(amd);
    
    return 0;
}
