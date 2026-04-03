#include <stdio.h>

int main() {
    char str[200];
    char *ptr;
    int length = 0;

    printf("Enter any string: ");
    scanf("%[^\n]s", str);  

    ptr = str;  

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("The length of a string is: %d\n", length);

    return 0;
}