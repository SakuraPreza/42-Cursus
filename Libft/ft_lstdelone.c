/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 07:40:27 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:34:00 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon parametre olarak verilen fonksiyonunu kullanarak verilen liste
*	elemanlarının content değişkenlerini siler.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	Parametrelerin varlığını kontrol eder ve değerleri yoksa hiçbir şey yapmaz.
*	ft_deleteFunc() fonksiyonu çağırılarak listItem'ın content'i silinir.
*	En sonunda free() fonksiyonunu kullanarak listItem için ayrılan yeri
*	serbest bırakır.
*	---------------------------------------------------------------------------
*	Parametreler:
*	listItem:			Listedeki bir elemanın adresi.
*	ft_deleteFunc():	İçerik silmek için kullanılacak fonksiyonun adresi.
*/

#include "libft.h"

void	ft_lstdelone(t_list *listItem, void (*ft_deleteFunc)(void *))
{
	if (listItem && ft_deleteFunc)
	{
		ft_deleteFunc(listItem->content);
		free(listItem);
	}
}
