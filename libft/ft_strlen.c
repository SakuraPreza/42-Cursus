/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:10:23 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:36:20 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen stringin uzunluğunu hesaplar.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	Verilen string son karaktere gelene kadar index arttırılır.
*	index return edilir.
*	---------------------------------------------------------------------------
*	Parametreler:
*	str:	(const char*) Uzunluğu bulunmak istenen dizi.
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	while (*(str + index))
		index++;
	return (index);
}
