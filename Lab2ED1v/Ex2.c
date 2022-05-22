#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
char* concatenar(char *s1, char *s2) {
    int i, j;
    for (i = 0; s1[i] != '\0'; ++i);
    for (j = 0; s2[j] != '\0'; ++j, ++i) {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    return s1;
}
int main() {

    char str1[] = "Jose";
    char str2[] = "Augusto";

    concatenar(str1, str2);

    assert(strcmp("JoseAugusto", str1) == 0);

    return (0);
}
