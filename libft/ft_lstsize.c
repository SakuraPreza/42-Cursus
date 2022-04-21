/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 06:42:22 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:34:10 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon parametre olarak verilen listenin eleman sayısını geri döndürür.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	list yoksa elemanı da yok demektir o yüzden 0 döndürür.
*	list varsa elemanı var demektir bu yüzden saymaya 1'den başlanır.
*	listin'nexti olduğu sürece list next'ine eşitlenir ve index artırılır.
*	---------------------------------------------------------------------------
*	Parametreler:
*	list:	Listedeki bir elemanın adresi.
*/

#include "libft.h"

int	ft_lstsize(t_list *list)
{
	int	lenght;

	lenght = 1;
	if (!list)
		return (0);
	while (list->next)
	{
		list = list->next;
		lenght++;
	}
	return (lenght);
}
