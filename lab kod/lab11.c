#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    int wordCount = 0;
    int aCount = 0;
    int i = 0;

    while (str[i] != '\0') {
        
        while (str[i] != ' ' && str[i] != '\0' && str[i] != ',' && str[i] != '.' && str[i] != '!' && str[i] != '?') {
            // If the character is 'a', increment the count
            if (str[i] == 'a' || str[i] == 'A') {
                aCount++;
            }
            i++;
        }

        
        wordCount++;

        while (str[i] == ' ' || str[i] == ',' || str[i] == '.' || str[i] == '!' || str[i] == '?') {
            i++;
        }
    }

    printf("Number of 'a' characters in each word of the entered string: %d\n", aCount);

    return 0;
}

