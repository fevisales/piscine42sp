/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffaria-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:26:51 by ffaria-v          #+#    #+#             */
/*   Updated: 2026/03/13 17:19:57 by ffaria-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	new_word;
	int	i;

	new_word = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 47)
			new_word = 1;
		else if (new_word == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			new_word = 0;
		}
		else if (new_word == 0 && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			new_word = 0;
		}
		else
			new_word = 0;
		i++;
	}
	return (str);
}
/*#include <unistd.h>
int	main(void)
{
	char	str[] = {"hi, how are you? 42words forty-two; fifty+and+one"};
	char	*res;
	int	i;

	res = ft_strcapitalize(str);	
	i = 0;
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
	return (0);
}*/
