#include "pwm.h"

void notmain() {
  audio_init();
  audio_send_tone(WAVE_SQUARE, 1000);
}
