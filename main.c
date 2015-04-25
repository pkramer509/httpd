/*	my experimental HTTP server based off tinyhttpd
 * 
 */


#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <err.h>
#include "responses.h"

int startup(unsigned short *port)
{
	int httpd = 0;
	struct sockaddr_in name;
	
	
	return(httpd)
}

int main(int argc, char *argv[])
{
	int client_socket, server_socket;
	unsigned short port;
	struct sockaddr_in client_name;
	int client_name_length = sizeof(client_name)
	pthread_t newthread;
	
	server_socket = startup(&port)
	
	char *http_response;
	
	asprintf (&http_response, __HTTP_Response_200__);
	puts (http_response);
	
	return 0;
}
	
