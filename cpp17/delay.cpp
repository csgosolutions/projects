/**
 * <!-- begin-user-doc -->
 *
 * $HeadURL$
 * $Id$
 * $Revision$
 *
 * @file   delay.c
 * @date   15.04.2021
 * @author Cihat Sami Gungor
 *
 * <!-- end-user-doc -->
 *
 * @brief This module handles the Delay, TimeoutCheck, ProcessTimer cyclic operations.
 */

#include "delay.h"
#include "glparser.h"

 /**
  * <!-- begin-user-doc -->
  * @req TEST FOR AUTOSAR ENGINEERS Task1
  * <!-- end-user-doc -->
  *
  * @brief This function delays for with 1 milliSeconds resolution.
  *
  *
 */
void Delay(int milliSeconds)
{
    long pause;
    clock_t now, then;
    pause = milliSeconds * (CLOCKS_PER_SEC / 1000);
    now = then = clock();
    while ((now - then) < pause)
        now = clock();
}
/**
 * <!-- begin-user-doc -->
 * @req TEST FOR AUTOSAR ENGINEERS Task1
 * <!-- end-user-doc -->
 *
 * @brief This function checks timeout state according to give period time.
 *
 *
*/
bool TimeoutCheck(int timeoutPeriod)
{
    if (timeoutCounter >= timeoutPeriod) {
        timeoutOccured = true;
        return true;
    }
    else {
        timeoutCounter++;
    }
    return false;
}
/**
 * <!-- begin-user-doc -->
 * @req TEST FOR AUTOSAR ENGINEERS Task1
 * <!-- end-user-doc -->
 *
 * @brief This function manages the process according to timer state.
 *
 *
*/
bool ProcessTimer()
{
    static unsigned int timerCounter = 0;
    bool processMessages = true;
    if (timerCounter > PROCESS_MESSAGE_DISABLE_TIME) {
        processMessages = false;
    }
    if (timerCounter > PROCESS_MESSAGE_ENABLE_TIME) {
        processMessages = true;
        timerCounter = 0;
    }
    timerCounter++;
    return processMessages;
}
