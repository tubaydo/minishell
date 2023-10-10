/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:53:48 by taydogan          #+#    #+#             */
/*   Updated: 2023/10/10 11:53:50 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	set_env(char **env)
{
	size_t	i;
	size_t	len;
	char	**head;

	head = env;
	while (*head)
		head++;
	len = head - env;
	g_ms.env = ft_calloc(sizeof(char **), len + 1);
	i = -1;
	while (++i < len)
		g_ms.env[i] = ft_strdup(env[i]);
}
