#ifndef UDP_UTILS_H
#define UDP_UTILS_H


extern void send(char *addr_str, char *port_str, char *data, unsigned int num, unsigned int delay);

extern void start_server(char *port_str);

extern void stop_server(void);

extern int udp_cmd(int argc, char **argv);

extern void pp(void);

#endif
