/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:35:53 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:35:53 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen stringi, verilen fd'ye yazar.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	str'nin bütün karakterlerini ft_putchar_fd() kullanarak yazdırır.
*	---------------------------------------------------------------------------
*	Parametreler:
*	str:	(char) yazdırılacak string.
*	fd:		(int) yazdırılacak dosyanın fd numarası.
*/

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	while (*str)
		ft_putchar_fd(*str++, fd);
}
