/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukim <ukim@42seoul.kr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 00:37:18 by ukim              #+#    #+#             */
/*   Updated: 2020/10/04 01:20:06 by ukim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;

	if (!(new = malloc(size * count)))
		return (NULL);
	ft_memset(new, 0, count * size);
	return (new);
}
/*
** memset을 할떄 바이트 단위로 바꾸기 때문에 자료형의 크기인 size * count (자료 갯수)
**만크의 바이트를 0으로 초기화 하는게 맞는 것 같은데 다른 코드들은 왜 다르게 했을까?
*/
