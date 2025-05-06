/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mla_set_volume_sound.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <juperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 02:24:56 by juperez           #+#    #+#             */
/*   Updated: 2025/04/04 04:43:13 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mla.h"

void	mla_set_volume_sound(void *sound_ptr, float volume)
{
	ma_sound	*sound;

	sound = (ma_sound *)sound_ptr;
	ma_sound_set_volume(sound, volume);
}
