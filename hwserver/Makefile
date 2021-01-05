############################################################################
# apps/examples/hello/Make.defs
#
# Licensed to the Apache Software Foundation (ASF) under one or more
# contributor license agreements.  See the NOTICE file distributed with
# this work for additional information regarding copyright ownership.  The
# ASF licenses this file to you under the Apache License, Version 2.0 (the
# "License"); you may not use this file except in compliance with the
# License.  You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
# WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
# License for the specific language governing permissions and limitations
# under the License.
#
############################################################################

include $(APPDIR)/Make.defs

# Hello, World! built-in application info

PROGNAME  = zmqhwserver
PRIORITY  = $(CONFIG_EXAMPLES_HELLO_PRIORITY)
STACKSIZE = $(CONFIG_EXAMPLES_HELLO_STACKSIZE)
MODULE    = $(CONFIG_ZMQ_HWSERVER)

# CPP Files
CPPSRCS += address.cpp
CPPSRCS += channel.cpp
CPPSRCS += client.cpp
CPPSRCS += clock.cpp
CPPSRCS += ctx.cpp
CPPSRCS += curve_client.cpp
CPPSRCS += curve_mechanism_base.cpp
CPPSRCS += curve_server.cpp
CPPSRCS += dealer.cpp
CPPSRCS += decoder_allocators.cpp
CPPSRCS += devpoll.cpp
CPPSRCS += dgram.cpp
CPPSRCS += dish.cpp
CPPSRCS += dist.cpp
CPPSRCS += endpoint.cpp
CPPSRCS += epoll.cpp
CPPSRCS += err.cpp
CPPSRCS += fq.cpp
CPPSRCS += gather.cpp
CPPSRCS += gssapi_client.cpp
CPPSRCS += gssapi_mechanism_base.cpp
CPPSRCS += gssapi_server.cpp
CPPSRCS += io_object.cpp
CPPSRCS += io_thread.cpp
CPPSRCS += ipc_address.cpp
CPPSRCS += ipc_connecter.cpp
CPPSRCS += ipc_listener.cpp
CPPSRCS += ip.cpp
CPPSRCS += ip_resolver.cpp
CPPSRCS += kqueue.cpp
CPPSRCS += lb.cpp
CPPSRCS += mailbox.cpp
CPPSRCS += mailbox_safe.cpp
CPPSRCS += mechanism_base.cpp
CPPSRCS += mechanism.cpp
CPPSRCS += metadata.cpp
CPPSRCS += msg.cpp
CPPSRCS += mtrie.cpp
CPPSRCS += norm_engine.cpp
CPPSRCS += null_mechanism.cpp
CPPSRCS += object.cpp
CPPSRCS += options.cpp
CPPSRCS += own.cpp
CPPSRCS += pair.cpp
CPPSRCS += peer.cpp
CPPSRCS += pgm_receiver.cpp
CPPSRCS += pgm_sender.cpp
CPPSRCS += pgm_socket.cpp
CPPSRCS += pipe.cpp
CPPSRCS += plain_client.cpp
CPPSRCS += plain_server.cpp
CPPSRCS += poll.cpp
CPPSRCS += poller_base.cpp
CPPSRCS += polling_util.cpp
CPPSRCS += pollset.cpp
CPPSRCS += precompiled.cpp
CPPSRCS += proxy.cpp
CPPSRCS += pub.cpp
CPPSRCS += pull.cpp
CPPSRCS += push.cpp
CPPSRCS += radio.cpp
CPPSRCS += radix_tree.cpp
CPPSRCS += random.cpp
CPPSRCS += raw_decoder.cpp
CPPSRCS += raw_encoder.cpp
CPPSRCS += raw_engine.cpp
CPPSRCS += reaper.cpp
CPPSRCS += rep.cpp
CPPSRCS += req.cpp
CPPSRCS += router.cpp
CPPSRCS += scatter.cpp
CPPSRCS += select.cpp
CPPSRCS += server.cpp
CPPSRCS += session_base.cpp
CPPSRCS += signaler.cpp
CPPSRCS += socket_base.cpp
CPPSRCS += socket_poller.cpp
CPPSRCS += socks_connecter.cpp
CPPSRCS += socks.cpp
CPPSRCS += stream_connecter_base.cpp
CPPSRCS += stream.cpp
CPPSRCS += stream_engine_base.cpp
CPPSRCS += stream_listener_base.cpp
CPPSRCS += sub.cpp
CPPSRCS += tcp_address.cpp
CPPSRCS += tcp_connecter.cpp
CPPSRCS += tcp.cpp
CPPSRCS += tcp_listener.cpp
CPPSRCS += thread.cpp
CPPSRCS += timers.cpp
CPPSRCS += tipc_address.cpp
CPPSRCS += tipc_connecter.cpp
CPPSRCS += tipc_listener.cpp
CPPSRCS += trie.cpp
CPPSRCS += udp_address.cpp
CPPSRCS += udp_engine.cpp
CPPSRCS += v1_decoder.cpp
CPPSRCS += v1_encoder.cpp
CPPSRCS += v2_decoder.cpp
CPPSRCS += v2_encoder.cpp
CPPSRCS += v3_1_encoder.cpp
CPPSRCS += vmci_address.cpp
CPPSRCS += vmci_connecter.cpp
CPPSRCS += vmci.cpp
CPPSRCS += vmci_listener.cpp
CPPSRCS += ws_address.cpp
CPPSRCS += ws_connecter.cpp
CPPSRCS += ws_decoder.cpp
CPPSRCS += ws_encoder.cpp
CPPSRCS += ws_engine.cpp
CPPSRCS += ws_listener.cpp
CPPSRCS += wss_address.cpp
CPPSRCS += wss_engine.cpp
CPPSRCS += xpub.cpp
CPPSRCS += xsub.cpp
CPPSRCS += zap_client.cpp
CPPSRCS += zmq.cpp
CPPSRCS += zmq_utils.cpp
CPPSRCS += zmtp_engine.cpp
CXXEXT  = .cpp
CSRCS = sha1.c
CXXSRCS = $(filter-out $(MAINSRC), $(wildcard *.cpp))
# PUBLISH Example
MAINSRC = hwserver.c

include $(APPDIR)/Application.mk
