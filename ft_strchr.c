/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 15:31:03 by drecours          #+#    #+#             */
/*   Updated: 2017/05/22 11:55:14 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (c != s[i] && s[i] != '\0')
		i++;
	if (c == '\0' || c == s[i])
		return ((char *)(s + i));
	else
		return (NULL);
}
