#include "main.h"
/**
 * rev_string - revert a string
 * @str: a string
 */
void main(void)
{
    
//        char s[] = "holberton";
        int i,o = 0;
        char r[600];

        while (s[i])
        {
                r[i] = s[i];
                i++;
        }
        i -= 1;
 //       printf("length %i\n",i);
        while (i >= 0)
        {
  //              printf("letra %c en %i ",r[i],i);
                r[o] = s[i];
                i--;
                o++;
        }
   //     printf("\n--------\n");
        o -= 1;
    //    printf("&s",r);
   //     putchar('\n');
        while (r[i])
        {
                s[i] = r[i];
                i++;
        }
  //      printf("Array invertido %s\n",r);
  //      printf("Original copiado del invertido ---  %s",s);
}
