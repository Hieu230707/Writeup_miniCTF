#include <stdio.h>
#include <string.h>

int main() {
    char kitu[] = "njojDUG|Xf2d1n4`u1`Wv2oe4s2boe";
    int n = strlen(kitu);

    for (int i = 0; i < n; i++) {
        kitu[i] = kitu[i] - 1; 
    }

    printf("%s", kitu);
    return 0;
}
