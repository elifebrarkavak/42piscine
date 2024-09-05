#include<unistd.h>

int main(int argc,char *argv[])
{
	int i=0;
	int a=argc-1;
	
	if(argc == 1)
	{
		write(1, "\n", 1);
	}
	else
	{
		while(argv[argc-1][i])
		{
			write(1, &argv[argc-1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}

	return 0;
}
