#include "Server.h"
#include "Database.h"
#include "Chat.h"

int main() {
	std::string ip{ "192.168.0.13" };
	uint16_t port{ 5555 };
	std::string dbHost{ "localhost" };
	std::string dbUser{ "root" };
	std::string dbPassword{ "root" };
	std::string dbName{ "dbChat" };

	Chat chat(ip, port, dbHost, dbUser, dbPassword, dbName);

	chat.run();

	return 0;
}
