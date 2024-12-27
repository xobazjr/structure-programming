#include <stdio.h>

int main() {
    char ch;
    int i = 0;
    char x[1000]; 
    FILE *fptr, *fptt;
    fptr = fopen("Test2.txt", "r");
    fptt = fopen("Result3.txt", "w");

    if (fptr == NULL || fptt == NULL) {
        printf("File is error!\n");
    } else {
        while ((ch = fgetc(fptr)) != EOF) {
            x[i++] = ch;
        }
        for (int j = i - 1; j >= 0; j--) {
            fputc(x[j], fptt);
        }
    }

    fclose(fptr);
    fclose(fptt);

    return 0;
}

