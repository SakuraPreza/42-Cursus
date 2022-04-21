/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:12:02 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 23:43:08 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon stringin her bir karakterine verilen fonksiyonu uygular.
*	Değişiklikleri yeni bir değişkende tutar.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	Yeni bir değişken oluşturulur ve ft_calloc() kullanarak gelen stringin 1
*	fazlası kadar bellekten yer tahsil edilir.
*	Verilen string'in her bir karakterinin ft_func() fonksiyonu uygulanmış
*	halini result'a atar.
*	---------------------------------------------------------------------------
*	Parametreler:
*	str:		(const char*) Her bir karakterine fonksiyon uygulanacak dizi.
*	ft_func:	(char) Stringin her karakterine uygulancak fonksiyon.
*/

#include "libft.h"

char	*ft_strmapi(const char *str, char (*ft_func)(unsigned int, char))
{
	unsigned int	index;
	char			*result;

	index = -1;
	result = ft_calloc(ft_strlen(str) + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (*((char *)(str + ++index)))
		*(result + index) = ft_func(index, *((char *)(str + index)));
	return (result);
}
