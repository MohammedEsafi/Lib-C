/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesafi <mesafi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 22:27:41 by mesafi            #+#    #+#             */
/*   Updated: 2019/10/26 15:30:09 by mesafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_parse_flags(const char *format, t_printf_arg *arg)
{
	int		count;

	count = 0;
	while (is_flag(*format) || *format == '\'')
	{
		if (*format == '#' && ++count)
			arg->flags |= HASH;
		else if (*format == '\'' && ++count)
			arg->flags |= APOSTROPHE;
		else if (*format == '0' && ++count)
			(!arg->precision_set) && (arg->flags |= ZERO);
		else if (*format == ' ' && ++count)
			arg->flags |= SPACE;
		else if (*format == '+' && ++count)
			arg->flags |= PLUS;
		else if (*format == '-' && ++count)
		{
			arg->precision_set = 0;
			arg->flags |= MINUS;
		}
		format++;
	}
	return (count);
}
