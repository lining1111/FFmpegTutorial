#! /bin/bash
rm -rf build
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug ..
make -j8
# ./cmd_dir .
# ./video_encoder ~/Video/input_1280x720.yuv output.h264 libx264
# ./video_decoder ~/Video/es.h264 output.yuv
# ./audio_decoder ~/Video/test.mp3 output.pcm MP3
./audio_encoder ~/Video/input_f32le_2_44100.pcm output.mp3 MP3