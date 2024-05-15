/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:08:42 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/15 16:19:35 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	ans;

	i = 0;
	ans = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (power > i)
	{
		ans = ans * nb;
		i++;
	}
	return (ans);
}

/*
#include <stdio.h>

int main() {
    int nb = 2;
    int power = 5;
    int answer = ft_iterative_power(nb, power);

    printf("%d power %d is: %d\n", nb, power, answer);

    return 0;
}
*/
