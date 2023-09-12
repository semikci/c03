/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:46:54 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/11 22:23:37 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	return_size(char *a)
{
	int	i;

	i = 0;
	while (a[i] != 0)
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				count;
	int				a;

	count = 0;
	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
			count++;
		else if (s1[i] > s2[i])
			a = (s1[i] - s2[i]);
		else
			a = (s1[i] - s2[i]);
		i++;
	}
	if (count == i && count != 0)
		a = 0;
	return (a);
}

int	main(void)
{
	char	s1[] = "abcdfk";
	char	s2[] = "abcdfaa";
	unsigned int a = 6;
	printf("%d", ft_strncmp(s1, s2, a));
}
