#pragma once
#include <string>
#include "Ԥ����ͷ.h"

struct CommandRequestPacket {
	// ȡ�����ı�
	std::string toString() {			// IDA ServerNetworkHandler::handle
		std::string str = std::string(*(std::string*)((VA)this + 40));
		return str;
	}
};