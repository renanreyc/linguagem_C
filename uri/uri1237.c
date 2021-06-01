/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>
#include <string.h>

#define max(x, y) ((x) > (y) ? (x) : (y))

int LCSubstr(char *s1, char *s2, int n1, int n2)
{
   
    int LCSuff[51][51];
    int result = 0;
    int i, j;


    for (i = 0; i <= n1; ++i) {
        for (j = 0; j <= n2; ++j) {
            if (!i || !j)
                LCSuff[i][j] = 0;
            else if (s1[i-1] == s2[j-1]) {
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
            } else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}

int main()
{
    char str1[52], str2[52];
    int len1, len2;

    while (fgets(str1, 52, stdin)) {
        fgets(str2, 52, stdin);

        len1 = strlen(str1) - 1;
        len2 = strlen(str2) - 1;

        printf("%d\n", LCSubstr(str1, str2, len1, len2));
    }

    return 0;
}
  