/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:18:11 by frmessin          #+#    #+#             */
/*   Updated: 2022/04/03 01:02:32 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	const char	*s;

	s = (const char *) src;
	d = (char *) dst;
	if(src == NULL && dst == NULL)
		return (NULL);
	while (n)
	{
		*d = *s;
		n--;
		d++;
		s++;
	}
	return (dst);
}

//		ft_memcpy:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [CRASH] 
//		[crash]: your memcpy does not behave well with NULL as both params with size