#include <stdio.h>
#include <stdint.h>

uint8_t encrpyt(uint8_t key, uint8_t input_char) {
    return key ^ input_char;
}

uint8_t decrpyt(uint8_t key, uint8_t encrypted_char) {
    return key ^ encrypted_char;
}

int main() {
    uint8_t key = 'a'; //01 10 00 01
    uint8_t input_char = 'c';
    uint8_t encrypted_char = encrpyt(key, input_char);
    uint8_t decrpyted_char = decrpyt(key, encrypted_char);
    printf("key: %d\ninput_char: %d\nencrypted_char: %d\ndecrpyted_char: %d\n", key, input_char, encrypted_char, decrpyted_char);
    return 0;
}
