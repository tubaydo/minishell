/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_operator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:53:33 by taydogan          #+#    #+#             */
/*   Updated: 2023/10/10 11:53:35 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	is_operator(char *str)
{
	if (!str)
		return (0);
	if (str[0] == '<' && str[1] == '<')
		return (HERE_DOC);
	if (str[0] == '>' && str[1] == '>')
		return (RED_APPEND);
	if (str[0] == '<')
		return (RED_INPUT);
	if (str[0] == '>')
		return (RED_OUTPUT);
	if (str[0] == '|')
		return (PIPE);
	return (0);
}
