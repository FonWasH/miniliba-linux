# MLA (MiniLibAudio)

**MLA** is a lightweight high-level wrapper around [miniaudio](https://miniaud.io), inspired by the simplicity of the [MiniLibX](https://harm-smits.github.io/42docs/libs/minilibx) API. It provides an easy-to-use interface for initializing audio, playing sounds, and using basic 3D audio features like positioning and direction.

This library is ideal for small games, demos, or audio-visual experiments where you want minimal overhead and fast integration.

---

## Features

- Easy audio engine initialization
- Load and play audio files (streamed or fully loaded)
- Looping and volume control
- 3D spatial sound positioning
- Listener direction and position control
- Seek in sound playback

---

## Function Reference

| Function | Description |
| -------- | ----------- |
| `mla_init(sample_rate, buffer_size)` | Initializes the audio engine. |
| `mla_destroy_engine(engine)` | Shuts down the engine and releases resources. |
| `mla_new_sound(engine, path, stream)` | Loads an audio file as a sound object (can stream or load in memory). |
| `mla_destroy_sound(sound)` | Frees the memory used by a sound. |
| `mla_start_sound(sound)` | Starts playback. |
| `mla_stop_sound(sound)` | Stops playback. |
| `mla_loop_sound(sound, loop)` | Enables/disables looping. |
| `mla_set_volume_sound(sound, volume)` | Sets sound volume (0.0 to 1.0). |
| `mla_set_time_sound(sound, seconds)` | Seeks to a position in the sound. |
| `mla_set_position_sound(sound, x, y, z)` | Sets the 3D position of the sound. |
| `mla_set_position_listener(engine, x, y, z)` | Sets the 3D position of the listener. |
| `mla_set_direction_listener(engine, x, y, z)` | Sets the facing direction of the listener. |

---

## Example Usage

```c
#include "mla.h"

int main(void)
{
    void *engine = mla_init(44100, 512);
    if (!engine)
        return (1);

    void *sound = mla_new_sound(engine, "audio/music.wav", 0);
    if (!sound)
        return (1);

    mla_loop_sound(sound, 1);
    mla_set_volume_sound(sound, 0.8f);
    mla_start_sound(sound);

    // Simple wait loop (replace with proper app/game loop)
    for (int i = 0; i < 100000000; i++);

    mla_destroy_sound(sound);
    mla_destroy_engine(engine);
    return (0);
}
```

## Build

1. **Compile `libmla.a`**
	```sh
	make
	```
2. **Include the header** in your source files:

   ```c
   #include "mla.h"
   ```

3. **Link the library** during compilation (replace /path/to/miniliba with the actual path to where libmla.a is located):

   ```sh
   gcc main.c -L/path/to/miniliba -lmla -o my_program
   ```

4. **Run your program** as usual:

   ```sh
   ./my_program
   ```

## License
MIT License — free to use, modify, and distribute.

## Credits
- miniaudio — ultra-portable audio playback library by David Reid.
- Design inspired by the simplicity of MiniLibX from the 42 school.