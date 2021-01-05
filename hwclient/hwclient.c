//  Hello World client
#include "../hwserver/zmq.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int main (void)
{
    printf ("hw client.c : Connecting to hello world server...\n");
    void *context = zmq_ctx_new ();
    printf("hwclient.c : Context created!\n");
    void *requester = zmq_socket (context, ZMQ_REQ);
    printf("hwclient.c : socket created\n");
    zmq_connect (requester, "tcp://localhost:5555");
    printf("hwclient.c : connected to socket\n");
    sleep(2);
    //int request_nbr;
    //for (request_nbr = 0; request_nbr != 5; request_nbr++) {
        char buffer [10] = {0};
	char ackbuff[10] = {0};
	int numrand = rand();
	sprintf(buffer, "%d", numrand);
        printf ("hwclient.c : NuttX sending random number %d...\n", numrand);
        zmq_send (requester, buffer, 10, 0);
	printf("hwclient.c : NuttX sent successfully.\n");
        zmq_recv (requester, ackbuff, 10, 0);
        printf ("hwclient.c : NuttX received %s \n", ackbuff);
	//sleep(3);
    //}
    zmq_close (requester);
    zmq_ctx_destroy (context);
    return 0;
}
