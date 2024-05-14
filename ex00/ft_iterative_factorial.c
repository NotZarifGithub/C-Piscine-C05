/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 00:11:44 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/14 02:47:01 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ans;

	i = 0;
	ans = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1); 
	while (nb > 0)
	{
		ans = ans * nb;
		nb--;
	}
	return (ans);
}
