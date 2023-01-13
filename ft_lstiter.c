/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:37:59 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 14:57:59 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The function ft_lstite() applies the function 'f' to the content of a 
// linked-list`s node 'lst' and every succesor of that node.

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
	return ;
}
