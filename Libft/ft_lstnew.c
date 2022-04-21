/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 01:24:24 by btolga            #+#    #+#             */
/*   Updated: 2022/03/22 01:24:24 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon yeni bir liste oluşturur ve bu listenin content'i parametre
*	olarak verilir.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	newList isminde yeni bir liste oluşturur.
*	malloc() kullanarak t_list kadar alan tahsil eder.
*	Alan tahsil edilmemişse NULL döndürür.
*	newList'in content'i parametre olarak verilen content'e eşitlenir.
*	newList'in next'i NULL'a eşitlenir.
*	newList'i döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	listItem:			Listedeki bir elemanın adresi.
*	ft_nextItemFunc:	Listede gezmek için kullanılan fonksiyonun adresi.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}
