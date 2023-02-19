#pragma once
#include "bundler.hpp"


class networking
{
public:
	//constructors/destructors
	networking();
	~networking();

	networking(int newPort, std::string newServer, std::string newProto);

	int start();

	int shutdown();

	void netSend();

	char* netReceive();
	
	char sendData[4096];
	char recvData[4096];
private:
	int port;
	std::string server;
	std::string proto;
	std::string role;

	
	


	WSADATA wsData;
	WORD version;
	SOCKET listenSock;
	sockaddr_in address;
};
