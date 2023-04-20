#include <stdio.h>
#include <ctype.h>

int main() {
    char input;

    printf("Enter a character or number: ");
    scanf("%c", &input);

    if(isdigit(input)) { // if input is a digit
        printf("The input is a number.\n");
    }
    else if(isalpha(input)) { // if input is an alphabet
        if(isupper(input)) { // if input is an uppercase letter
            printf("The input is an uppercase character.\n");
        }
        else { // if input is a lowercase letter
            printf("The input is a lowercase character.\n");
        }
    }
    else { // if input is neither a digit nor an alphabet
        printf("The input is not a number or a character.\n");
    }

    return 0;
}
