#include "hello.h"

int main(int argc, char* argv[])
{
    if(argc > 1) {
        printf("Hello %s", argv[1]);
    }

    else {
        printf("Hello world!");
        putchar('\n');
        printf("Hello world - Peter!");
    }
    return 0;
}
