#include<stdio.h>
int main(int argc, char **argv)
{
	int i;
	printf("test git.\n");
	printf("parameter count:%d\n", argc - 1);
	for(i = 0; i < argc; i++)
	{
		printf("parameter[%d]:%s\n", i, argv[i]);
	}
	return 0;
}
