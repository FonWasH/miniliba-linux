#include "mla.h"

void	mla_loop_sound(void *sound_ptr, int loop)
{
	ma_sound	*sound;

	sound = (ma_sound *)sound_ptr;
	if (loop && ma_sound_is_looping(sound) == MA_FALSE)
		ma_sound_set_looping(sound, MA_TRUE);
	if (!loop && ma_sound_is_looping(sound) == MA_TRUE)
		ma_sound_set_looping(sound, MA_FALSE);
}
