#include <stdlib.h>

typedef enum {
    KC_OK = 0, 
    KC_ERR_INVALID_ARG, 
    KC_ERR_NOMEM,
    KC_ERR_STATE,
    KC_ERR_UNSUPPORTED
} kc_status;

const char* kc_status_str(kc_status s);

typedef uint64_t kc_tick;