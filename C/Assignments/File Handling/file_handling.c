#include<stdio.h>

int main() {
    // // to writing data in file
    // FILE *f_ptr = fopen("test.txt", "w"); // write mode
    // char text[] = "ABCD";
    // fputs(text, f_ptr);
    // fputs("\n", f_ptr);


    // to reading data in file
    FILE *f_ptr = fopen("test.txt", "r"); // read mode
    char text[50];
    fgets(text, 50, f_ptr); // --> does not read '\n' because fgets and fputs operate line by line
    printf("%s", text);
    fgets(text, 50, f_ptr);
    printf("%s", text);


    fclose(f_ptr);

    return 0;
}