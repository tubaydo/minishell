/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:52:47 by taydogan          #+#    #+#             */
/*   Updated: 2023/10/10 11:52:52 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			s1_len;
	char			*dest;
	unsigned int	i;

	if (!s1)
		return ((char *)s1);
	s1_len = ft_strlen(s1);
	dest = (char *)malloc(sizeof(char) * (s1_len + ft_strlen(s2)) + 1);
	if (!dest)
		return (0);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest += i;
	i = 0;
	while (s2[i])
	{
		dest[i] = s2[i];
		i++;
	}
	dest[i] = 0;
	return (dest - s1_len);
}
