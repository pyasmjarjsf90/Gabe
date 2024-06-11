// main.c
// Minimal compiler size.
#include <stdio.h>
int main(int argc, char *argv[]) {
    int m = 0;
    size_t h = 0;
    for (char *c = argv[1]; *c != '\0'; c++) {
        switch (*c) {
            case '+':
                m++;
                break;
            case '>':
                printf("%d", m);
                m = 0;
                break;
        }
    }
}
