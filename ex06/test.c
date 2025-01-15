/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:24:54 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/13 21:07:03 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);
int ft_str_is_printable(char *str);

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str = str + 1;
	}
}

void test(char *str)
{
	if (ft_str_is_printable(str) == 0)
		ft_putstr("O");
	else
		ft_putstr("X");
}

int	main(void)
{
	char num[] = "1234";
	char low[] = "abc";
	char upp[] = "DAKJ";
	char num_let[] = "abc193DAK";
	char sym[] = "*&#&#abj";
	
	test(num);
	test(low);
	test(upp);
	test(num_let);
	test(sym);
	return (0);
}
