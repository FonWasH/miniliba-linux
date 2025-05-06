/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mla_start_sound.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <juperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 02:24:25 by juperez           #+#    #+#             */
/*   Updated: 2025/04/04 04:43:17 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mla.h"

void	mla_start_sound(void *sound_ptr)
{
	ma_sound	*sound;

	sound = (ma_sound *)sound_ptr;
	ma_sound_start(sound);
}
