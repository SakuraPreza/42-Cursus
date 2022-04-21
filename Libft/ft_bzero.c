/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:12:04 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:33:43 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen dizinin ilk n kadar karakterine NULL ataması yapar.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	str'nin n'inci indisinin (char*) tipindeki değerine NULL ataması yapar.
*	Her döngüde n azalır, bu şekilde birnevi diziye tersten atama yapmış olur.
*	Atama işlemini n kadar döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	str:	(void *) NULL ataması yapılacak dizi.
*	n:		(size_t) NULL doldurulacak karakter sayısı.
*/

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	while (n--)
		(*((char *)(str + n))) = '\0';
}
