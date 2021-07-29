// io_data.cpp
#include "io_data.h"

#include <stdlib.h>
#include <string.h>

#include <iostream>

static FILE* input_file = nullptr;
static FILE* output_file = nullptr;

int32_t open_input_output_files(const char* input_name,
                                const char* output_name) {
  if (strlen(input_name) == 0 || strlen(output_name) == 0) {
    std::cerr << "Error: empty input or output file name." << std::endl;
    return -1;
  }

  close_input_output_files();

  input_file = fopen(input_name, "rb");
  if (input_file == nullptr) {
    std::cerr << "Error: failed to open input file." << std::endl;
    return -1;
  }
  output_file = fopen(output_name, "wb");
  if (output_file == nullptr) {
    std::cerr << "Error: failed to open output file." << std::endl;
    return -1;
  }

  return 0;
}

void close_input_output_files() {
  if (input_file != nullptr) {
    fclose(input_file);
    input_file = nullptr;
  }
  if (output_file != nullptr) {
    fclose(output_file);
    output_file = nullptr;
  }
}