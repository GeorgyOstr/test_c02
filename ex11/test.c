/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:24:54 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/14 14:51:47 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

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
	ft_putstr(str);
	ft_putstr("  ");
	ft_putstr_non_printable(str);
	ft_putstr("\n");
}

int	main(void)
{
	char num[] = "Coucou\ntu vas bien ?";
	char low[] = "abc \t";
	char upp[] = "DAKJ\r";
	char num_let[] = "abc193\vDAK";
	char sym[] = "*&#&#abj";
	
	test(num);
	test(low);
	test(upp);
	test(num_let);
	test(sym);
	return (0);
}
