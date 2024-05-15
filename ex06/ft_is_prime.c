/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:09:22 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/15 16:45:17 by mabd-ram         ###   ########.fr       */
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

/*
#include <stdio.h>

int main() {

    int number = 7;
    int is_prime = ft_is_prime(number);
    
    if (is_prime == 1)
        printf("%d is a prime number.\n", number);
    else 
        printf("%d is not a prime number.\n", number);

    return 0;
}
*/
