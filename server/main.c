#include<stdio.h>
extern int test(int);
extern void subDir(void);

int main(void)
{
	printf("start to print a line\n");
	test(3);
	subDir();
	return 0;
}
