# MoreletLEDS
An audio visualization using a filterbank of morelet wavelet filters to achieve better reactivity than a traditional fft.

Input:
An audio recording device. I use VB-Audio virtual cable to route the computer audio to this applicaiton.

Output:
RGB data is sent over UDP to a WLED device

- Basic process:
  - Setup:  
    - calculate morlet filters from given parameters  
  - Main loop:  
    - Take system audio and place into a large buffer (2x largest filter)  
    - Filter the buffer (pseudo convolve audio with each filter)
    - Convert frequency amplitudes into LED representation
      - Ordered form lowest to greatest frequency
      - Amplitude determined by sum of harmonics
      - Color determined by combination of harmonics
    - Scale to match led output format (uint8)
    - Send data over udp to leds  
  
