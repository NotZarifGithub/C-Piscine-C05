/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 02:47:52 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/15 16:19:44 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	ans;	

	ans = 1;
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	if (nb > 0)
	{
		ans = nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (ans);
}

/*
#include <stdio.h>

int main() {
    int nb = 5;
    int factorial = ft_recursive_factorial(nb);

    printf("Factorial of %d is: %d\n", nb, factorial);

    return 0;
}
*/
