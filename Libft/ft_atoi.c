/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:11:57 by btolga            #+#    #+#             */
/*   Updated: 2022/03/31 01:12:48 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen dizinin sayısal karşılığını döndürür.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	Gelen dizinin başında boşluk karakterleri varsa o karakterler atlanır.
*	Gelen dizide işaret bildiren karakterler varsa bu karakterlerin
*	matematiksel hesaplaması yapılır ve sign değişkeninde tutulur.
*	Birden fazla işaretçi karakter varsa 0 döndürür.
*	Gelen dizinin char tipindeki sayısal karakterlerini int'e çevrilir ve
*	result'un içerisinde tutulur.
*	result ile sign'ın çarpımını döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	str:	(const char*) Sayısal karşılığı istenen dizi.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				sign;
	unsigned long	result;

	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || (*str == ' '))
		str++;
	if ((*str == '-') || (*str == '+'))
		if (*str++ == '-')
			sign *= -1;
	while (*str >= '0' && *str <= '9')
		result = (*str++ + (result * 10) - 0x30);
	if (result > LONG_MAX && sign == -1)
		return (0);
	if (result > LONG_MAX && sign == 1)
		return (-1);
	return (sign * result);
}
