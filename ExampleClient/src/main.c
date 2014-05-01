#include <stdio.h>
#include <stdlib.h>

#include "main.h"

int main()
{
	char *listenAdress = "127.0.0.1";
	int listenPort = 4232;

	Client *client = calloc(1, sizeof(Client));
	if (!client)
	{
		printf("Error creating client!\n");
		return 0;
	}

	client->socket = create_client_sock(listenAdress, listenPort);
	if (client->socket < 0)
	{
		printf("Err! Can't connect to server. Check your internet connection.\n");
		return 0;
	}
	printf("Connected to %s : %d\n", listenAdress, listenPort);

	switch (registerOnServer(client))
	{
		case 1:
			client->state = authorized;
			printf("Authorized.\n");
			break;
		case 0:
			printf("Not authorized!\n");
			break;
		default:
			printf("Authorization error!\n");
	}

	sleep(2);
	close(client->socket);
	free(client);
	return 0;
}
