#ifndef __NTP_H__
#define __NTP_H__
#include "lwip/ip.h"

#define NTP_TIMEOUT_MS 5000

typedef struct {
	uint8 options;
	uint8 stratum;
	uint8 poll;
	uint8 precision;
	uint32 root_delay;
	uint32 root_disp;
	uint32 ref_id;
	uint8 ref_time[8];
	uint8 orig_time[8];
	uint8 recv_time[8];
	uint8 trans_time[8];
} ntp_t;

void ntp_get_time(ip_addr_t *ntp_server);
void ntp_to_tv(uint8_t ntp[8], struct timeval *tv);

#endif
