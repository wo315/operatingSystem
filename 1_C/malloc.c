#include <stdio.h>
#include <stdlib.h>


char* find_my_mood() {
    char* my_mood = malloc(6 * sizeof(char));
    my_mood[0] = 'h';
    my_mood[1] = 'a';
    my_mood[2] = 'p';
    my_mood[3] = 'p';
    my_mood[4] = 'y';
    my_mood[5] = '\0';
    return my_mood;
}

int main() {
    char* mood = find_my_mood();
    printf("I am currently %s\n", mood);
    free(mood);
    return 0;
}

// void* realloc(void* ptr, size_t size);