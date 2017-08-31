#include<stdio.h>
int main(void) {
    unsigned long int charcount = 0;
    unsigned long int wordcount = 0;
    unsigned long int linecount = 0;
    char c;

    while ((c = getchar()) != EOF) {
        if ((c != " ") && (c != "\n")) {
            charcount++;
        }
        if ((c == " ") || (c == "\n")) {
            wordcount++;
        }
        if (c == "\n") {
            linecount++;
        }
    }

    printf("%lu %lu %lu\n", charcount, wordcount, linecount);
    return 0;
}
