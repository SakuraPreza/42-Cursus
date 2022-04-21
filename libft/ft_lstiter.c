/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:40:18 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:34:01 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon parametre olarak verilen ft_nextItemFunc() fonksiyonunu 
*	kullanarak verilen elemanın listesi içerisinde gezinir.
*	---------------------------------------------------------------------------
*	Parametrelerin varlığını kontrol eder ve değerleri yoksa hiçbir şey yapmaz.
*	ft_nextItemFunc() fonksiyonuna listItem'in content'ini gönderir.
*	Sonrasında listItem'i next'ine eşitleyerek sonraki liste elemanına geçer.
*	Bu döngü liste bitene kadar devam eder ve böylece listenin her bir
*	elemanına uygulanmış olur.
*	---------------------------------------------------------------------------
*	Parametreler:
*	listItem:			Listedeki bir elemanın adresi.
*	ft_nextItemFunc:	Listede gezmek için kullanılan fonksiyonun adresi.
*/

#include "libft.h"

void	ft_lstiter(t_list *listItem, void (*ft_nextItemFunc)(void *))
{
	while (listItem && (*ft_nextItemFunc))
	{
		(*ft_nextItemFunc)(listItem->content);
		listItem = listItem->next;
	}
}
