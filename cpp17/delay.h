/**
 * <!-- begin-user-doc -->
 *
 * $HeadURL$
 * $Id$
 * $Revision$
 *
 * @file   delay.h
 * @date   15.04.2021
 * @author Cihat Sami Gungor
 *
 * <!-- end-user-doc -->
 *
 * @brief This module handles the Delay, TimeoutCheck, ProcessTimer cyclic operations.
 */

#ifndef DELAY_CONFIG_H
#define DELAY_CONFIG_H

 /**********************************************************************************************************************
  * INCLUDES
  *********************************************************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

  /**********************************************************************************************************************
   *  GLOBAL CONSTANT MACROS
   *********************************************************************************************************************/
#define TIMER_DELAY_PERIOD_100MS              100

   /**
	* <!-- begin-user-doc -->
	* @req TEST FOR AUTOSAR ENGINEERS Task1
	* <!-- end-user-doc -->
	*
	* @brief This function delays for with 1 milliSeconds resolution.
	*
	*
   */
void Delay(int milliSeconds);

/**
 * <!-- begin-user-doc -->
 * @req TEST FOR AUTOSAR ENGINEERS Task1
 * <!-- end-user-doc -->
 *
 * @brief This function checks timeout state according to give period time.
 *
 *
*/
bool TimeoutCheck(int timeoutPeriod);

/**
 * <!-- begin-user-doc -->
 * @req TEST FOR AUTOSAR ENGINEERS Task1
 * <!-- end-user-doc -->
 *
 * @brief This function manages the process according to timer state.
 *
 *
*/
bool ProcessTimer();

#endif /* GLPARSER_CONFIG_H */