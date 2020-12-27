
#include <stdio.h>
#include <string.h>

int     ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] >= 'A' && str[i] <= 'Z')
    {
        i++;
    }
    if (str[i] == '\0')
    {
        return (1);
    }
    else
    {
        return (0);
    }


}

int main(void)
{
    char *a = "HOALl";

	printf("%d", ft_str_is_alpha(a));

	return (0);
}
