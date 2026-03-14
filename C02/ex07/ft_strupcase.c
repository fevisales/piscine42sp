/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffaria-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 15:54:14 by ffaria-v          #+#    #+#             */
/*   Updated: 2026/03/13 15:56:16 by ffaria-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*#include <unistd.h>
int	main(void)
{
	char str[] = {"TeStAnDo"};
	char	*res;
	int	i;

	res = ft_strupcase(str);	
	i = 0;
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
	return(0);
}*/
