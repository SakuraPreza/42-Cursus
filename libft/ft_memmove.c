/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:58:00 by btolga            #+#    #+#             */
/*   Updated: 2022/03/31 00:08:45 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon src'yi dest'e ilk n karakter kadar kopyalar, src'nin adresi
*	dest'in adresinden küçükse atamaya sondan başlanır.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	src'nin adresi dest'in adresinden küçükse ft_memcpy() çağırarak tersten
*	atama yapılmış halini döndürür.
*	Normal durumlarda atamayı baştan başlayarak yapar, ve dest'i döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	dest:	(void*) Atama yapılacak dizi.
*	src:	(const void*) Atanacak dizi.
*	n:		(size_t) Atama işleminin ilk kaç karakterde yapılacağı.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	index;

	index = -1;
	if (!dest && !src)
		return (NULL);
	if (src < dest)
		return (ft_memcpy(dest, src, n));
	while (++index < n)
		*((char *)(dest + index)) = *((char *)(src + index));
	return (dest);
}
