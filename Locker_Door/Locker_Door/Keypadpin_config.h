/*
 * Keypadpin_config.h
 *
 * Created: 20/03/12 2:03:13 PM
 *  Author: Mohamed Sobhy
 */ 


#ifndef KEYPADPIN_CONFIG_H_
#define KEYPADPIN_CONFIG_H_


/*
* user should change the numbers of rows and columns
* configure the buttons in it's position
* min values for row and colum 2 * 2
* max values for row and colum 4 * 4
* it can be easily add more rows and columns
*/

#define ROWS	    4
#define COLUMS	    4

#define COLUMS_POS	4

// the directives use to change the .c code to adjust to selected key pad
// don't touch it
#if ROWS >= 3
#define _ROW_3
#endif

#if ROWS >= 4
#define _ROW_4
#endif

#if COLUMS >= 3
#define _COLUM_3
#endif

#if COLUMS >= 4
#define _COLUM_4
#endif

// row 1
#define P_0_0 ('7') //column 0
#define P_0_1 ('8') //column 1
#define P_0_2 ('9') //column 2
#define P_0_3 ('/') //column 3

// row 2
#define P_1_0 '4' //column 0
#define P_1_1 '5' //column 1
#define P_1_2 '6' //column 2
#define P_1_3 '*' //column 3

// row 3
#ifdef _ROW_3
#define P_2_0 '1' //column 0
#define P_2_1 '2' //column 1
#define P_2_2 '3' //column 2
#define P_2_3 '-' //column 3
#endif // _ROW_3_

// row 4
#ifdef _ROW_4
#define P_3_0 '*' //column 0
#define P_3_1 '0' //column 1
#define P_3_2 '=' //column 2
#define P_3_3 '+' //column 3
#endif // _ROW_4_



#endif /* KEYPADPIN_CONFIG_H_ */