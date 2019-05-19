/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:46:55 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/18 08:48:32 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *restrict str, int c)
{
	int loop;

	loop = 0;
	while (str[loop] != '\0')
		loop++;
	while (loop >= 0)
	{
		if (str[loop] == (char)c)
			return ((char*)&str[loop]);
		loop--;
	}
	return (NULL);
}