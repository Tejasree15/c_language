/* reverse the word in the given line and printd each word in a new line*/
#include<stdio.h>
#include<string.h>
void main()
{
 char line[100], word[20];
 int i,p;

 printf("Enter a line :");
 gets(line);

 for(i=0,p=0; ; i++)
 {
   if(line[i] == 32 || line[i] == '\0')
   {

       word[p] = '\0';
       puts(strrev(word));
       if ( line[i] == '\0')
           break;
       p = 0;
   }
   else
   {
       word[p] = line[i];
       p++;
   }
 }
}
