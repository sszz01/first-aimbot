#pragma once

#include <../SDK/client.h>
#include <../SDK/offsets.h>
#include <../math/vector.h>
#include <../memory/memory.h>

namespace aimbot {
	inline uint32_t moduleBase {};
	inline uint32_t procID{};

	void frame();
	float distance(vec3 p1, vec3 p2);
}