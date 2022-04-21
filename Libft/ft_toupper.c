/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:22:55 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:37:09 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen c değişkeni eğer küçük harfse büyütür.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	c küçük harf mi diye kontrol edilir.
*	Eğer küçük harfse, büyük harfe çevrilir.
*	---------------------------------------------------------------------------
*	Parametreler:
*	c:	Büyütülmek istenen karakter.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 0x20;
	return (c);
}
