#ifndef CWEBP_H
#define CWEBP_H
#include <stdint.h>
typedef struct
{
    unsigned char* data;
    int size;
    int offset;
}ImageSource;
typedef struct {
    uint8_t* start;
    int len;
}out_buf_t;
typedef enum 
{/*{{{*/
    PNG_ = 0,
    JPEG_,
    UNSUPPORTED
} ImageFormat;/*}}}*/

#endif	/* WEBP_H*/
