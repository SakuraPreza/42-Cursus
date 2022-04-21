/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 07:18:58 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:33:56 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen listenin sonuna newItem'ı ekler.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	Listenin son değişkenini tutması için yeni bir liste elemanı oluşturur.
*	Parametrelerin varlığını kontrol eder ve eğer firstList'in değeri yoksa
*	firstList'e newItem'i atar ve fonksiyondan çıkar.
*	Parametreleri kontrol etme işleminde herhangi bir problemle karşılaşmazsa
*	oluşturulan yeni elemanı listenin ilk elemandan başlatarak listenin sonuna
*	gidene kadar listede gezinir.
*	Listenin sonunu bulduğunda yeni oluşturulan elemanı listenin sonuna ekler.
*	---------------------------------------------------------------------------
*	Parametreler:
*	firstList:	Listenin adresi
*	newItem:	Listeye eklenecek olan elemanın adresi. 
*/

#include "libft.h"

void	ft_lstadd_back(t_list **firstList, t_list *newItem)
{
	t_list	*last;

	if (!(*firstList))
		*firstList = newItem;
	else
	{
		last = *firstList;
		while (last->next)
			last = last->next;
		last->next = newItem;
	}
}
