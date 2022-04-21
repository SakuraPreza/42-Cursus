/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:36:35 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:36:35 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen str'nin ilk n kadar karakterinin içerisinde find'ı
*	arar, bulursa ilk bulduğu yerin adresini döndürür. find NULL'ı gösteriyorsa
*	str döndürülür.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	find NULL'ı gösteriyorsa str return edilir.
*	str'nin başından başlayarak sonuna kadar içerisinde find'ın karakterleri
*	var mı kontrol edilir.
*	Eğer find'ın karakterlerinden birine rastlandıysa diğer karakterler kontrol
*	edilir ve her eşleşen karakter için ok 1 arttırılır.
*	Eğer ok find'ın karakter sayısına ulaştıysa bir eşleşme bulundu demektir ve
*	ilk bulduğu yerin adresi return edilir.
*	Eğer eşleşme yarıda kaldıysa ok ve find_i sıfırlanır.
*	EŞleşme bulamazsa NULL döndürülür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	str:	(const char*) İçerisinde arama yapılacak dizi.
*	find:	(const char*) Aranacak dizi.
*	n:	(size_t) Dizinin ilk kaç karakterinde arama yapılacağı.
*/

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	str_i;
	size_t	find_i;
	size_t	ok;

	str_i = 0;
	if (!(*find))
		return ((char *)str);
	while (*(str + str_i))
	{
		find_i = 0;
		ok = 0;
		while (*(str + str_i + find_i) == *(find + find_i)
			&& str_i + find_i < n)
		{
			ok++;
			find_i++;
		}
		if (ok == ft_strlen(find))
			return ((char *)str + str_i);
		str_i++;
	}
	return (NULL);
}
