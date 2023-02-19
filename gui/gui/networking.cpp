#define _CRT_SECURE_NO_WARNINGS

#include "networking.hpp"
#include <iostream>

networking::networking()
{
	version = MAKEWORD(2,2);
}

networking::~networking()
{
}


networking::networking(int newPort, std::string newServer, std::string newProto)
{
	port = newPort;
	server = newServer;
	proto = newProto;
}

int networking::start()
{
	//initialize the socket
	if (WSAStartup(version, &wsData) != 0) 
	{
		std::cout << "winsock failed\n";
	}

	//create the socket
	listenSock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	if (listenSock == INVALID_SOCKET) 
	{
		std::cout << "socket was invalid";
	}

	address.sin_family = AF_INET;
	char* svrTest = const_cast<char*>(server.c_str());
	//printf("%s", svrTest);
	


	inet_pton(AF_INET, svrTest, &address.sin_addr);
	address.sin_port = htons(port);
	return 0;
}

int networking::shutdown()
{
	return 0;
}

void networking::netSend()
{
	int status = sendto(listenSock, sendData, 4096, 0, (sockaddr*)&address, sizeof(address));
	if (status == SOCKET_ERROR) 
	{
		std::cout << "send error\n";
	}

	return;
}

char* networking::netReceive()
{
	
	SOCKADDR recvsock;
	recvsock.sa_family = AF_INET;
	strcpy(recvsock.sa_data, "127.0.0.1");
	int fromlen = 4096;

	int numReceived = recvfrom(listenSock, recvData, 4096, 0, &recvsock, &fromlen);

	if (numReceived == SOCKET_ERROR) 
	{
		std::cout << "recv error\n";
	}


	return recvData;
}
