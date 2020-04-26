#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int MAX_LENGTH = 256;

char* get_letter(void) {
    static char letter[1000000];
    letter[999999] = ' ';
    char* p = letter;
    int size = MAX_LENGTH;
    while (feof(stdin) == 0) {
        if (size == 0) {
            break;
        }
        fgets(p, size + 1, stdin);
        while (*p != '\0') {
            p++;
            size--;
        }
    }
    return letter;
}

int main() {
    char *str = get_letter();
    char *str1 = (char*) malloc(strlen(str) + 1);
    strcpy(str1, str);
    char *pch;
    pch = strtok (str, "\r\n\"\t\n' ,.");

    int count = 0;
    while (pch != NULL)
    {
        printf ("%s\n",pch);
        if (!strcmp(pch, "love")) {
            count++;
        }
        pch = strtok (NULL, "\r\n\"\t\n' ,.");
    }
    printf("%d\n", count);
    strcpy(str, str1);
    puts(str); //应该是内置函数。以前学习完全没入门。
    return 0;
}

#undef MAX_LENGTH