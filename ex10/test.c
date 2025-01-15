/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:24:54 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/14 14:28:47 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlcpy(char *dest, char *src, unsigned int size);

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str = str + 1;
	}
}

int	main(void)
{
	char src[50] = "abc\n";
	char dest[100] = "Destanation\n";

	ft_putstr("Destanation: ");
	ft_putstr(dest);
	ft_putstr("Source: ");
	ft_putstr(src);
	ft_strlcpy(dest, src, 0);
	ft_putstr("Destanation after strcpy(0): ");
	ft_putstr(dest);
	ft_strlcpy(dest, src, 2);
	ft_putstr("Destanation after strcpy(2): ");
	ft_putstr(dest);
	if (dest[1] == '\0')
		ft_putstr("Checked null copy\n");
	else
		ft_putstr("Failed null copy\n");

	return (0);
}
