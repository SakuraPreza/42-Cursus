/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:35:44 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:35:44 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen sayıyı, verilen fd'ye yazdırır.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	INT_MAX ve INT_MIN gibi durumlarda problem çıkarmaması için bize verilen
*	sayının long casted halini number isimli değişkende tutar.
*	Sayı negatif bir sayıysa ekrana '-' yazdırıp kendi mutlak değerini alır.
*	Sayı 10'dan küçük olana dek sayının 10'a bölünmüş halini recursive olarak
*	çağırır ve her bir basamağının mod 10'u alarak her sayının her bir
*	basamağını yazdırmış olur.
*	---------------------------------------------------------------------------
*	Parametreler:
*	n:	(int) yazdırılacak sayı.
*	fd:	(int) yazdırılacak dosyanın fd numarası.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = (long)n;
	if (number < 0)
	{
		write(fd, "-", 1);
		number *= -1;
	}
	if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putnbr_fd(number % 10, fd);
	}
	else
		ft_putchar_fd(number + '0', fd);
}
