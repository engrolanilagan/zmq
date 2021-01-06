//  Hello World server
#include "../libzmq/zmq.h"
//#include <zmq.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>

int main()
{
    //  Socket to talk to clients
    void *context = zmq_ctx_new ();
    printf("hwserver.c: context created at test okay \n");
    void *responder = zmq_socket (context, ZMQ_REP);
    printf("hwserver.c: socket created at test okay \n");
    int rc = zmq_bind (responder, "tcp://*:5555");
    printf("hwserver.c: binding to socket at test finished. rc=%d\n",rc);
    assert (rc == 0);

    //for(int i=0; i<5; i++){
        unsigned char buffer [50] = {0};
	//printf("hwserver.c : NuttX waiting to recv message!\n");
        zmq_recv (responder, buffer, 50, 0);
	printf ("hwserver.c : NuttX received command: \n");
        for(int i=0; i<50; i++){
	    printf("%02hhX ", buffer[i]);
	}
        printf ("\n");
        //sleep (1);         //  Do some 'work'
	sleep(1);
	printf("hwserver.c : NuttX sending ACK\n");
        zmq_send (responder, "ACK", 10, 0);
	printf("hwserver.c: ACK sent!\n");
    //}
    return 0;
}
