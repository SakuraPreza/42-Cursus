/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:16:55 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:33:50 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen c değişkeninin alfabetik olup olmadığını kontrol eder.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	c alfabetikse 1, değilse 0 döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	c:	Kontrol edilmek istenen değer.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
