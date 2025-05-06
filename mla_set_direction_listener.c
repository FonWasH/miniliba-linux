/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mla_set_direction_listener.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <juperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:43:21 by juperez           #+#    #+#             */
/*   Updated: 2025/05/06 17:44:17 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mla.h"

void	mla_set_direction_listener(void *engine_ptr, float x, float y, float z)
{
	ma_engine	*engine;

	engine = (ma_engine *)engine_ptr;
	ma_engine_listener_set_direction(engine, 0, x, y, z);
}
