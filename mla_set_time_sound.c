/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mla_set_time_sound.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <juperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 03:10:43 by juperez           #+#    #+#             */
/*   Updated: 2025/04/04 04:43:09 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mla.h"

void	mla_set_time_sound(void *sound_ptr, float seconds)
{
	ma_sound	*sound;

	sound = (ma_sound *)sound_ptr;
	ma_sound_seek_to_second(sound, seconds);
}
