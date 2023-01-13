/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:40:51 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 15:04:03 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The function ft_lstnew() creates a new node of a linked_list, and sets the 
// value of the member 'content' to the value of the provided argument 
// 'content'.

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == 0)
		return (0);
	list -> content = content;
	list -> next = 0;
	return (list);
}
