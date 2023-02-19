#include "bundler.hpp"


int main(void) 
{

	networking net(45000, "127.0.0.1", "test");
	net.start();
	char msg[4096] = "this a test";
	char receive[4096];
	
	while (true) 
	{
		Sleep(1000);
		memcpy(net.sendData, msg, 4096);
		net.netSend();
		std::cout << "sent\n";
		memcpy(receive, net.netReceive(), 4096);
	}
	

	
	net.shutdown();
	return 0;
}