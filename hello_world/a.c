#include <stdio.h>
#include "metadata.h"

int main() {
    printf("Hello, world!\n");
    printf(
        "My version is %li.%li.%li\n",
        version.major, version.minor, version.patch
    );
    return 0;
}
