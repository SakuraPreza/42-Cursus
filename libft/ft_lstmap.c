/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:53:44 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:34:04 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen listenin bütün elemanlarına ft_f uygulanmış halini
*	yeni başka bir listede tutar. Yeni listeyi döndürür. Allocation hatası
*	durumlarında NULL döndürür.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	first ve last isimli iki değişken oluşturuyoruz, first bizim yeni
*	listemizin ilk elemanın adresi, last ise son elemanının adresi olacak.
*	Parametrelerin varlığını kontrol eder ve değerleri yoksa NULL döndürür.
*	first'e geçici olarak NULL atanır, eğer listede bir eleman varsa, ilk
*	döngüden sonra ft_lstadd_back() ile listenin ilk elemanını gösterir.
*	Döngüde verilen listenin contentine ft_f uygulanmış halini
*	yeni bir listede kopyalayıp last'a atıyoruz.
*	Eğer last oluşmadıysa allocation hatası söz konusudur bu yüzden verilen
*	ft_del() fonksiyonunu ft_lstclear() fonksiyonuna parametre vererek bütün 
*	listeyi temizleyip NULL döndürüyoruz.
*	Hata oluşmazsa ft_lstadd_back() ile first'ün olduğu listede last'ı listenin
*	sonuna ekliyoruz ve verilen listede bir eleman ilerliyoruz.
*	Döngü listenin elemanları bitene kadar devam eder, böylece listenin bütün
*	elemanlarına ft_f() uygulanmış halini yeni bir listede tutabiliyoruz.
*	---------------------------------------------------------------------------
*	Parametreler:
*	list:	(t_list*) Listenin adresi.
*	ft_f	(void*)	Her bir elemana uygulanacak fonksiyon.
*	ft_del	(void) Olabilecek hata durumlarında kullanılacak silme fonksiyonu.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *list, void *(*ft_f)(void *), void (*ft_del)(void *))
{
	t_list	*first;
	t_list	*last;

	if (!list || !ft_f)
		return (NULL);
	first = NULL;
	while (list)
	{
		last = ft_lstnew(ft_f(list->content));
		if (!last)
		{
			ft_lstclear(&first, ft_del);
			return (NULL);
		}
		ft_lstadd_back(&first, last);
		list = list->next;
	}
	return (first);
}
