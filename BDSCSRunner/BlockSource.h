#pragma once
#include "Block.h"
#include "BlockPos.h"
#include "Ԥ����ͷ.h"

struct BlockSource {
	// ȡ����
	Block* getBlock(const BlockPos* blkpos) {
		return SYMCALL(Block*,
			MSSYM_B1QA8getBlockB1AE11BlockSourceB2AAE13QEBAAEBVBlockB2AAE12AEBVBlockPosB3AAAA1Z,
			this, blkpos);
	}
};

