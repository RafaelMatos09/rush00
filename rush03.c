/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:36:45 by rafmorei          #+#    #+#             */
/*   Updated: 2023/07/30 21:36:50 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(c
	if (x >= 1 && y >= 1 && x <= 4294967295 && y <= 4294967295)
	{
		while (linha <= y)
		{
			if (linha == 1)
				imprime('A', 'B', 'C', x);
			else if (linha == y)
				imprime('A', 'B', 'C', x);
			else
				imprime('B', ' ', 'B', x);
			linha++;
		}
	}
	else
	{
		write(1, "Entrada inválida", 17);
	}
}
har c);

void	imprime(char ini, char meio, char fim, int tam)
{
	int	cont_col;

	cont_col = 1;
	while (cont_col <= tam)
	{
		if (cont_col == 1)
			ft_putchar(ini);
		else if (cont_col == tam)
			ft_putchar(fim);
		else
			ft_putchar(meio);
		cont_col++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	linha;

	linha = 1;
	if (x >= 1 && y >= 1 && x <= 4294967295 && y <= 4294967295)
	{
		while (linha <= y)
		{
			if (linha == 1)
				imprime('A', 'B', 'C', x);
			else if (linha == y)
				imprime('A', 'B', 'C', x);
			else
				imprime('B', ' ', 'B', x);
			linha++;
		}
	}
	else
	{
		write(1, "Entrada inválida", 17);
	}
}
