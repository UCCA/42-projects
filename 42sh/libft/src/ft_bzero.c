/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkoehler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:17:06 by fkoehler          #+#    #+#             */
/*   Updated: 2015/12/08 17:03:25 by fkoehler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (n > 0)
	{
		ptr[i] = 0;
		i++;
		n--;
	}
}
