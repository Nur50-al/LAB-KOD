#include <stdio.h>
#include <string.h>

void reverseString(char str[], int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char firstWord[50];
    char secondWord[50];

    printf("Enter the first word: ");
    scanf("%s", firstWord);

    printf("Enter the second word: ");
    scanf("%s", secondWord);

    int length = strlen(firstWord);

    reverseString(firstWord, length);

    strcat(secondWord, firstWord);

    // Print the result
    printf("Result: %s\n", secondWord);

    return 0;
}

