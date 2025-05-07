#ifndef MLA_H
# define MLA_H

# include "include/miniaudio.h"
# include <stdlib.h>

/**
 * @brief Initializes the audio engine.
 * 
 * @param sample_rate The sample rate in Hz (e.g. 44100).
 * @param buffer_size The audio buffer size in frames.
 * @return void* Pointer to the initialized engine, or NULL on failure.
 */
void	*mla_init(int sample_rate, int buffer_size);

/**
 * @brief Destroys the audio engine and frees its resources.
 * 
 * @param engine_ptr Pointer to the engine returned by mla_init.
 */
void	mla_destroy_engine(void *engine_ptr);

/**
 * @brief Loads a sound file.
 * 
 * @param engine_ptr Pointer to the audio engine.
 * @param path Path to the audio file (e.g. .wav, .mp3).
 * @param stream Set to 1 to stream from disk, 0 to load entirely in memory.
 * @return void* Pointer to the loaded sound, or NULL on error.
 */
void	*mla_new_sound(void *engine_ptr, char *path, int stream);

/**
 * @brief Frees a sound resource.
 * 
 * @param sound_ptr Pointer to the sound returned by mla_new_sound.
 */
void	mla_destroy_sound(void *sound_ptr);

/**
 * @brief Starts playback of a sound.
 * 
 * @param sound_ptr Pointer to the sound.
 */
void	mla_start_sound(void *sound_ptr);

/**
 * @brief Stops playback of a sound.
 * 
 * @param sound_ptr Pointer to the sound.
 */
void	mla_stop_sound(void *sound_ptr);

/**
 * @brief Sets looping behavior for a sound.
 * 
 * @param sound_ptr Pointer to the sound.
 * @param loop 1 to enable looping, 0 to disable.
 */
void	mla_loop_sound(void *sound_ptr, int loop);

/**
 * @brief Sets the direction vector of the listener.
 * 
 * @param engine_ptr Pointer to the audio engine.
 * @param x X component of the direction vector.
 * @param y Y component of the direction vector.
 * @param z Z component of the direction vector.
 */
void	mla_set_direction_listener(void *engine_ptr, float x, float y, float z);

/**
 * @brief Sets the position of the listener in 3D space.
 * 
 * @param engine_ptr Pointer to the audio engine.
 * @param x X position.
 * @param y Y position.
 * @param z Z position.
 */
void	mla_set_position_listener(void *engine_ptr, float x, float y, float z);

/**
 * @brief Sets the position of a sound in 3D space.
 * 
 * @param sound_ptr Pointer to the sound.
 * @param x X position.
 * @param y Y position.
 * @param z Z position.
 */
void	mla_set_position_sound(void *sound_ptr, float x, float y, float z);

/**
 * @brief Seeks to a specific time in the sound.
 * 
 * @param sound_ptr Pointer to the sound.
 * @param seconds Time position in seconds.
 */
void	mla_set_time_sound(void *sound_ptr, float seconds);

/**
 * @brief Sets the volume of a sound.
 * 
 * @param sound_ptr Pointer to the sound.
 * @param volume Volume level from 0.0 (mute) to 1.0 (max).
 */
void	mla_set_volume_sound(void *sound_ptr, float volume);

#endif
