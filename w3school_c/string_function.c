#include <string.h>
#include <stdio.h>

int main(){
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("strlen(alphabet) = %d\n", strlen(alphabet)); // 26
    printf("sizeof(alphabet) = %d\n", sizeof(alphabet)); // 27 include '\0'
    // and sizeof() will always return the memory size (in bytes), not the actual string length
    char alphabet2[50] = "ABCEDFGHIJKLMNOPQRSTUVWXYZ";
    printf("sizeof(alphabet2) = %d\n", sizeof(alphabet2)); // 50
    
    // To concatenate (combine) two strings
    char str1[20] = "Hello ";
    char str2[] = "World!";
    strcat(str1, str2);
    printf("%s\n", str1);

    // Copy Strings
    char str3[20];
    strcpy(str3, str1);
    printf("str3 = %s\n", str3);

    // Compare Strings, 0 for equal, -1 for not
    char str4[] = "Hi";
    printf("compare str1 and str2 = %d\n", strcmp(str1, str2));
    printf("compare str1 and str4 = %d\n", strcmp(str1, str4));
    printf("compare str1 and str3 = %d\n", strcmp(str1, str3));

    return 0;
}