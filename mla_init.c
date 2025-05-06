/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mla_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <juperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 02:24:18 by juperez           #+#    #+#             */
/*   Updated: 2025/04/09 08:45:08 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MINIAUDIO_IMPLEMENTATION
#include "mla.h"

void	*mla_init(int sample_rate, int buffer_size)
{
	ma_engine			*engine;
	ma_engine_config	config;

	config = ma_engine_config_init();
	config.sampleRate = sample_rate;
	config.periodSizeInFrames = buffer_size;
	engine = (ma_engine *)malloc(sizeof(ma_engine));
	if (!engine)
		return (NULL);
	if (ma_engine_init(&config, engine) != MA_SUCCESS)
		return (free(engine), NULL);
	return ((void *)engine);
}
