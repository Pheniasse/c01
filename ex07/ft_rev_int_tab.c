/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mydelisl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:40:17 by mydelisl          #+#    #+#             */
/*   Updated: 2022/07/18 17:58:19 by mydelisl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	cui;

	i = 0;
	cui = 0;
	while (i < (size / 2))
	{
		cui = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = cui;
		i++;
	}
}
