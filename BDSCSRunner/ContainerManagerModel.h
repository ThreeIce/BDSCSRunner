#pragma once
#include "Player.h"

struct ContainerManagerModel {
	// ȡ������
	Player* getPlayer() {				// IDA ContainerManagerModel::ContainerManagerModel
		return *reinterpret_cast<Player**>(reinterpret_cast<VA>(this) + 8);
	}
};
