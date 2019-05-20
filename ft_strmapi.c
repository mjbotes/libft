/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 07:30:23 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/19 10:00:50 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			size;
	unsigned int	loop;
	char			*str;

	size = 0;
	loop = 0;
	size = ft_strlen(s);
	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (s[loop] != '\0')
	{
		str[loop]=f(loop, (char)s[loop]);
		++loop;
	}
	str[loop] = '\0';
	return (str);
}