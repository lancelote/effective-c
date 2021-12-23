#include <stdio.h>
#include <stdlib.h>

int main(void) {
    if (puts("hello world") == EOF) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
