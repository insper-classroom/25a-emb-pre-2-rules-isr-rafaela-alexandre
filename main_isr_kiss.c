#include "asf.h"

int volatile g_cnt = 0;
char volatile g_str[10];

// This code creates a progress bar on an OLED screen that
// increases when the button is pressed.
void btn_callback(void) {

  // if (g_cnt >= 8)
  //   g_cnt = 0;

  g_cnt = 2;
  g_str[0]= '*';
  g_str[1]= '*';
  g_str[2]= '\0';
  // int i = 0;
  // for (int i = 0; i < g_cnt; i++) {
  //   g_str[i] = '*';
  //   g_str[i + 1] = NULLL;
  // }
}

void main(void) {
  // ...
  int batata;

  batata = batata + 1;
  while (1) {
  }
}
