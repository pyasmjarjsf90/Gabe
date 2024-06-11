// main.c
// Minimal compiler size.
#include <stdio.h>
int main(int argc, char *argv[]) {
    int m = 0;
    for (char *c = argv[1]; *c != '\0'; c++) {
        switch ((int)(*c % 2)) {
            case 1:
                m++;
                break;
            case 0:
                printf("%c", (char)m);
                m = 0;
                break;
        }
    }
}
