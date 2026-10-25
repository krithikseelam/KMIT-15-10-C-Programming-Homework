#include <stdio.h>

int main(void) {
    char s[] = "hello world";
    int freq[256] = {0};

    for (int i = 0; s[i] != '\0'; i++)
        freq[(unsigned char)s[i]]++;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            if (i == ' ')
                printf("space: %d\n", freq[i]);
            else
                printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}
