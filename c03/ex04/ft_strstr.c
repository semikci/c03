/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 08:39:58 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/12 11:13:03 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if(to_find[i] == 0)
		return (str);
	while (str[i] != 0)
	{
		while (str[i + j] == to_find[j] && to_find[j] !=0)
		{
			j++;
		}
		if(to_find[j] == 0)
			return (str + i);
		j = 0;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "semih vurdu gol oldu";
	char	to_find[] = "vurdu";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%p\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	printf("%p\n", strstr(str, to_find));
	
}
