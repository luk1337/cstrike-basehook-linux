#pragma once

#define LIFE_ALIVE 0
#define LIFE_DYING 1
#define LIFE_DEAD 2
#define LIFE_RESPAWNABLE 3
#define LIFE_DISCARDBODY 4

#define MAX_EDICT_BITS 11
#define NUM_ENT_ENTRY_BITS (MAX_EDICT_BITS + 1)
#define NUM_ENT_ENTRIES (1 << NUM_ENT_ENTRY_BITS)
#define ENT_ENTRY_MASK (NUM_ENT_ENTRIES - 1)
#define INVALID_EHANDLE_INDEX 0xFFFFFFFF

#define NUM_SERIAL_NUM_BITS (32 - NUM_ENT_ENTRY_BITS)