#pragma once
#include <string>
#include "Ԥ����ͷ.h"
struct TextPacket {
	// ȡ�����ı�
	std::string toString() {			// IDA ServerNetworkHandler::handle
		std::string str = std::string(*(std::string*)((VA)this + 80));
		return str;
	}
};


