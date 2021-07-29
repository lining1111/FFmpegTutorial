// io_data.h
#ifndef IO_DATA_H
#define IO_DATA_H
extern "C" {
#include <libavcodec/avcodec.h>
}
#include <stdint.h>

int32_t open_input_output_files(const char* input_name,
                                const char* output_name);
void close_input_output_files();

int32_t read_yuv_to_frame(AVFrame* frame);
void write_pkt_to_file(AVPacket* pkt);
#endif