#include<stdio.h>
void reverse(char *);
int main(void)
{
 char a[20];
 gets(a);

 printf("%s\n",a);
 reverse(a);
 printf("%s",a);
 return 0;
}
void reverse(char *str)
{
  char *beg,*end,te;
 
  int len,i;

  beg=str;
  len=strlen(str);
  end=&str[len-1] ;

  for(i=0;i<len/2;i++)
  {
    te=*beg;
    *beg=*end;
    *end=te;
    *beg++;
    *end--;
  }
}
