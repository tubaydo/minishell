/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:55:52 by taydogan          #+#    #+#             */
/*   Updated: 2023/10/10 11:55:53 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	builtin_pwd(void)
{
	char	*result;

	result = getcwd((void *)0, 0);
	if (!result)
		perror("minishell ");
	else
		printf("%s\n", result);
	free(result);
	if (!is_parent())
		exit(errno);
}
