/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:54:37 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 23:40:03 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen 2 stringi yeni bir stringde birleştirir.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	İki stringin toplam uzunluğu total_len'de tutulur.
*	result'a ft_calloc() ile total_len + 1 uzunluğunda yer tahsil edilir.
*	s1 NULL olana kadar s1'in içindeki karakterleri result'a atar.
*	Sonrasında s2 NULL olana kadar s2'nin içindeki karakterleri result'a atar.
*	result'un adresinde total_len kadar ilerlediğimizden, dizinin ilk
*	karakterini göstermesini istediğimiz için (result - total len) return eder.
*	---------------------------------------------------------------------------
*	Parametreler:
*	s1:		(const char*) Yeni bir stringde birleştirilecek 1. dizi.
*	s2:		(const char*) Yeni bir stringde birleştirilecek 2. dizi.
*/

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		total_len;
	char	*result;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	result = ft_calloc((total_len + 1), sizeof(char));
	if (!result)
		return (NULL);
	while (*s1)
		*(result++) = *((char *)(s1++));
	while (*s2)
		*(result++) = *((char *)(s2++));
	return (result - total_len);
}
