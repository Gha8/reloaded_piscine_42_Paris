/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 06:24:20 by gmohamed          #+#    #+#             */
/*   Updated: 2024/05/19 06:25:04 by gmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	char	*s;
	int	i;
	
	i = 0;
	s = malloc(3);
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	return (s);
}
