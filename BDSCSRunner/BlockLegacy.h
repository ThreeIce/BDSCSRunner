#pragma once
#include <string>
#include "Ԥ����ͷ.h"
struct BlockLegacy {
	// ��ȡ������
	auto getFullName() const {				// IDA BlockLegacy::~BlockLegacy
		return (std::string&) * (__int64*)((__int64)this + 104);
	}
	// ��ȡ����ID��
	auto getBlockItemID() const {
		return SYMCALL(short,
			MSSYM_B1QE14getBlockItemIdB1AE11BlockLegacyB2AAA7QEBAFXZ,
			this);
	}
};
