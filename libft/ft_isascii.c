/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:17:29 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:33:51 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen c değişkeninin ascii olup olmadığını kontrol eder.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	c'nin ascii'de bir karşılığı varsa 1, yoksa 0 döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	c:	Kontrol edilmek istenen değer.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
