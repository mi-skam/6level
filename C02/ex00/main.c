#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int		main()
{
	char* test1 = "Hello.";
	char* test2 = (char*)malloc(100 * sizeof(char));
	printf("Before:\ttest2 = %s\n", test2);
	ft_strcpy(test2, test1);
	printf("After:\ttest2 = %s\n", test2);
}
