#include "mla.h"

void	mla_set_time_sound(void *sound_ptr, float seconds)
{
	ma_sound	*sound;

	sound = (ma_sound *)sound_ptr;
	ma_sound_seek_to_second(sound, seconds);
}
