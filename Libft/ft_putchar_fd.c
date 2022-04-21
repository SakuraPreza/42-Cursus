/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:35:21 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:35:21 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon c karakterini, verilen fd'ye yazar.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	write() fonksiyonuna parametre olarak, bize verilen fd'yi ve yazdırmak
*	istenilen karakterin adresini yollar.
*	---------------------------------------------------------------------------
*	Parametreler:
*	c:		(char) yazdırılacak karakter.
*	fd:		(int) yazdırılacak dosyanın fd numarası.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
