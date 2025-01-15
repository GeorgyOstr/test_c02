/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:24:54 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/14 13:10:21 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strcapitalize(char *str);

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
	ft_strcapitalize(str);
	ft_putstr(str);
	ft_putstr("\n");
}

int	main(void)
{
	char num[] = "1234 sb 223 ss";
	char low[] = "abc sd 342 4J JJ";
	char upp[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char num_let[] = "abc193DAK sdlfkjl";
	char sym[] = "*&#&#abj jlsd";
	
	test(num);
	test(low);
	test(upp);
	test(num_let);
	test(sym);
	return (0);
}
