#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>
int check(char string1[],char string2[])
{
      int flag=1;
      int i,j;
      printf("Strlen1=%d\n",strlen(string1));
      printf("Strlen2=%d\n",strlen(string2));
      if(strlen(string1)!=strlen(string2))
            return 0;
      for (i=0;i<strlen(string1);i++)
      {
            flag=0;
            for(j=0;j<strlen(string1);j++)
                  if(string1[i]==string2[j])
                        flag=1;
            if(!flag)
                  return 0;
      }
      return 1;
}
int main(void)
{
      char string1[]={0};
      char string2[]={0};
      printf("Unesite prvi string\n");
      scanf("%s",string1);
      printf("Unesite drugi string\n");
      scanf("%s",string2);
      if(check(string1,string2))
            printf("Anagrami su\n");
      else
            printf("Nisu anagrami\n");
      return 0;
      }
