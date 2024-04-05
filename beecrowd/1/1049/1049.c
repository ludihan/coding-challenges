#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *getstring() {
    size_t len = 1;
    char *string = malloc(sizeof(char) * len);
    char ch = getchar();
    while (isspace(ch)) {
        ch = getchar();
    }

    while (!isspace(ch) && ch != EOF) {
        len++;
        string = realloc(string, len);
        string[len - 2] = ch;
        ch = getchar();
    }
    string[len - 1] = '\0';

    return string;
}

int main(void) {
    char *a = getstring();
    char *b = getstring();
    char *c = getstring();

    if (strcmp(a, "vertebrado") == 0) {
        if (strcmp(b, "ave") == 0) {
            if (strcmp(c, "carnivoro") == 0) {
                puts("aguia");
            } else {
                puts("pomba");
            }
        } else {
            if (strcmp(c, "onivoro") == 0) {
                puts("homem");
            } else {
                puts("vaca");
            }
        }
    } else {
        if (strcmp(b, "inseto") == 0) {
            if (strcmp(c, "hematofago") == 0) {
                puts("pulga");
            } else {
                puts("lagarta");
            }
        } else {
            if (strcmp(c, "hematofago") == 0) {
                puts("sanguessuga");
            } else {
                puts("minhoca");
            }
        }
    }

    free(a);
    free(b);
    free(c);
}
