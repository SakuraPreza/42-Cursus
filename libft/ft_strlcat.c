/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:59:40 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:36:15 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon dest ile src'yi dest strignginde n karakter kadar yeniden 
*	oluşturur, iki stringin baştaki toplam uzunluğunu döndürür. Eğer n dest'in
*	uzunluğundan küçükse (src'nin uzunluğu + n)'i döndürür.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	n dest'in uzunluğundan küçük veya eşitse, kendisini kendisinin üzerine
*	yazcak demektir, hiç gereksiz işlem yapmadan sonuç return edilir.
*	Değilse dest'in son karakterinden src'nin karakterleri atanmaya başlanır.
*	dest'in yeni halinin sonuna NULL atanır.
*	İki stringin toplam uzunluğu return edilir.
*	---------------------------------------------------------------------------
*	Parametreler:
*	dest:	(char*) Yeniden oluşturulacak dizi.
*	src:	(const char*) Üzerine yazılacak dizi.
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	index;
	size_t	dest_index;

	if (n <= ft_strlen(dest))
		return (ft_strlen(src) + n);
	index = 0;
	dest_index = ft_strlen(dest);
	while (*(src + index) && dest_index + 1 < n)
		*(dest + dest_index++) = *((char *)(src + index++));
	*(dest + dest_index) = '\0';
	return (ft_strlen(dest) + ft_strlen(src + index));
}
