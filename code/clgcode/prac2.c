#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    
    // Take input string
    printf("Enter a string: ");
    gets(str);  // Using gets to take input (note: unsafe in real applications)
    
    // Find the length by counting characters
    while (str[length] != '\0') {
        length++;
    }
    
    // Print the length
    printf("Length of the string: %d\n", length);
    
    return 0;
}
