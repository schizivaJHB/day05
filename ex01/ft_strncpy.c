/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiziva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:52:46 by schiziva          #+#    #+#             */
/*   Updated: 2020/06/25 15:21:52 by schiziva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)




