#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main()
{
    // test1: only print first three characters of "Hello."
	char* test1_src = "Hello.";
	char* test1_dst = (char*)malloc(100 * sizeof(char));
	printf("Before:\ttest1_dst = %s\n", test1_dst);
	ft_strncpy(test1_dst, test1_src, 3);
	printf("After:\ttest1_dst = %s\n", test1_dst);

    // test2: try to copy more characters then the length of the src string
    char* test2_src = "Hi.";
	char* test2_dst = (char*)malloc(100 * sizeof(char));
	printf("Before:\ttest2_dst = %s\n", test2_dst);
	ft_strncpy(test2_dst, test2_src, 10);
	printf("After:\ttest2_dst = %s\n", test2_dst);
    int size = sizeof test2_dst / sizeof(char);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", test2_dst[i]);
    }
    printf("\n");
}
