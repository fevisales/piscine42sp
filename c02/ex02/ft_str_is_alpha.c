/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffaria-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:35:02 by ffaria-v          #+#    #+#             */
/*   Updated: 2026/03/11 15:22:38 by ffaria-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
	{
		if(!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)))
			return (0);
	i++;
	}
	return(1);
}
#include <unistd.h>
int	main(void)
{
	char	str[] = {""};
	int	res;
	char	c;

	res = ft_str_is_alpha(str);
	c = res + '0';

	write(1, &c, 1);
	
	return(0);
}
