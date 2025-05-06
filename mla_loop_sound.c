/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mla_loop_sound.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <juperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 02:56:56 by juperez           #+#    #+#             */
/*   Updated: 2025/04/04 04:42:52 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mla.h"

void	mla_loop_sound(void *sound_ptr, int loop)
{
	ma_sound	*sound;

	sound = (ma_sound *)sound_ptr;
	if (loop && ma_sound_is_looping(sound) == MA_FALSE)
		ma_sound_set_looping(sound, MA_TRUE);
	if (!loop && ma_sound_is_looping(sound) == MA_TRUE)
		ma_sound_set_looping(sound, MA_FALSE);
}
