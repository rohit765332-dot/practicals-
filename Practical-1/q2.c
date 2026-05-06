#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    int size;

    printf("Enter maximum size of string: ");
    scanf("%d", &size);

    str = (char *)malloc(size * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter the string: ");
    scanf(" %[^\n]s", str);

    printf("Entered string: %s\n", str);
    printf("Length of string: %d\n", strlen(str));

    free(str);

    return 0;
}
