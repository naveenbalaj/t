#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
char a[100];
int n,i,count=0;
printf("ENTER THE INPUT SENTENCE:");
gets(a);
n=strlen(a);
printf("\nTHE LENGTH OF SENTENCE IS %d",n);
for(i=0;i<n;i++)
count++;
}
printf("\nTHE NO.OF.INTEGERS IN THE GIVEN SENTENCE ARE %d",count);
}

