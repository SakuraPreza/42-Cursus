/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:15:11 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:33:48 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen c değişkeninin alfabetik veya numerik olup olmadığını
*	kontrol eder.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	c alfabetikse veya numerikse 1, ikisi de değilse 0 döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	c:	Kontrol edilmek istenen değer.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
