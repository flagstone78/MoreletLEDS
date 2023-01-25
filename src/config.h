constexpr short AUDIO_SAMPLE_RATE_Hz = 48000; //input audio sample rate
constexpr short OUTPUT_RATE_Hz = 100; //output led update rate
constexpr short OUTPUT_LED_NUM = 144; //output led count

constexpr float FILTER_A4_Hz = 440.0; //pitch of musical note A4
constexpr float FILTER_LOWEST_Hz = 27.5; //lowest pitch to be included in filter bank (after rounding to nearest tone) A0
constexpr float FILTER_HIGHEST_Hz = 7040.0; //highest pitch to be included in filter bank (after rounding to nearest tone) A8
constexpr short FILTER_SUBNOTES = 1; //Tones to calculate inbetween notes

