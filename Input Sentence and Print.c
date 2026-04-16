#include<stdio.h>
int main()
{
	char ch[100];
	scanf("%[^\n]%*c", &ch);
	printf("Hello, world!\n");
	printf("%s",ch);
	return 0;
}
