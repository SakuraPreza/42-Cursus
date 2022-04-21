/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:21:14 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 23:41:26 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen stringi c ayrıcı karakterlerinden ayırır ve ayrılmış
*	olan stringleri yeni bir değişkende tutar.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	(char **) tipinde yeni bir değişken açılır.
*	ft_destroy_delimiters() ile bize verilen stringin bir kopyası oluşturulur.
*	Oluşturulan kopya stringdeki ayırıcı karakterler NULL ile değiştirilir.
*	Ortaya çıkan kelimelerin ilk karakterlerinin adresleri result'un
*	indislerinde tutulur.
*	Sonrasında result'un ilk indisinden başlayarak sonuna gelene dek
*	ft_strdup() ile bu yeni stringler kopyalanır ve result'un indislerine
*	atanır.
*	---------------------------------------------------------------------------
*	Parametreler:
*	str:			(const char*) Ayırıcı karakterlerinden ayırılacak dizi.
*	delimiter:		(char) Ayırıcı karakter.
*/

#include "libft.h"

static int	ft_compute_items(const char *str, char c)
{
	int	index;
	int	word_count;

	index = 0;
	word_count = 0;
	while (*(str + index))
	{
		if (*(str + index) == c)
			index++;
		else
		{
			word_count++;
			while (*(str + index) != c && *(str + index))
				index++;
		}
	}
	return (word_count);
}

char	**ft_destroy_delimiters(char *str, char c)
{
	int		index;
	int		ptr_index;
	char	**result;

	index = 0;
	ptr_index = 0;
	result = ft_calloc(ft_compute_items(str, c) + 1, sizeof(char *));
	while (*(str + index))
	{
		if (*(str + index) == c)
			*(str + index++) = '\0';
		else
		{
			*(result + ptr_index++) = (str + index++);
			while (*(str + index) != c && *(str + index))
				index++;
		}
	}
	return (result);
}

char	**ft_split(const char *str, char delimiter)
{
	int		index;
	char	*str_copy;
	char	**result;

	index = -1;
	str_copy = ft_strdup(str);
	result = ft_destroy_delimiters(str_copy, delimiter);
	if (!result)
		return (NULL);
	while (*(result + ++index))
		*(result + index) = ft_strdup(*(result + index));
	free(str_copy);
	return (result);
}
