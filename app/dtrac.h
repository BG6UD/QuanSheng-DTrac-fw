#ifndef DTRAC_H
#define DTRAC_H

#include "stdint.h"
#include "stdbool.h"

struct satellite_d {
    uint32_t UPLink;
    uint32_t DownLink;
};

void R_DATA(const uint8_t *pBuffer);

extern struct satellite_d satellite_data;

//extern struct satellite_t satellite;
#endif