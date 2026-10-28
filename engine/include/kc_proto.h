#include "kc_sched.h"

typedef struct kc_sesion kc_session;

kc_status kc_proto_handle_line(kc_session* s, const char* req_json, char** resp_json);
