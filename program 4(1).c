#include<stdio.h>
int main()
{
	char ch;
	char s[1000];
	char sen [1000];
	printf("enter a single character");
	scanf("%c",&ch);
	printf("\n enter a word");
	scanf("%s",&s);
	printf("/n enter a sentences");
	scanf("%[\n]",sen);
	printf("%c\n%s\n%s",ch,s,sen);
	return 0;
}

