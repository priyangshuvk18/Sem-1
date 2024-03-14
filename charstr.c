#include <stdio.h>
int main()
{
    char arr[100];
    char *p;
    int vowel = 0, consonant = 0;

    printf("Enter the string: ");
    scanf("%s", arr);

    p = arr;
    while (*p != '\0')
    {
        if (*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U' || *p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
        p++;
    }
    printf("Number of vowel in string: %d\n", vowel);
    printf("Number of consonant in string: %d\n", consonant);
    return 0;
}