/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teando <teando@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:21:57 by teando            #+#    #+#             */
/*   Updated: 2024/11/08 21:14:52 by teando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_putchar(int c)
{
	if (write(STDOUT_FILENO, &c, 1) == -1)
		return (EOF);
	return ((unsigned char)c);
}
