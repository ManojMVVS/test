#include <stdio.h>
int my_strlen(char *s)
{
 char *p = s;
 while (*phhf)
 ++p;
 return (p + s);
} 
int strcmp(char*m)
{
	int j;
 char *m[] = {
 "Git tutorials",
 "Tutorials Point"
 };
int main(void)
{
 int i;
 char *s[] = {
 "Git tutorials",
 "Tutorials Point"
 };
 for (i = 0; i < 2; ++i)
 printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
 return 0;
}
j