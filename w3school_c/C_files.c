#include <stdio.h>

int main(){
    FILE *fptr;

    // Create a file or open a file in writing mode
    fptr = fopen("filename.txt", "w");
    // this will delete the old content, and the new content is inserted.
    fprintf(fptr, "Some text");

    // Close the file
    fclose(fptr);

    // Append content to a file
    fptr = fopen("filename.txt", "a");
    fprintf(fptr, "\nHi everybody!");
    fclose(fptr);

    // Read a file in C
    fptr = fopen("filename.txt", "r");
    char myString[100];
    // fgets(myString, 100, fptr); // Only read the first line of the file
    // printf("%s\n\n", myString);

    // Read every line with while loop
    while(fgets(myString, 100, fptr)){
        printf("%s", myString); // fgets will get the \n
    }

    fclose(fptr);



    return 0;
}