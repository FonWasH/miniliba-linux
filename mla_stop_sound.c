#include "mla.h"

void	mla_stop_sound(void *sound_ptr)
{
	ma_sound	*sound;

	sound = (ma_sound *)sound_ptr;
	ma_sound_stop(sound);
}
