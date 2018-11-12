#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

/*-----------------------------------------------------------
 * Application specific definitions.
 *
 * These definitions should be adjusted for your particular hardware and
 * application requirements.
 *
 * THESE PARAMETERS ARE DESCRIBED WITHIN THE 'CONFIGURATION' SECTION OF THE
 * FreeRTOS API DOCUMENTATION AVAILABLE ON THE FreeRTOS.org WEB SITE AND IN THE
 * FreeRTOS REFERENCE MANUAL.
 *----------------------------------------------------------*/

#define configUSE_PREEMPTION					1
#define configUSE_PORT_OPTIMISED_TASK_SELECTION	1
#define configMAX_PRIORITIES					5
#define configUSE_IDLE_HOOK						0
#define configUSE_TICK_HOOK						0
#define configTICK_RATE_HZ						( 1000 ) /* This is a simulated environment and therefore not real-time. */
#define configMINIMAL_STACK_SIZE				( ( unsigned short ) 50 ) /* In this simulated case, the stack only has to hold one small structure as the real stack is part of the win32 thread. */
#define configTOTAL_HEAP_SIZE					( ( size_t ) ( 20 * 1024 ) )
#define configMAX_TASK_NAME_LEN					( 12 )
#define configUSE_TRACE_FACILITY				0
#define configUSE_16_BIT_TICKS					0
#define configIDLE_SHOULD_YIELD					1
#define configUSE_MUTEXES						1
#define configCHECK_FOR_STACK_OVERFLOW			0 /* Not applicable when using the Win32 simulator. */
#define configUSE_RECURSIVE_MUTEXES				1
#define configQUEUE_REGISTRY_SIZE				10
#define configUSE_MALLOC_FAILED_HOOK			0
#define configUSE_APPLICATION_TASK_TAG			0
#define configUSE_COUNTING_SEMAPHORES			1
#define configUSE_ALTERNATIVE_API				0
#define configUSE_QUEUE_SETS					1

 /* Software timer related configuration options. */
#define configUSE_TIMERS						0
#define configTIMER_TASK_PRIORITY				( configMAX_PRIORITIES - 1 )
#define configTIMER_QUEUE_LENGTH				20
#define configTIMER_TASK_STACK_DEPTH			( configMINIMAL_STACK_SIZE * 2 )

/* Run time stats gathering configuration options. */
#define configGENERATE_RUN_TIME_STATS			0

/* Co-routine related configuration options. */
#define configUSE_CO_ROUTINES 					0
#define configMAX_CO_ROUTINE_PRIORITIES 		2

/* This demo does not make use of one or more example stats formatting
functions, which format the raw data provided by the uxTaskGetSystemState()
function in to human readable ASCII form. */
#define configUSE_STATS_FORMATTING_FUNCTIONS	0

/* Set the following definitions to 1 to include the API function, or zero
to exclude the API function.  In most cases the linker will remove unused
functions anyway. */
#define INCLUDE_vTaskPrioritySet				1
#define INCLUDE_uxTaskPriorityGet				1
#define INCLUDE_vTaskDelete						1
#define INCLUDE_vTaskSuspend					1
#define INCLUDE_vTaskDelayUntil					1
#define INCLUDE_vTaskDelay						1
#define INCLUDE_uxTaskGetStackHighWaterMark		1
#define INCLUDE_xTaskGetSchedulerState			1
#define INCLUDE_xTimerGetTimerDaemonTaskHandle	1
#define INCLUDE_xTaskGetIdleTaskHandle			1
#define INCLUDE_pcTaskGetTaskName				1
#define INCLUDE_eTaskGetState					1
#define INCLUDE_xSemaphoreGetMutexHolder		1
#define INCLUDE_xTimerPendFunctionCall			1

#endif /* FREERTOS_CONFIG_H */
