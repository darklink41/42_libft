/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <arthur.giuliano@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 17:16:39 by agiulian          #+#    #+#             */
/*   Updated: 2016/09/17 17:31:24 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s_n;
	size_t	i;

	i = 0;
	s_n = ft_strnew(ft_strlen(s));
	if (s_n == NULL)
		return (NULL);
	while (s[i])
	{
		s_n[i] = f(s[i]);
		i++;
	}
	s_n[i] = '\0';
	return (s_n);
}
