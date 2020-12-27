
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int resultado;

	i = 0;
    resultado = 0;

    while (src[resultado] != '\0')
    {
        resultado++;
        if (size != 0)
        {
            while (src[i] != '\0' && (i < size - 1))
            {
                dest[i] = src[i];
                i++;
            }
            dest[i] = '\0';
        }
    }
    return(resultado);

}

int main()
{
	char src[] = "holasdffasdfa";
    char dest[4];

    printf("%d\n", ft_strlcpy(dest,src,5));

	return (0);
}
