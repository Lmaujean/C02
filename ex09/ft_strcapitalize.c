char	*ft_strcapitalize(char *str)
{
	int i;
	int new_word;

	i = 0;
	new_word = 1;
	
	while (str[i] != '\0')
	{
		if (new_word == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			new_word = 0;
		}
		else if (new_word == 1)
		{
			new_word = 0;
		}
		if ((str[i] >= 32 && str[i] <= 47) 
			|| (str[i] >= 58 && str[i] <= 64) 
			|| (str[i] >= 91 && str[i] <= 96) 
			|| (str[i] >= 123 && str[i] <= 126))
			{
				new_word = 1;
			}
		i++;	
	}

	return (str);
}

int main()
{
char str[] = "?coucou+comment 42ca-va ?";
printf("%s\n", ft_strcapitalize(str));
}
