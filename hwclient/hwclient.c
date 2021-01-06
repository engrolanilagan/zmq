//  Hello World client
#include "../libzmq/zmq.h"
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
    //int request_nbr;
    //for (request_nbr = 0; request_nbr != 5; request_nbr++) {
        unsigned char buffer [50] = {0x56, 0x69, 0x56, 0x4f, 0x74, 0x65, 0x63, 0x68,                                     0x32, 0x00, 0x02, 0x40, 0x00, 0x22, 0x1e, 0x9c,                                     0x01, 0x00, 0x9f, 0x02, 0x06, 0x00, 0x00, 0x00,                                     0x00, 0x01, 0x00, 0x9f, 0x03, 0x06, 0x00, 0x00,                                     0x00, 0x00, 0x00, 0x00, 0xdf, 0xef, 0x37, 0x01,                                     0x07, 0xdf, 0xef, 0x3c, 0x03, 0x01, 0x00, 0x60,                                     0x18, 0xd1};
        char ackbuffer [10] = {0};	
	printf ("hwclient.c : NuttX sending command:\n");
	for(int i=0; i<50; i++){
	    printf("%02hhX ", buffer[i]);
	}
	printf("\n");
        zmq_send (requester, buffer, 50, 0);
	printf("hwclient.c : NuttX sent successfully.\n");
	sleep(1);
	zmq_recv (requester, ackbuffer, 10, 0);
	printf("hwclient.c : NuttX received %s \n", ackbuffer);
    //}
    zmq_close (requester);
    zmq_ctx_destroy (context);
    return 0;
}
