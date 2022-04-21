/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:50:26 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 23:38:55 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen stringi yeni bir stringe kopyalar.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	Verilen strgingin uzunluğunu len değişkeninde tutar.
*	result'a ft_calloc() ile len'in bi fazla uzunluğu kadar yer tahsil eder.
*	Kopyalamaya result'un ve str'nin len'inci indisinden başlar.
*	Her döngüde len azalır, bu şekilde diziye tersten kopyalama yapmış olur.
*	Atama işlemini len kadar döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	str:	(const char*) Kopyalanacak dizi.
*/

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	char	*result;

	len = ft_strlen(str);
	result = ft_calloc((len + 1), sizeof(char));
	if (!result)
		return (NULL);
	while (len--)
		*(result + len) = *((char *)(str + len));
	return (result);
}
