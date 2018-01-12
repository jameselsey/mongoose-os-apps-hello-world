#include <stdio.h>

#include "mgos_app.h"
#include "mgos_timers.h"

static void timer_cb(void *arg) {
  // don't forget the \n to flush print buffer
  printf("Hello world!\n");
  (void) arg;
}

// Entry point to app
enum mgos_app_init_result mgos_app_init(void) {
  
  // Repeat the timer_cb every 1 second, second argument is boolean to repeat (1 == true)
  mgos_set_timer(1000 , 1 , timer_cb, NULL);

  return MGOS_APP_INIT_SUCCESS;
}
