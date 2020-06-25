/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiziva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:48:54 by schiziva          #+#    #+#             */
/*   Updated: 2020/06/25 13:21:56 by schiziva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char *ft_strcpy(char *dest, char *src)
{
	int n;
	n=0;
	
	while(src[n] != '\0')
	{
		dest[n] = src [n];
		ft_putchar(dest[n]);
		n = n+1;
	}
	return(dest);
}

 int main()
{
	char src1[] = {"I love coding"};
	char dest1[sizeof(src1)];

	ft_strcpy(dest1, src1);
}
