#include "mla.h"

void	mla_start_sound(void *sound_ptr)
{
	ma_sound	*sound;

	sound = (ma_sound *)sound_ptr;
	ma_sound_start(sound);
}
