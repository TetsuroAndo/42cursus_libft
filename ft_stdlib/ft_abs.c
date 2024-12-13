/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teando <teando@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:03:16 by teando            #+#    #+#             */
/*   Updated: 2024/11/04 22:08:40 by teando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_abs(int n)
{
	int	mask;

	mask = n >> 31;
	return ((n ^ mask) - mask);
}
