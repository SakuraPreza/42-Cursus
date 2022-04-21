/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:13:49 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 23:45:09 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon bellekten verilen size ve byte çarpımı kadar yer tahsil eder.
*	Bu yerin tamamı NULL ile doludur.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	(void*) tipinde bir result değişkeni oluşturur.
*	Oluşturulan değişkene malloc() kullanarak size ile byte'ın çarpımı kadar
*	yer tahsil eder.
*	Tahsil edilmiş olan alanın tamamını ft_bzero() kullanarak NULL doldurur.
*	Başta oluşturulan result değişkenini döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	size:	(size_t) Tahsis edilecek eleman sayısı.
*	byte:	(size_t) Her bir elemanın byte olarak boyutu.
*/

#include "libft.h"

void	*ft_calloc(size_t size, size_t byte)
{
	void	*result;

	result = malloc(size * byte);
	if (!result)
		return (NULL);
	ft_bzero(result, size * byte);
	return (result);
}
