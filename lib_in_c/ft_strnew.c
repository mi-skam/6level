#include <stdlib.h>
#include "libl.h"

char	*ft_strnew(const char *src)
{
	char	*dest;

	dest = ft_strdup(src);
	if (!dest)
		return (NULL);
	return (dest);
}
