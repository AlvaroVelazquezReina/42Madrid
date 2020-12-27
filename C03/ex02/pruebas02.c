
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0; 
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (0);
}

int main(void)
{
    char src[10] = "adios.";
    char dest[10] = "hola y ";

    ft_strcat(dest, src);
    printf("%s", dest);
    return(0);
}
