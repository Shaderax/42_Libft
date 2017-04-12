#include "libft.h"

double	ft_atof(const char *str)
{
	double	res;
	double	res2;
	char	*c;
	int		len;
	char	minus;

	c = (char *)str;
	res = (double)ft_atoi(c);
	while (*c && (*c == ' ' || *c == '\t'))
		c++;
	minus = (*c == '-');
	while (*c && *c != '.')
		c++;
	if (*c == '.')
		c++;
	res2 = (double)ft_atoi(c);
	len = ft_strlen(c);
	while (len--)
		res2 /= 10;
	return (res + ((!minus) ? res2 : -res2));
}
