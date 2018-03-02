#include "ft_utils.h"


/**********************
* BASIC / LIBFT FUNCS *
**********************/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;

	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	else
		return 0;
}

char	*ft_strrep(char *base, char *sub, char *find)
{
	int i;
	int k;
	int j;
	char *mod;
	int space;

	i = 0;
	j = 0;
	k = 0;
	space = ft_strlen(base) - 2 + ft_strlen(sub);
	mod = (char *)malloc(sizeof(char *) + space);
	while (i <= space)
	{
		if (base[i] == find[0] && base[i + 1] == find[1] && k == 0)
		{
			while (k < ft_strlen(sub))
			{
				mod[i] = sub[k];
				i++;
				k++;
			}
			j += 2;
			i--;
		}
		else
		{
			if (base[j]) {
				mod[i] = base[j];
			}
			else
				break;
			j++;
		}
		i++;
	}

	mod[i] = '\0';
	return (mod);
}

/************
* FT_PRINTF *
************/
int		ft_argsnumber(char *str)
{
	int args;
	int i;

	i = 0;
	args = 0;
	while (str[i])
	{
		if (str[i - 1] == '%' && ft_isalpha(str[i]))
			args++;
		i++;
	}

	return (args);
}

char	*ft_argstype(char *str)
{
	char *type;
	int args;
	int i;

	i = 0;
	args = 0;
	type = (char *)malloc(sizeof(char*) + ft_argsnumber(str));
	while (str[i])
	{
		if (str[i - 1] == '%' && ft_isalpha(str[i]))
		{
			type[args] = str[i];
			args++;
		}
		i++;
	}
	type[args] = '\0';

	return(type);
}