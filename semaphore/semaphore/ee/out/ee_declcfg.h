/* ###*B*###
 *
 * ERIKA Enterprise - a tiny RTOS for small microcontrollers
 * 
 * Copyright (C) 2002-2018 Evidence Srl
 * 
 * This file is part of ERIKA Enterprise.
 * 
 * See LICENSE file.
 *
 * ###*E*### */

/***************************************************************************
 *
 * This file is generated by RT-Druid.
 * Please do not modify it.
 *
 **************************************************************************/

#ifndef OSEE_RTD_DECLCFG_H
#define OSEE_RTD_DECLCFG_H

#if (defined(__cplusplus))
extern "C" {
#endif

/* This header file is supposed to be included only through collector headers
   (ee.h, ee_conf.h or ee_internal.h) */

/***************************************************************************
 *
 * Declare tasks
 *
 **************************************************************************/
DeclareTask(HIGH_priority_task);
DeclareTask(LOW_priority_task);
DeclareTask(MID_priority_task);




/***************************************************************************
 *
 * Declare Idle Hooks
 *
 **************************************************************************/
extern void idle_hook_core0 (void);


/***************************************************************************
 *
 * Alarms Callbacks
 *
 **************************************************************************/


/***************************************************************************
 *
 * Semaphores
 *
 **************************************************************************/
#define OS_CORE0_START_SEC_VAR_INIT
#include "Os_MemMap.h"

extern SemType S;

#define OS_CORE0_STOP_SEC_VAR_INIT
#include "Os_MemMap.h"

#if (defined(__cplusplus))
}
#endif

/***************************************************************************
 *
 * End
 *
 **************************************************************************/
#endif /* OSEE_RTD_DECLCFG_H */
