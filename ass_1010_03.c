#include <stdio.h>
#include <ctype.h>  
int main()
 {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);  

    for (i = 0; str[i] != '\0'; i++)
 {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
      {
            str[i] = toupper(str[i]);  
       }
    }

    printf("String with vowels in uppercase: %s\n", str);

    return 0;
}
