#include "libft.h"

void		ft_del(void *d, size_t size)
{
	free(d);
	(void)size;
}
