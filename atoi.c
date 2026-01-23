
#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int c;
	int s;

	i = 0;
	c = 0;
	s = 1;

	while (nptr[i] != '\0')
	{
		if (nptr[i] == ' ' || nptr[i] <= '\t' || nptr[i] == '\n'
			|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		{
			i++;
			printf("1");
		}
		if (nptr [i] == '-')
		{
			s = -1;
			printf("2");
			i++;
		}
		if (nptr[i] >= '1' && nptr[i] >= '9')
		{
			c = (c * 10) + (nptr[i] - '0');
			printf("3");
			i++;
		}
		return (s * c);
	}
	return(0);

}

#include <stdio.h>
int main()
{
	char dizi[]="-677550rjrtkt5lgögrlsdfguıol";
}