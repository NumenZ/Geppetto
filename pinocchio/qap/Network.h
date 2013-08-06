#pragma once

#include <winsock2.h>
#include <ws2tcpip.h>

#include "Archiver.h"

#define DEFAULT_PORT "4242"

class Network : public Archiver {
public:
	~Network();
	void startServer();
	void startClient();

	void write(unsigned char *buf, int len);
	void read(unsigned char *buf, int len);

private:
	WSADATA wsaData;

	SOCKET Socket;
};
