/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffaria-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 17:48:29 by ffaria-v          #+#    #+#             */
/*   Updated: 2026/03/13 17:51:23 by ffaria-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	src_length = 0;
	while (src[src_length])
		src_length++;
	if (size == 0)
		return (src_length);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_length);
}
/*#include <unistd.h>
void    putnbr(unsigned int n)
{
        char    c;

        if (n >= 10)
                putnbr(n / 10);
        c = n % 10 + '0';
        write(1, &c, 1);
}

int     main(void)
{
        char            dest[6];
        char            *src = "Hello World";
        int             i;
        unsigned int    ret;

        ret = ft_strlcpy(dest, src, 6);
        i = 0;
        while (dest[i])
        {
		write(1, &dest[i], 1);
		i++;
        }
        write(1, "\n", 1);
        write(1, "src length: ", 12);
        putnbr(ret);
        write(1, "\n", 1);
        return (0);
}*/
