#include "ft_utils.h"
void	ft_printf(char *format, char *arg1, char *arg2, char *arg3)
{
	format = ft_strrep(format, arg1, "%s");
	format = ft_strrep(format, arg2, "%s");
	format = ft_strrep(format, arg3, "%s");
	printf("%s", format);
}