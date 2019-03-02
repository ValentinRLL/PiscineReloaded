/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Valentin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 14:23:32 by Valentin          #+#    #+#             */
/*   Updated: 2019/03/02 14:36:52 by Valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		ret;

	i = 1;
	ret = nb;
	while (i < nb)
	{
		ret = ret * i;
		i++;
	}
	return (ret);
}
