#include <stdio.h>
main(int argc, char**argv) {
    int start = atoi(argv[1]);
    int count = atoi(argv[2]);
    while(start--) getchar();
    int x = 0, c;
    while(~(c = getchar()) && count--) x ^= c;
    putchar(x);
}
