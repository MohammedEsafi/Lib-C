/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesafi <mesafi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 15:26:10 by mesafi            #+#    #+#             */
/*   Updated: 2019/10/26 15:27:18 by mesafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_flag(char c)
{
	return (c == '#' || c == ' ' || c == '-' || c == '+' || c == '0' ||
				c == '\'');
}
