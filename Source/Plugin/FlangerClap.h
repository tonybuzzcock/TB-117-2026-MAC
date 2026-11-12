// FlangerClap.h
// The three entry functions clap-wrapper links into every format.

#pragma once

bool tb117_entry_init (const char* pluginPath);
void tb117_entry_deinit();
const void* tb117_entry_get_factory (const char* factoryId);
