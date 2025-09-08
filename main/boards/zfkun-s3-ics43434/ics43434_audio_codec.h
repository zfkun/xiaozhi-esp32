#ifndef _ICS43434_NO_AUDIO_CODEC_H
#define _ICS43434_NO_AUDIO_CODEC_H

#include "codecs/no_audio_codec.h"

#include <driver/gpio.h>
// #include <driver/i2s_pdm.h>
#include <mutex>

class Ics43434AudioCodec : public NoAudioCodec {
// private:
//     // 参考信号的缓冲区
//     std::vector<int16_t> ref_buffer_;
//     std::mutex ref_buffer_mutex_;

public:
  Ics43434AudioCodec(int input_sample_rate, int output_sample_rate,
                    gpio_num_t spk_bclk, gpio_num_t spk_ws, gpio_num_t spk_dout,
                    gpio_num_t mic_sck, gpio_num_t mic_ws, gpio_num_t mic_din,
                    bool input_reference);
    // int Read(int16_t* dest, int samples) override;
    // int Write(const int16_t* data, int samples) override;
};

#endif // _ICS43434_NO_AUDIO_CODEC_H