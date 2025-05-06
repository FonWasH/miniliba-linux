/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mla_destroy_engine.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <juperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 02:24:50 by juperez           #+#    #+#             */
/*   Updated: 2025/04/04 04:54:41 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mla.h"

void	mla_destroy_engine(void *engine_ptr)
{
	ma_engine	*engine;

	engine = (ma_engine *)engine_ptr;
	ma_engine_uninit(engine);
	free(engine_ptr);
}
