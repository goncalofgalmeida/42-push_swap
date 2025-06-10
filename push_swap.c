/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g24force <g24force@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:03:48 by g24force          #+#    #+#             */
/*   Updated: 2025/06/10 18:04:30 by g24force         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	disp_error(void)
{
	ft_putendl_fd("Error", 2);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		(void)argv; // delete
		return (1);
	}
	
	return (0);
}
