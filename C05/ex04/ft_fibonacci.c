/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:31:11 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/14 12:31:17 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	result = (ft_fibonacci(index - 2)) + (ft_fibonacci(index - 1));
	return (result);
}
