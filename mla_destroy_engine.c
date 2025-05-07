#include "mla.h"

void	mla_destroy_engine(void *engine_ptr)
{
	ma_engine	*engine;

	engine = (ma_engine *)engine_ptr;
	ma_engine_uninit(engine);
	free(engine_ptr);
}
