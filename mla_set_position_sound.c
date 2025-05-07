#include "mla.h"

void	mla_set_position_sound(void *sound_ptr, float x, float y, float z)
{
	ma_sound	*sound;

	sound = (ma_sound *)sound_ptr;
	ma_sound_set_position(sound, x, y, z);
}
