/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdelim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelnych <imelnych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 15:20:32 by imelnych          #+#    #+#             */
/*   Updated: 2017/11/05 16:11:19 by imelnych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdelim(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' ||
		c == '\v' || c == '\r' || c == '\f')
	{
		return (1);
	}
	return (0);
}