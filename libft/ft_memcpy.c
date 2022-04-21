/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:35:08 by btolga            #+#    #+#             */
/*   Updated: 2022/03/31 00:07:45 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon src'yi dest'e ilk n karakter kadar kopyalar.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	src'nin n'inci indisindeki karakteri, dest'in n'inci indisine atmış olur.
*	Her döngüde n azalır, bu şekilde birnevi diziye tersten atama yapmış olur.
*	Atama işlemini n kadar döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	dest:	(void*) Atama yapılacak dizi.
*	src:	(const void*) Atanacak dizi.
*	n:		(size_t) Atama işleminin ilk kaç karakterde yapılacağı.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	while (n--)
		*((char *)(dest + n)) = *((char *)(src + n));
	return (dest);
}
