#pragma once
#include "Ԥ����ͷ.h"
#include "BlockLegacy.h"
struct Block {
	// ��ȡԴ
	const BlockLegacy* getLegacyBlock() const {
		return SYMCALL(const BlockLegacy*,
			MSSYM_B1QE14getLegacyBlockB1AA5BlockB2AAE19QEBAAEBVBlockLegacyB2AAA2XZ,
			this);
	}
};

