/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 02:24:44 by gmohamed          #+#    #+#             */
/*   Updated: 2024/05/19 02:49:03 by gmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char 	*old_a;

	old_a = *a;
	*a = *b;
	*b = old_a;
}

int	main(int a, char **b)
{
	int	i;
	int	j;

	if (a < 2)
        	return 0;
	
	j = 1;
	i = 0;
	while (i <= a - 2)
	{
		j = 1;
		while(j <= a - 2)
		{
			if (ft_strcmp(b[j], b[j + 1]) > 0)
				ft_swap(&b[j],&b[j + 1]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i++ <= a - 1)
	{
		j = 0;
		while (b[i][j++] != '\0')
		{
			ft_putchar(b[i][j]);
			//j++;
		}
		ft_putchar('\n');
		//i++;
	}
}
