#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], s3[100];

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    printf("\nLength of s1: %zu", strlen(s1));

    strcpy(s3, s1);
    printf("\ns3: %s", s3);

    if (strcmp(s1, s2) == 0) {
        printf("\nStrings are equal");
    } else {
        printf("\nStrings are not equal");
    }

    strcat(s1, s2);
    printf("\ns1 after strcat: %s\n", s1);

    return 0;
}