/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:24:54 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/14 12:42:05 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

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
	ft_strncpy(dest, src, 6);
	ft_putstr("Destanation after strcpy: ");
	ft_putstr(dest);
	if (dest[5]=='\0')
		ft_putstr("Checked null copy\n");
	else
		ft_putstr("Failed null copy\n");

	return (0);
}
