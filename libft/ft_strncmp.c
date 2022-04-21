/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:36:26 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:36:26 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen stringlerin indislerini ilk n karakter kadar unsigned
*	char cinsinden karşılaştırır, eğer farklı bir karakter bulursa ascii
*	farkını döndürür.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	s1 ile s2 nin indislerini n kadar kıyaslar.
*	s1 ve s2'nin indislerini düzenli olarak arttırır.
*	s1 ve s2'nin eşit olmadığı durumda ascii farkını return eder.
*	Eğer eşitsizlik bulamadıysa ve n kadar karakterine bakıldıysa 0 döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	s1:	(const char*) Karşılaştırma yapılacak 1. dizi.
*	s2:	(const char*) Karşılaştırma yapılacak 2. dizi.
*	n:	(size_t) Dizinin ilk kaç karakterinde kıyaslama yapılacağı.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
		if (*((unsigned char *)(s1++)) != *((unsigned char *)(s2++)))
			return (*((unsigned char *)(--s1)) - *((unsigned char *)(--s2)));
	return (0);
}
