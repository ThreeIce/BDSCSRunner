#pragma once
#include "BPos3.h"
#include "Ԥ����ͷ.h"
struct BlockPos {
	// ��ȡ��������ͷ
	BPos3* getPosition() const {
		return reinterpret_cast<BPos3*>(reinterpret_cast<VA>(this));
	}
};

