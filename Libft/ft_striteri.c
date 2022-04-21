/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btolga <btolga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:53:34 by btolga            #+#    #+#             */
/*   Updated: 2022/03/30 17:36:11 by btolga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Fonksiyon Hakkında:
*	Bu fonksiyon stringin her bir karakterine verilen fonksiyonu uygular.
*	---------------------------------------------------------------------------
*	Kod Hakkında:
*	Verilen string'in son karakterine gelene kadar her bir karakterine
*	ft_func() uygulanır.
*	Her uygulama işleminden sonra index ve str arttırılır.
*	---------------------------------------------------------------------------
*	Parametreler:
*	str:		(char*) Her bir karakterine fonksiyon uygulanacak dizi.
*	ft_func:	(void) Stringin her karakterine uygulancak fonksiyon.
*/

#include "libft.h"

void	ft_striteri(char *str, void (*ft_func)(unsigned int, char*))
{
	unsigned int	index;

	index = 0;
	while (*str)
		ft_func(index++, str++);
}
