#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char canary[8];
    char buffer[512];

    if (argc < 3) {
        printf("Usage: %s canary message\n", argv[0]);
        exit(0);
    }

    if (strlen(argv[2]) < 8) {
        strcpy(canary, argv[1]);
    }
    strcpy(buffer, argv[2]);
    if (strncmp(canary, "canary", 6) != 0) {
        printf("[-] CANARY PROTECTION!\n");
        exit(0);
    }

    printf("[+] Welcome!\n");
    printf("[+] Your message: ");
    printf(buffer);
    printf("\n");

    return 0;
}
