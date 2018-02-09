#include <stdio.h>
int main()
int no_lines = 0;
char filename[40];sample_chr;
printf("Enter para: ");
scanf("%s", para);
sample_chr = getc(fp);
while (sample_chr != EOF)
{ 
if(sample_chr == '')
{      
no_lines=no_lines+1;
}
sample_chr = getc(fp);
}
printf("There are %d lines in %s ", no_lines, filename);
return 0;
}
