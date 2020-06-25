/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiziva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:33:30 by schiziva          #+#    #+#             */
/*   Updated: 2020/06/25 15:43:12 by schiziva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char *ft_strncpy(char *dest, char *arc, unsigned int n)
{
  int n;
  n = 0;

  while(arc1[n] != '\0')
  {
	  dest1[n] = arch1[n];
	  ft_putchar(dest1[n]);
	  n = n+1;
  }
  return(dest);
}

int main()
{
	char arch1[] = {"let us go"}
	char dest1[sizeof (arch1)];

	ft_strcpy(dest1, arch1);
}
