/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:05:56 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/12 15:23:50 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	unsigned int y;
	while (str[y] != 0)
		y++;
	return (y);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int dlen;
	unsigned int slen;
	
	i = 0;
	j = 0;
	while (dest[i] != 0)
		j++;
	dlen = j;
	slen = ft_strlen(src);
	if(size == 0 && size <= dlen)
		return (slen + size);
	while (src[i] != 0  && i < size - dlen -1)
	{
		dest[j] = src[i];
		i++;
		j++; 
	}
	dest[j] = 0;
	return (dlen + slen);
}

int main()
{
	
}

