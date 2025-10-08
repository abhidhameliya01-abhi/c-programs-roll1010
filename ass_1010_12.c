#include <stdio.h>
#include <ctype.h> 
int main()
{
    char str[] = "HeLLo WoRLd!";
    
    for (int i = 0; str[i] != '\0'; i++) 
    {
        str[i] = tolower(str[i]);
    }

    printf("Lowercase: %s\n", str);

    return 0;
}

