/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:28:22 by btolga            #+#    #+#             */
/*   Updated: 2022/03/31 00:39:04 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen stringin ilk n kadar karakteri içerisinde find'ı arar.
*	Eğer find'ı bulursa, ilk bulduğu adresi döndürür.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	str NULL olana denk her bir indisinde find'ı arar.
*	Eğer index, n'in bir eksiğine e eşit olduysa, döngü n kadar döndü ama
*	find'ı bulamadı demektir, bu durumda NULL döndürür.
*	Eğer find'ı bulursa, bulduğu adresi döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	str:	(const void*) Arama yapılacak dizi.
*	find:	(int) Aranacak karakter.
*	n:		(size_t) Dizinin ilk kaç karakterinde arama yapılacağı.
*/

#include "libft.h"

void	*ft_memchr(const void *str, int find, size_t n)
{
	char	*casted_str;

	casted_str = (char *)str;
	while (n--)
		if (*(casted_str++) == (char)find)
			return ((void *)(--casted_str));
	return (NULL);
}
