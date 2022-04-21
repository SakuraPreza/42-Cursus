/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 06:08:51 by btolga            #+#    #+#             */
/*   Updated: 2022/03/31 00:50:42 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen sayısal değerin char dizisi karşılığını döndürür.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	Verilen n sayısı INT_MIN ve INT_MAX durumlarında da sorunsuz çalışması
*	için n'in long casted halini number adında bir değişkende tutulur.
*	Verilen sayısının basamak sayısı ft_digit() fonksiyonu ile hesaplanır.
*	Eğer verilen sayı negatifse başına '-' koyacağı için basamak sayısını
*	1 fazla olarak hesaplar.
*	ft_calloc() ile basamak sayısından 1 fazla uzunlukta yer tahsil eder.
*	Sayıyı tersten başlayıp char'a çevirerek yazmaya başlar.
*	Yazma işlemi bittikten sonra eğer baştaki sayı negatif bir sayıysa
*	oluşturulan dizinin ilk indisine '-' atar.
*	Sonucu döndürür.
*	---------------------------------------------------------------------------
*	Parametreler:
*	n:	(int) char dizisi haline getirilecek sayı.
*/

#include "libft.h"

static long	ft_absolute(int n)
{
	long	number;

	number = (long)n;
	if (number < 0)
		return (-number);
	return (number);
}

static int	ft_digit(int n)
{
	int		digit;
	long	number;

	digit = 1;
	if (n < 0)
		digit++;
	number = ft_absolute(n);
	while (number >= 10 && digit++)
		number /= 10;
	return (digit);
}

char	*ft_itoa(int n)
{
	long	number;
	int		digit;
	char	*result;

	number = ft_absolute((long)(n));
	digit = ft_digit((long)(n));
	result = ft_calloc((digit + 1), sizeof(char));
	if (!result)
		return (NULL);
	while (--digit >= 0)
	{
		*(result + digit) = (number % 10) + 48;
		number /= 10;
	}
	if (n < 0)
		*result = '-';
	return (result);
}
