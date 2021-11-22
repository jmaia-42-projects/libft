/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:54:43 by jmaia             #+#    #+#             */
/*   Updated: 2021/11/22 18:02:05 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*cur;

	cur = (char *)s - 1;
	while (*++cur)
	{
		if ((int) *cur == c)
			return (cur);
	}
	if (c == 0)
		return (cur);
	return (0);
}
