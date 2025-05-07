#include "mla.h"

void	mla_set_position_listener(void *engine_ptr, float x, float y, float z)
{
	ma_engine	*engine;

	engine = (ma_engine *)engine_ptr;
	ma_engine_listener_set_position(engine, 0, x, y, z);
}
