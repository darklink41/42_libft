/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <arthur.giuliano@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 23:38:02 by agiulian          #+#    #+#             */
/*   Updated: 2016/09/16 23:45:32 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*s_c;

	i = 0;
	s_c = (const char*)s;
	while (i < n)
	{
		if (s_c[i] == (unsigned char)c)
			return ((void*)s + i);
		i++;
	}
	return (NULL);
}
