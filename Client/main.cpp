#include "Client.h"
#include "Chat.h"

int main() {

	Sleep(3000);

	std::string ip{ "192.168.0.13" };
	uint16_t port{ 5555 };

	Chat chat(ip, port);
	chat.run();

	return 0;
}
