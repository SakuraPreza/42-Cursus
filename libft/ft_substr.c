/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:37:00 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:37:00 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon str'nin start'ıncı indisinden başlayarak n kadar karakterini
*	yeni bir stringe kopyalar, yeni stringi döndürür.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	Başlangıç indisimiz str'nin uzunluğundan büyükse, NULL gösteren bir dizinin
*	adresi döndürülür.
*	Eğer kopyalanacak karakter sayımız dizimizin başlangıç noktasından sonraki
*	stringin uzunluğundan büyükse, dizinin başlangıç noktasından sonuna  kadar 
*	olan stringin uzunluğuna eşitlenir. (Stringin dışına çıkmayı engeller.)
*	substr'ye ft_calloc() ile kopyalanacak karakterlerin 1 fazlası kadar char
*	tipinde yer tahsis edilir.
*	str'nin (n + start)'ınci indisinden başlayarak yeni dizinin n'inci indisine
*	karakterleri kopyalamaya başlar.
*	Her döngüde n azalır, bu şekilde birnevi diziye tersten atama yapmış olur.
*	Atama işlemini n kadar döndürür, yeni oluşturulan string döndürülür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	str:	(const char*) Kopyalanacak string.
*	start:	(unsigned int) Kopyalanmaya başlanacak indis.
*	n:		(size_t) Kaç karakterin kopyalanacağı.
*/

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t n)
{
	char	*substr;

	if (start > ft_strlen(str))
		return (ft_strdup(""));
	if (n > ft_strlen(str + start))
		n = ft_strlen(str + start);
	substr = ft_calloc(n + 1, sizeof(char));
	if (!substr)
		return (NULL);
	while (n && *((char *)(str + start + --n)))
		*(substr + n) = *((char *)(str + start + n));
	return (substr);
}
