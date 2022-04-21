/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:00:14 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:36:17 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon src'nin (n - 1) kadar karakterini dest'in üstüne yazar. src'nin
*	uzunluğunu return eder.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	n, 0'dan büyükse src'nin karakterlerini dest'e atmaya başlar.
*	Yeni oluşturulan dizinin sonuna NULL atar.
*	src'nin uzunluğunu döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	dest:	(char*) Üzerine yazılacak dizi.
*	src:	(const char*) Üzerine yazılan dizi.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	index;

	index = -1;
	if (n > 0)
	{
		while (*((char *)(src + ++index)) && index < n - 1)
			*(dest + index) = *((char *)(src + index));
		*(dest + index) = '\0';
	}
	return (ft_strlen(src));
}
