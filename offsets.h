#pragma once
#include "pointer.h"

namespace offset {
	// il2cpp
	constexpr pointer create_text = 0x103C640;
	constexpr pointer draw_text = 0x1050FA0;
	constexpr pointer none_style = 0x104A810;

	// camera
	constexpr pointer camera = 0x10;
	constexpr pointer matrix = 0xDC;
	constexpr pointer camera_position = 0x42C;

	// unit3d
	constexpr pointer unity_list_len = 0x18;
	constexpr pointer unity_list_start = 0x20;
	constexpr pointer unity_list_offset = 0x8;

	// PlayerStats
	constexpr pointer PlayerStats_Update = 0x316840;
	constexpr pointer PlayerStats_ccm = 0x70;
	constexpr pointer ccm_team = 0x170;

	// render
	constexpr pointer GUI = 0x50F6E0;

	//AC bypass
	constexpr pointer MemoryIntegrity = 0x285FFB;
	constexpr pointer MemoryIntegrity2 = 0x285FFB + 0x1B;
}
