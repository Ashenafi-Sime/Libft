/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asdebele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:12:26 by asdebele          #+#    #+#             */
/*   Updated: 2024/03/09 16:12:30 by asdebele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (size == 0)
		return (s_len + size);
	i = 0;
	while ((d_len + i) < (size - 1) && i < s_len)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	if (s_len == i || (d_len + i) == size - 1)
		dst[d_len + i] = '\0';
	if (size <= d_len)
		return (s_len + size);
	else
		return (d_len + s_len);
}
