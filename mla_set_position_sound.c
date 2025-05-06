/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mla_set_position_sound.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <juperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 02:24:22 by juperez           #+#    #+#             */
/*   Updated: 2025/04/04 04:43:05 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mla.h"

void	mla_set_position_sound(void *sound_ptr, float x, float y, float z)
{
	ma_sound	*sound;

	sound = (ma_sound *)sound_ptr;
	ma_sound_set_position(sound, x, y, z);
}
