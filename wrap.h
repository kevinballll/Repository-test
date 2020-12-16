#ifndef _WRAP_H_
#define _WRAP_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

#include <sys/stat.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/msg.h>
#include <sys/wait.h>
#include <sys/socket.h>

#include <linux/fb.h>
#include <linux/input.h>

#include <string.h>
#include <strings.h>
#include <errno.h>
#include <time.h>
#include <fcntl.h>

#include <dirent.h>
#include <pthread.h>

#include <netinet/in.h>
#include <netinet/ip.h> /* superset of previous */
#include <arpa/inet.h> 

#endif
