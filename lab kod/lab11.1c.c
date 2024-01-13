#include <stdio.h>
#include <string.h>
int main() {
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
            
            if (str[i] == 'a' || str[i] == 'A') {
                aCount++;
            }
            i++;
        }

        
        printf("Number of 'a' characters in word %d: %d\n", wordCount + 1, aCount);

        
        while (str[i] == ' ' || str[i] == ',' || str[i] == '.' || str[i] == '!' || str[i] == '?') {
            i++;
        }

       
        aCount = 0;

       
        wordCount++;
    }

    return 0;
    }


