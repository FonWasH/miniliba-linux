#include "mla.h"

void	*mla_new_sound(void *engine_ptr, char *path, int stream)
{
	ma_sound		*sound;
	ma_engine		*engine;
	int				flag;

	flag = MA_SOUND_FLAG_DECODE;
	if (stream)
		flag = MA_SOUND_FLAG_STREAM;
	engine = (ma_engine *)engine_ptr;
	sound = (ma_sound *)malloc(sizeof(ma_sound));
	if (!sound)
		return (NULL);
	if (ma_sound_init_from_file(engine, path, flag,
			NULL, NULL, sound) != MA_SUCCESS)
		return (free(sound), NULL);
	return ((void *)sound);
}
