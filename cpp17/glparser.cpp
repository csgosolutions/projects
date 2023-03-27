/**
 * <!-- begin-user-doc -->
 *
 * $HeadURL$
 * $Id$
 * $Revision$
 *
 * @file   glparser.c
 * @date   15.04.2021
 * @author Cihat Sami Gungor
 *
 * <!-- end-user-doc -->
 *
 * @brief This module handles the GLParser, ProcessRandomMessages, SequenceFound, SequenceNotFound and InitRandomNumberGenerator
 * operations.
 */

#include "glparser.h"
 /**
  * <!-- begin-user-doc -->
  * <!-- end-user-doc -->
  *
  * @brief This variables contain the data of sample messages.
  */
unsigned char 	parseInput1[] = { 'G','a','b','f','d','b','L','b','s','f','b','d','R','b','a','s','g','O','X' };
unsigned char 	parseInput2[] = { 'A','A','4','h','f','g','h','d','A','A','G','L','R','O','X' };
unsigned char 	parseInput3[] = { 'G','L','R','O','b','a','s','8','3','2','h','X','b','a','s','b' };
unsigned char 	parseInput4[] = { 'G','L','R','O','o','b','i','a','p','j','s','o','8','3','b','a','s','b' };
unsigned char 	parseInput5[] = { 'g','l','r','o','x','b','p','o','a','i','j','s','p','o','i','a','s','j','d','b' };
unsigned char 	parseInput6[] = { 'G','L','p','b','o','i','a','s','j','d','b','p','o','i','j','O','X' };
unsigned char 	parseInput7[] = { 'G','X','p','R','o','O','a','s','X','d','b','p','o','i','j','R' };
unsigned char 	parseInput8[] = { 'G','X','p','o','R','O','a','s','X','d','b','p','o','i','j','R' };
unsigned char 	parseInput9[] = { 'G','X','p','O','o','R','a','s','X','d','b','p','o','i','j','R' };
unsigned char 	sequencechar[] = { 'G','L','R','O','X' };

/**
 * <!-- begin-user-doc -->
 * <!-- end-user-doc -->
 *
 * @brief This variable stores the global timeout counter value.
 */
unsigned char timeoutCounter = 0;
/**
 * <!-- begin-user-doc -->
 * <!-- end-user-doc -->
 *
 * @brief This variable stores the global timeout occurred state.
 */
bool timeoutOccured = false;
/**
 * <!-- begin-user-doc -->
 * <!-- end-user-doc -->
 *
 * @brief This variable stores the random character index value.
 */
int randomCharIndex = 0;

/**
 * <!-- begin-user-doc -->
 * @req TEST FOR AUTOSAR ENGINEERS Task1
 * <!-- end-user-doc -->
 *
 * @brief This function generates random messages and calls
 * GLParser function to check whether "GLROX" characters in
 * these messages.
*/
void ProcessRandomMessages() {
    randomCharIndex = rand() % 8 + 1;
    switch (randomCharIndex) {
    case 1:
        printf("%s \n", &parseInput1[0]);
        GLParser(&sequencechar[0], &parseInput1[0], (int)sizeof(parseInput1), (int)sizeof(sequencechar));
        break;
    case 2:
        printf("%s \n", &parseInput2[0]);
        GLParser(&sequencechar[0], &parseInput2[0], (int)sizeof(parseInput2), (int)sizeof(sequencechar));
        break;
    case 3:
        printf("%s \n", &parseInput3[0]);
        GLParser(&sequencechar[0], &parseInput3[0], (int)sizeof(parseInput3), (int)sizeof(sequencechar));
        break;
    case 4:
        printf(" %s \n", &parseInput4[0]);
        GLParser(&sequencechar[0], &parseInput4[0], (int)sizeof(parseInput4), (int)sizeof(sequencechar));
        break;
    case 5:
        printf("%s \n", &parseInput5[0]);
        GLParser(&sequencechar[0], &parseInput5[0], (int)sizeof(parseInput5), (int)sizeof(sequencechar));
        break;
    case 6:
        printf("%s \n", &parseInput6[0]);
        GLParser(&sequencechar[0], &parseInput1[0], (int)sizeof(parseInput1), (int)sizeof(sequencechar));
        break;
    case 7:
        printf("%s \n", &parseInput7[0]);
        GLParser(&sequencechar[0], &parseInput7[0], (int)sizeof(parseInput7), (int)sizeof(sequencechar));
        break;
    case 8:
        printf("%s \n", &parseInput8[0]);
        GLParser(&sequencechar[0], &parseInput8[0], (int)sizeof(parseInput8), (int)sizeof(sequencechar));
        break;
    case 9:
        printf("%s \n", &parseInput9[0]);
        GLParser(&sequencechar[0], &parseInput9[0], (int)sizeof(parseInput9), (int)sizeof(sequencechar));
        break;
    default:
        break;
    }
}
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
unsigned char GLParser(unsigned char* s, unsigned char* t, unsigned char inputCharSize, unsigned char sequenceCharSize)
{
    timeoutCounter = 0;
    static unsigned char matchedCharCount = 0;
    if (timeoutOccured) {
        matchedCharCount = 0;
        timeoutOccured = false;
    }
    unsigned char z;
    for (z = 0; z < inputCharSize; z++) {
        if (*(s + matchedCharCount) == *t++) {
            matchedCharCount++;
        }
        if (sequenceCharSize == matchedCharCount) {
            matchedCharCount = 0;
            SequenceFound();
            return 1;
        }
    }
    if (sequenceCharSize != matchedCharCount) {
        SequenceNotFound();
    }
    return 0;
}

/**
 * <!-- begin-user-doc -->
 * @req TEST FOR AUTOSAR ENGINEERS Task1
 * <!-- end-user-doc -->
 *
 * @brief This function shows SequenceFound result.
 *
 *
*/
void SequenceFound() {
    printf("TRUE\n");
}

/**
 * <!-- begin-user-doc -->
 * @req TEST FOR AUTOSAR ENGINEERS Task1
 * <!-- end-user-doc -->
 *
 * @brief This function shows SequenceNotFound result.
 *
 *
*/
void SequenceNotFound() {
    printf("FALSE\n\n");
}

/**
 * <!-- begin-user-doc -->
 * @req TEST FOR AUTOSAR ENGINEERS Task1
 * <!-- end-user-doc -->
 *
 * @brief This function intializes random number generator
 *
 *
*/
void InitRandomNumberGenerator() {
    time_t t;
    srand((unsigned)time(&t));
}
