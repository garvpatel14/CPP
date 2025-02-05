#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    
    // Taking input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Using fgets to handle spaces in the input
    
    // Loop through the string until the null character '\0' is encountered
    while (str[length] != '\0') {
        length++;  // Increment the length for each character
    }
    
    // Output the length of the string
    printf("The length of the string is: %d\n", length);
    
    return 0;
}
