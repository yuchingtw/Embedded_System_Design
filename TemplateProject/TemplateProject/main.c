/* FreeRTOS.org includes. */
#include <stdio.h>
#include <conio.h>
#include "FreeRTOS.h"
#include "task.h"

/* The task function. */
void vPrintString(const char *pcString);

/*-----------------------------------------------------------*/
int main(void) {


    vTaskStartScheduler();

    for(;; );
    return 0;
}

/*-----------------------------------------------------------*/
void vPrintString(const char *pcString) {
    BaseType_t xKeyHit = pdFALSE;
    BaseType_t xKeyPressesStopApplication = pdTRUE;
    /* Print the string, using a critical section as a crude method of mutual
    exclusion. */
    taskENTER_CRITICAL();
    {
        printf("%s", pcString);
        fflush(stdout);

        /* Allow any key to stop the application. */
        if(xKeyPressesStopApplication == pdTRUE) {
            xKeyHit = _kbhit();
        }
    }
    taskEXIT_CRITICAL();

    /* Allow any key to stop the application running.  A real application that
    actually used the key value should protect access to the keyboard too. */
    if(xKeyHit != pdFALSE) {
        vTaskEndScheduler();
    }
}