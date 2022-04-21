/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:36:43 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:36:43 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen stringin içinde find'i tersten arar, bulursa ilk 
*	bulduğu yerin adresini döndürür.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	str'nin ilk karakterine gelene kadar sondan başlayarak her bir indisinde
*	find'ı arar.
*	Bulursa bulduğu yerin adresini döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	str:	(const char*) Arama yapılacak dizi.
*	find:	(int) Aranacak karakter.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int find)
{
	int	index;

	index = ft_strlen(str);
	while (index >= 0)
	{
		if (*((char *)(str + index)) == (char)(find))
			return ((char *)(str + index));
		index--;
	}
	return (NULL);
}
