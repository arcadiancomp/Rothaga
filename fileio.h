/*
 * fileio.h
 *
 *  Created on: Apr 16, 2016
 *      Author: Admin
 */

#ifndef FILEIO_H_
#define FILEIO_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h> 

void load_config(char *);
void kill_server(int);

#endif /* FILEIO_H_ */
