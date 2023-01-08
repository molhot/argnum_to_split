#include "tester.h"

char	*ft_strchr(const char *s, int c)
{
	char		src;
	char		*s_2;
	size_t		num;

	s_2 = (char *)s;
	num = ft_strlen(s_2);
	src = (char)c;
	if (*s == '\0' && c == '\0')
		return ((char *)s);
	if (c == '\0')
		return (s_2 + num);
	while (num != 0)
	{
		if ((unsigned char)*s_2 == (unsigned char)src)
			return (s_2);
		num = num - 1;
		s_2 = s_2 + 1;
	}
	return (NULL);
}



bool	space_checker(char *arg)
{
	if (ft_strchr(arg, ' ') == NULL)
		return (false);
	else
		return (true);
}

bool	digit_or_not(char *arg)
{
	size_t	position;
	char	sub;

	position = 0;
	while (arg[position] != '\0')
	{
		sub = arg[position];
		if (position == 0 && (sub != '-' && !('0' <= sub && sub <= '9')))
			return (false);
		else if (position != 0)
		{
			if (!('0' <= sub && sub <= '9'))
				return (false);
		}
		position++;
	}
	return (true);
}

bool	same_argchecker(char **arg)
{
	size_t	argposition;

	argposition = 0;
	while (arg[argposition] != NULL)
	{
		if (digit_or_not(arg[argposition]) == false)
			return (false);
		argposition++;
	}
	return (true);
}

bool	checker_argnum(char *arg)
{
	size_t	position;
	bool	digit_check;
	char	**splited_arg;

	position = 0;
	if (space_checker(arg) == false)
	{
		if (digit_or_not(arg) == false)
			return (false);
		else
			return (true);
	}
	splited_arg = ft_split(arg, ' ');
	if (same_argchecker(splited_arg) == false)
		return (false);
	return (true);
}

//argnum[argc] contains truly arg
int main(int argc, char **argnum)
{
    bool    checker;

    if (argc == 2)
    {
        if (checker_argnum(argnum[1]) == false)
			printf("arg is not corrective");
		else
			printf("arg is corrective");
    }
    else
        printf("arg is not two");
}

///////
//spliter
///////

