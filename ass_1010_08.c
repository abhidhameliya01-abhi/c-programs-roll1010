#include <stdio.h>
#include <string.h>
int main()
{
   char str[100];
   int consonantCount = 0;

   printf("Enter a string: ");

   fgets(str, sizeof(str), stdin);

   int length = strlen(str);
   
   for (int i = 0; i< length; i++)
   {
   char ch = str[i];
   if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
   {
   if (ch != 'A' && ch != 'E' && ch != 'l' && ch != 'O' && ch != 'U' && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
  {
   consonantCount++;
  }
   }
}
   printf("Number of consonants: %d\n", consonantCount);
   return 0;
}
