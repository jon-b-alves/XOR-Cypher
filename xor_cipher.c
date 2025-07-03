#include <stdio.h>
#include <stdint.h>
#include <string.h>

void xor_cipher(uint8_t key, char *input_string, int len) {
    for (int i = 0; i < len; i++) {
        input_string[i] = key ^ input_string[i];
    }
}

int main() {
    uint8_t key = '0';
    char input_string[] = "i love coding";
    int len = strlen(input_string);

    printf("input_string: %s\n", input_string);

    xor_cipher(key, (uint8_t *)input_string, len);
    printf("encrypted_string: %s\n", input_string);

    xor_cipher(key, (uint8_t *)input_string, len);
    printf("original string: %s\n", input_string);

    return 0;
}
