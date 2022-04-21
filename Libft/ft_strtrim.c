/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:36:52 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:36:52 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon str'nin başından ve sonundan find'ın içerisindeki karakterleri
*	silinmiş halini yeni bir string olarak döndürür.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	ft_check() fonksiyonu stringin yollanan karakterinin find'ın içerisindeki
*	karakterlerden biri olup olmadığını kontrol eder.
*	Stringin başından ve sonundan nereye kadar silineceğini ft_check() 
*	fonksiyonu ile hesaplar ve kaçıncı indisler olduğunu start ve end
*	değişkenlerinde tutar.
*	ft_calloc() ile silinmemiş karakterlerin yazdırılacağı kısım için bellekten
*	end - start + 1 uzunluğunda yer tahsis eder.
*	result'un (end - start). indisinine str'nin end'inci indisini atar.
*	Her döngüde end azalır, bu şekilde birnevi diziye tersten atama yapar.
*	Atama işlemini dizideki karakter sayısı (start < end) kadar döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	str:	(const char*) Başından ve sonundan kırpılacak dizi.
*	find:	(const char*) Kırpılacak karakterler dizisi.
*/

#include "libft.h"

static int	ft_check(char c, const char *find)
{
	while (*((char *)(find)))
	{
		if (*((char *)(find++)) == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(const char *str, const char *find)
{
	int		start;
	int		end;
	char	*result;

	start = 0;
	end = ft_strlen(str);
	while (*((char *)(str + start)) && ft_check(*(str + start), find))
		start++;
	while (end > start && ft_check(*(str + end - 1), find))
		end--;
	result = ft_calloc(((end - start) + 1), sizeof(char));
	if (!result)
		return (NULL);
	while (start < end--)
		*(result + (end - start)) = *((char *)(str + end));
	return (result);
}
