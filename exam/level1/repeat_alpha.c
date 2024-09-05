#include<unistd.h>

int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		write(1,"\n", 1);
	}
	else
	{
		int i=0;
		while(argv[1][i])
		{
			int r=1;
			if(argv[1][i] >= 'a'  && argv[1][i] <= 'z')
			{
				r+=argv[1][i] - 'a';
			}
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				r+=argv[1][i] - 'A';
			}
			while(r)
			{
				write(1, &argv[1][i], 1);
				r--;
			}
			i++;
		}
		write(1, "\n", 1);

		return 0;
	}
}
