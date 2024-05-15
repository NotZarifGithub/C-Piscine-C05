/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 02:11:24 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/15 16:51:43 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (i <= 1)
		return (2);
	while (!ft_is_prime(i))
		i++;
	return (i);
}

/*
#include <stdio.h>

int main() {

    int number = 10;
    int prime_nb = ft_find_next_prime(number);
    
    printf("The next prime number of number %d is %d.\n", number, prime_nb);

    return 0;
}
*/
