/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 07:51:42 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:33:58 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon parametre olarak verilen ft_deleteFunc() fonksiyonunu
*	kullanarak verilen liste içeriğini siler.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	Listenin bir sonraki elemanını hafızada tutmak için bir eleman oluşturur.
*	Bu elemana bir başlangıç değeri olarak listItem'ın gösterdiği değeri atar.
*	Listenin elemanları arasında gezinirken next_item'i hep next'ine eşitler.
*	Böylece orjinal listenin elemanlarını silerken next'lerini korumuş olur.
*	listItem'ın o anki işaretlediği elemanı ft_lstdelone() kullanarak siler.
*	Listede gezebilmek için listItem'ı hafızada tuttuğumuz next'ine eşitler.
*	Listenin sonuna gelince free() kullanarak listItem için ayrılan hafızayı 
*	serbest bırakır.
*	---------------------------------------------------------------------------
*	Parametreler:
*	listItem:		Listenin adresi.
*	ft_deleteFunc:	İçerik silmek için kullanılacak fonksiyonun adresi.
*/

#include "libft.h"

void	ft_lstclear(t_list **listItem, void (*ft_deleteFunc)(void *))
{
	t_list	*next_item;

	next_item = (*listItem);
	while (*listItem)
	{
		next_item = (*listItem)->next;
		ft_lstdelone(*listItem, ft_deleteFunc);
		*listItem = next_item;
	}
	free(*listItem);
}
