/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:18:37 by user              #+#    #+#             */
/*   Updated: 2023/01/08 13:19:16 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

size_t	ft_strlen(const char *string_row)
{
	size_t	counter;

	counter = 0;
	while (*string_row != '\0')
	{
		counter = counter + 1;
		string_row = string_row + 1;
	}
	return (counter);
}