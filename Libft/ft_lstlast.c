/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 06:55:14 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:34:02 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon parametre olarak bir listenin ilk elemanının adresini alır
*	ve liste elemanlarında ilerleyerek listenin son bağlantı adresini döndürür.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	Parametrelerin varlığını kontrol eder ve değerleri yoksa NULL döndürür.
*	Listenin son elemanını gösterecek bir değişken oluşturur.
*	Bu değişkenin next'i listenin son elemanına eşit olana kadar kendisini
*	next'ine eşitler ve son halini return eder.
*	---------------------------------------------------------------------------
*	Parametreler:
*	firstList:	Listenin ilk elemanının adresi.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *firstList)
{
	t_list	*last_list;

	last_list = firstList;
	if (!last_list)
		return (NULL);
	while (last_list->next)
		last_list = last_list->next;
	return (last_list);
}
