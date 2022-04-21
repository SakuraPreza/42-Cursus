/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:19:46 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:33:53 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen c değişkeninin numerik olup olmadığını kontrol eder.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	c numerikse 1, değilse 0 döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	c:	Kontrol edilmek istenen değer.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
