#include <stdio.h>

int main() {
    char c = 100;
    unsigned char uc= 24 
    short s = -8712;
    int i = 123456;
    long l = 1234567890;

    printf("char(%lu): %c \n", sizeof(c),c);
    printf("unsigned char size:%lu ,%c value: \n", sizeof(uc), uc);
    printf("short(%lu): %d \n", sizeof(s),s);
    printf("int(%lu): %d \n", sizeof(i),i);
    printf("long(%u): %ld \n", sizeof(l),l);
    return 0;
}
