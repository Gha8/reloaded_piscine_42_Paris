/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 06:33:10 by gmohamed          #+#    #+#             */
/*   Updated: 2024/05/19 06:33:15 by gmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*array;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(size * sizeof(int));
	if (!array)
		return (NULL);
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
