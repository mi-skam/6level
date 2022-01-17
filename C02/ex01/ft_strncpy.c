#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*temp;

	temp = dest;
	while (*src != '\0' && n > 0)
	{	
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	*dest = '\0';
	return (temp);
}
