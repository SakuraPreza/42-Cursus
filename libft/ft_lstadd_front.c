/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 03:29:38 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:33:57 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon parametre olarak verilen listenin başına verilen elemanı
*	ekler.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	Parametrelerin varlığını kontrol eder ve değerleri yoksa hiçbir şey yapmaz.
*	Parametre olarak verilen elemanın next'ine listenin ilk elemanını atar.
*	Böylece listenin ilk elemanı yeni eklediği eleman olur.
*	---------------------------------------------------------------------------
*	Parametreler:
*	firstList:	Listenin adresi.
*	newItem:	Listeye eklenecek olan elemanın adresi.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **firstList, t_list *newItem)
{
	if (firstList && newItem)
	{
		newItem->next = *firstList;
		*firstList = newItem;
	}
}
