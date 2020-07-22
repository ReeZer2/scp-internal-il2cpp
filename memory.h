#pragma once
#include <vector>
#include "pointer.h"

struct Entity {
	pointer address;
	vec3 position;
	char name[50];
	pointer ccm;
	int team;
};

// setup some global to work in different threads
vec3 cameraPosition;
Matrix matrix;
pointer camera;
std::vector<Entity> entityList;
std::vector<Entity> locationList;
char TeamName[18][50] = { "SCP-173", "Class-D Personnel", "Spectator", "SCP-106", "Nine-Tailed Fox Scientist", "SCP-049", "Scientist", "SCP-079", "Chaos Insurgency", "SCP-096", "SCP-049-2", "Nine-Tailed Fox Lieutenant", "Nine-Tailed Fox Commander", "Nine-Tailed Fox Cadet", "TUTORIAL", "Facility Guard", "SCP-939-53", "SCP-939-89", };
char TeamColor[18][50] = { "red",    "#FFA500",           "#BEBEBE",   "red",     "#1E90FF",                   "red",     "#FFFF00",   "red",     "#006400",          "red",     "red",       "#4169E1",                    "#0000CD",                 "#87CEFA",               "#32CD32",  "#D3D3D3",        "red",        "red", };