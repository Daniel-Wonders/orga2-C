// Realizar un programa que compare si los 3 bits más altos de una palabra de 32 bits son
// iguales a los 3 bits más bajos de otra palabra de 32 bits. Si son iguales, informarlo por
// pantalla.

#include <stdio.h>
#include <stdint.h>

int check(uint32_t pal1, uint32_t pal2) {
    // Get 3 most significant bits of pal1 (bits 31 to 29)
    uint32_t msb_pal1 = (pal1 >> 29) & 0b111;

    // Get 3 least significant bits of pal2 (bits 2 to 0)
    uint32_t lsb_pal2 = pal2 & 0b111;

    printf("MSB of pal1: %u\n", msb_pal1);
    printf("LSB of pal2: %u\n", lsb_pal2);

    if (msb_pal1 == lsb_pal2) {
        printf("Correct: The 3 MSBs of pal1 are equal to the 3 LSBs of pal2.\n");
    } else {
        printf("Not correct: They are different.\n");
    }

    return 0;
}

int main(void) {
    // Example: 0b11100000000000000000000000000000 and 0b00000000000000000000000000000111
    check(0xE0000000, 0x00000007);  // This should print "Correct"

    return 0;
}
