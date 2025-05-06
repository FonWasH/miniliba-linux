/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mla_stop_sound.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <juperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 02:50:02 by juperez           #+#    #+#             */
/*   Updated: 2025/04/04 04:43:42 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mla.h"

void	mla_stop_sound(void *sound_ptr)
{
	ma_sound	*sound;

	sound = (ma_sound *)sound_ptr;
	ma_sound_stop(sound);
}
