#include <stdlib.h>
#include "kc_core.h"

typedef struct kc_sched kc_sched;

typedef struct {
    int32_t pid;
    kc_tick arrival;
    kc_tick burst;
    int32_t priority;
} kc_proc_spec;


typedef enum {
    KC_SCHEF_FCFS,
    KC_SCHED_SJF,
    KC_SCHED_RR,
    KC_SCHED_PRIORITY
} kc_sched_policy;

typedef struct {
    kc_tick tick;
    int32_t pid; 
    kc_tick duration;
} kc_gantt_slice;


kc_status kc_sched_create(kc_sched** out, kc_sched_policy p, kc_tick quantum);
kc_status kc_sched_add(kc_sched* s, const kc_proc_spec* spec);
kc_status kc_sched_step(kc_sched* s, kc_gantt_slice* outslice, bool* done);
void kc_sched_destroy(kc_sched* s);

