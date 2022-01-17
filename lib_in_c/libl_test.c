#include <stdio.h>
#include "libl.h"


int main(int argc, char const *argv[])
{

    char *source;
    char *target;
    source = ft_strnew(".");
    target = ft_strnew(".");


    if (argc > 1) {
        source = ft_strnew(argv[1]);
        ft_strcpy(target, source);
        printf("%s", target);
    }
    return 0;
}
