/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadias-d <gadias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:17:19 by gadias-d          #+#    #+#             */
/*   Updated: 2024/10/01 15:18:49 by gadias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	length;
	int	*arr;
	int	i;

	length = max - min;
	i = 0;
	arr = malloc(length * sizeof(int));
	if (arr == 0)
		return (0);
	while (i < length)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}