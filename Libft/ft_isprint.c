/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:21:38 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:33:54 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen c değişkeninin yazdırılabilen bir karakter olup
*	olmadığını kontrol eder.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	c yazdırılabilen bir karakterse 1, değilse 0 döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	c:	Kontrol edilmek istenen değer.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}
