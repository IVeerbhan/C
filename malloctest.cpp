#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   char *str,*str2;

   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "tutorialspoint");
   printf("String = %s,  Address = %u\n", str, str);

   /* Reallocating memory */
   
   str2 = (char *) malloc(25);
   strcpy(str2,str);
   strcat(str2, ".com");free(str);
   printf("String = %s,  Address = %u\n", str2, str2);

   free(str);
   
   return(0);
}
