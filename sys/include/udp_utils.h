#ifndef __UDP_UTILS_H
#define __UDP_UTILS_H

#include <stdio.h>
#include <inttypes.h>

#ifdef __cplusplus
extern "C"{
#endif

static void send(char *addr_str, char *port_str, char *data, unsigned int num, unsigned int delay);

static void start_server(char *port_str);

static void stop_server(void);

int udp_cmd(int argc, char **argv);

#ifdef __cplusplus
}
#endif

#endif
