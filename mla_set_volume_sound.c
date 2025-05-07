#include "mla.h"

void	mla_set_volume_sound(void *sound_ptr, float volume)
{
	ma_sound	*sound;

	sound = (ma_sound *)sound_ptr;
	ma_sound_set_volume(sound, volume);
}
