/**
 * <!-- begin-user-doc -->
 *
 * $HeadURL$
 * $Id$
 * $Revision$
 *
 * @file   glparser.h
 * @date   15.04.2021
 * @author Cihat Sami Gungor
 *
 * <!-- end-user-doc -->
 *
 * @brief This module handles the GLParser, ProcessRandomMessages, SequenceFound, SequenceNotFound and InitRandomNumberGenerator operations.
 */

#ifndef GLPARSER_CONFIG_H
#define GLPARSER_CONFIG_H

 /**********************************************************************************************************************
  * INCLUDES
  *********************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

  /**********************************************************************************************************************
   *  GLOBAL CONSTANT MACROS
   *********************************************************************************************************************/
#define PROCESS_MESSAGE_DISABLE_TIME        9
#define PROCESS_MESSAGE_ENABLE_TIME         40
#define MESSAGE_TIMEOUT_PERIOD_20S          20

   /**
	* <!-- begin-user-doc -->
	* @req TEST FOR AUTOSAR ENGINEERS Task1
	* <!-- end-user-doc -->
	*
	* @brief This function checks whether a sequence of characters in received
	*  random messages. A random ASCII character is received every 100ms.
	* There can be other characters in between. Once found- call a Found function and
	* wait for the sequence again, if not found then wait until this sequence is found.
	*  If a new character does not come in 2 seconds call the Timeout function and wait
	*  for the whole sequence of characters.
   */
unsigned char GLParser(unsigned char* s, unsigned char* t, unsigned char inputCharSize, unsigned char sequenceCharSize);
/**
 * <!-- begin-user-doc -->
 * @req TEST FOR AUTOSAR ENGINEERS Task1
 * <!-- end-user-doc -->
 *
 * @brief This function shows SequenceFound result.
 *
 *
*/
void SequenceFound();
/**
 * <!-- begin-user-doc -->
 * @req TEST FOR AUTOSAR ENGINEERS Task1
 * <!-- end-user-doc -->
 *
 * @brief This function shows SequenceNotFound result.
 *
 *
*/
void SequenceNotFound();
/**
 * <!-- begin-user-doc -->
 * @req TEST FOR AUTOSAR ENGINEERS Task1
 * <!-- end-user-doc -->
 *
 * @brief This function generates random messages and calls
 * GLParser function to check whether "GLROX" characters in
 * these messages.
*/
void ProcessRandomMessages();
/**
 * <!-- begin-user-doc -->
 * @req TEST FOR AUTOSAR ENGINEERS Task1
 * <!-- end-user-doc -->
 *
 * @brief This function intializes random number generator
 *
 *
*/
void InitRandomNumberGenerator();

/**
 * <!-- begin-user-doc -->
 * <!-- end-user-doc -->
 *
 * @brief This variable stores the global timeout counter value.
 */
extern unsigned char timeoutCounter;
/**
 * <!-- begin-user-doc -->
 * <!-- end-user-doc -->
 *
 * @brief This variable stores the global timeout occurred state.
 */
extern bool timeoutOccured;

#endif /* GLPARSER_CONFIG_H */
