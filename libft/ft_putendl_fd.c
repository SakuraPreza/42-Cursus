/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:35:31 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:35:31 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon verilen stringi, verilen fd'ye yazıp alt satıra geçer.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	ft_putstr_fd() fonksiyonunu kullanarak verilen fd'ye, gönderilen stringi
*	yazdırır.
*	write() ile aynı fd'ye "\n" atıp alt satıra geçer.
*	---------------------------------------------------------------------------
*	Parametreler:
*	str:	(char*) yazdırılacak string.
*	fd:		(int) yazdırılacak dosyanın fd numarası.
*/

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	ft_putstr_fd(str, fd);
	write(fd, "\n", 1);
}
