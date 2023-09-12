/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:15:02 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/11 22:45:43 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_size(char *s)
{
	int	k;

	k = 0;
	while (s[k] != 0)
	{
		k++;
	}
	return (k);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	count;
	int	size;
	int	a;

	count = 0;
	i = 0;
	if (ft_size(s1) > ft_size(s2))
		size = ft_size(s1);
	else
		size = ft_size(s2);
	while (i < size)
	{
		if (s1[i] == s2[i])
			count++;
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else 
			return (s1[i] - s2[i]);
		i++;
	}
	if (count == size)
		a = 0;
	return (a);
}

int	main(void)
{
	char	s1[] = "abcde";
	char	s2[] = "abcdf";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
}
