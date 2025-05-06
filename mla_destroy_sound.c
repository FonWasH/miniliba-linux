/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mla_destroy_sound.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <juperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 02:24:27 by juperez           #+#    #+#             */
/*   Updated: 2025/04/04 04:54:50 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mla.h"

void	mla_destroy_sound(void *sound_ptr)
{
	ma_sound	*sound;

	sound = (ma_sound *)sound_ptr;
	ma_sound_uninit(sound);
	free(sound_ptr);
}
