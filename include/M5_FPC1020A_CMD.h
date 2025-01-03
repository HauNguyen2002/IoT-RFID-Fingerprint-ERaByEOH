#ifndef _M5_FPC1020A_CMD_H_
#define _M5_FPC1020A_CMD_H_

#define ACK_SUCCESS    0x00
#define ACK_FAIL       0x01
#define ACK_FULL       0x04
#define ACK_NOUSER     0x05
#define ACK_USER_EXIST 0x07
#define ACK_TIMEOUT    0x08

#define ACK_GO_OUT 0x0F

#define ACK_ALL_USER    0x00
#define ACK_GUEST_USER  0x01
#define ACK_NORMAL_USER 0x02
#define ACK_MASTER_USER 0x03

#define USER_MAX_CNT 150

#define HEAD 0
#define CMD  1
#define CHK  6
#define TAIL 7

#define P1 2
#define P2 3
#define P3 4
#define Q1 2
#define Q2 3
#define Q3 4

#define CMD_HEAD     0xF5
#define CMD_TAIL     0xF5
#define CMD_ADD_1    0x01
#define CMD_ADD_2    0x02
#define CMD_ADD_3    0x03
#define CMD_MATCH    0x0C
#define CMD_DEL      0x04
#define CMD_DEL_ALL  0x05
#define CMD_USER_CNT 0x09

#define CMD_BAUD 0x21

#define CMD_SLEEP_MODE 0x2C
#define CMD_ADD_MODE   0x2D

#endif