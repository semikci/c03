/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 03:21:22 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/12 08:36:16 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	return_size(char *str)
{
	int	a;

	a = 0;
	while (str[a] != 0)
		a++;
	return (a);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (dest[i] != 0)
		i++;
	while (src[k] != 0 && k < nb)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = 0;
	return (dest);
}

int	main(void)
{
	char dest[] = "semih";
	char src[] = "";

	printf("%s", ft_strncat(dest, src, 3));
}
