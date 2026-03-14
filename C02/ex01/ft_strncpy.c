/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffaria-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:06:38 by ffaria-v          #+#    #+#             */
/*   Updated: 2026/03/13 16:14:48 by ffaria-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	char	dest[20];
	char	*src = "Hello World";
	int		i;

	ft_strncpy(dest, src, 7);
	dest[10] = '\0';
	i = 0;
	while (dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
