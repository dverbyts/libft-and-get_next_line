/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dverbyts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:01:18 by dverbyts          #+#    #+#             */
/*   Updated: 2016/11/28 17:01:20 by dverbyts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t num)
{
	int z;
	int x;

	z = ft_strlenint(s1);
	x = 0;
	while (num-- && s2[x])
		s1[z++] = s2[x++];
	s1[z] = '\0';
	return (s1);
}
