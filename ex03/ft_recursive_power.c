/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:43:07 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/15 16:21:03 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, (power - 1)));
}

/*
#include <stdio.h>

int main() {
    int nb = 2;
    int power = 5;
    int answer = ft_recursive_power(nb, power);

    printf("%d power %d is: %d\n", nb, power, answer);

    return 0;
}
*/
