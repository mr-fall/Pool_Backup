/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 05:17:51 by ehamte            #+#    #+#             */
/*   Updated: 2024/09/03 00:21:02 by ehamte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	x;

	x = '0';
	while (x <= '9')
	{
		write (1, &x, 1);
		x++;
	}
}

/*
 int	main()
{
	ft_print_numbers();
}
*/
