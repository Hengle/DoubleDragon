#ifndef __MODULEENTITY_H__
#define __MODULEENTITY_H__

#include <list>
#include "Globals.h"
#include "Module.h"
#include "Point.h"

/*enum Types
{
	npc,
	player,
	room,
	exit,
	item,
	unknown
};*/
enum Types
{
	enemy,
	player,
	unknown
};


class ModuleEntity : public Module
{
public:
	ModuleEntity(bool start_enabled = true);
	~ModuleEntity();

	void UpdateProfundity();

public:
	fPoint position;
	float profundity = 0;
	Types type;
};

#endif