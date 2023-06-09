/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kooyama <kooyama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 09:30:35 by jo._jj            #+#    #+#             */
/*   Updated: 2023/05/29 19:15:19 by kooyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 0 || c > 255)
		return (0);
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
