/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:06:19 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:35:17 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon str'nin n kadar karakterine, verilen character'i kopyalar.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	str'nin n'inci indisine verilen character'i kopyalar.
*	Her döngüde n azalır, bu şekilde birnevi diziye tersten atama yapmış olur.
*	Atama işlemini n kadar döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	str:		(void*) Atama yapılacak dizi.
*	character:	(const void*) Atanacak karakter.
*	n:			(size_t) Atama işleminin ilk kaç karakterde yapılacağı.
*/

#include "libft.h"

void	*ft_memset(void *str, int character, size_t n)
{
	while (n--)
		*((char *)(str + n)) = (char)character;
	return (str);
}
