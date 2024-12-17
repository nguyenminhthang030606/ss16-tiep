#include <stdio.h>
#include <string.h>

void poin(char *input, char *output) {
    int length = strlen(input);
    char *start = input + length - 1; 
    char *end = output;   
    while (start >= input) {
        *end = *start;
        start--;
        end++;
    }
    *end = '\0'; 
}
int main() {
    char inputString[100], reverseString[100];
    printf("Nhap mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    size_t len = strlen(inputString);
    if (len > 0 && inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
    }
    poin(inputString, reverseString);
    printf("Chuoi da nhap: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

