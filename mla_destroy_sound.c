#include "mla.h"

void	mla_destroy_sound(void *sound_ptr)
{
	ma_sound	*sound;

	sound = (ma_sound *)sound_ptr;
	ma_sound_uninit(sound);
	free(sound_ptr);
}
