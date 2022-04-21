/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:20:27 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:37:07 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen c değişkeni eğer büyük harfse küçültür.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	c büyük harf mi diye kontrol edilir.
*	Eğer büyük harfse, küçük harfe çevrilir. 
*	---------------------------------------------------------------------------
*	Parametreler:
*	c:	Küçültülmek istenen karakter.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 0x20;
	return (c);
}
