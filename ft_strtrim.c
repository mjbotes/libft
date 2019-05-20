/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 09:18:38 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/20 07:33:58 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t			len;
	unsigned int	start;
	unsigned int	end;
	unsigned int	loop;
	char			*new;

	len = ft_strlen(s);
	start = 0;
	loop = 0;

	if (ft_strlen(s) == 0)
	{
		if(!(new = malloc(sizeof(char))))
			return (NULL);
		new[0] = '\0';
		return (new);
	}
	while (ft_iswhitespace(s[start]) == 1 && s[start] != '\0')
		start++;
	end = len - 1;
	while (ft_iswhitespace(s[end]) == 1 && end >= start)
		end--;
	len = end - start + 1;
	if (!(new = malloc(len * sizeof(char))))
		return (NULL);
	while (loop < len)
	{
		new[loop] = s[start + loop];
		loop++;
	}
	new[loop] = '\0';
	return (new);
}