/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:32:55 by jforner           #+#    #+#             */
/*   Updated: 2021/11/10 17:02:35 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		t1;
	int		t2;
	size_t	count;

	count = 0;
	t1 = 0;
	t2 = 0;
	while (s1[count] && s2[count] && count < n)
	{
		t1 = (unsigned char)s1[count];
		t2 = (unsigned char)s2[count];
		if ((unsigned char)s1[count] != (unsigned char)s2[count])
			return (t1 - t2);
		count++;
	}
	if (count < n)
	{
		t1 = (unsigned char)s1[count];
		t2 = (unsigned char)s2[count];
	}
	return (t1 - t2);
}
