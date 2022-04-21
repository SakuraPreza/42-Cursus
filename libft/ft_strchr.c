/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:42:27 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:36:08 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen stringin içinde find'i arar, bulursa ilk bulduğu yerin
*	adresini döndürür.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	str'nin gösterdiği yer NULL olana denk her bir indisinde find'ı arar.
*	Eğer find'ı bulursa, bulduğu adresi döndürür.
*	Bulamazsa NULL döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	str:	(const char*) Arama yapılacak dizi.
*	find:	(int) Aranacak karakter.
*/

#include "libft.h"

char	*ft_strchr(const char *str, int find)
{
	while (*str && *str != (char)find)
		str++;
	if (*str == (char)find)
		return ((char *)str);
	return (NULL);
}
