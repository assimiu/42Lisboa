
//#include <stdio.h>
//#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
int main()
{
	char a = 'A';
	printf("%c		%c\n", ft_toupper(a), toupper(a));
	return (0);
}
*/