/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 13:53:54 by mtournay          #+#    #+#             */
/*   Updated: 2022/03/29 13:54:14 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static size_t	custom_len(char const *s, size_t start, size_t len)
{
	while (s[start] && start < len)
		start++;
	return (start + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str = malloc(sizeof(char));
		if (!str)
			return (NULL);
		*str = '\0';
		return (str);
	}
	i = 0;
	str = malloc(sizeof(char) * custom_len(s, (size_t)start, len));
	if (!str)
		return (NULL);
	while (i < len && s[start])
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	cpy = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!cpy)
		return (NULL);
	while (i < len && &s[start + i])
	{
		cpy[i] = (char)s[start + i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}
