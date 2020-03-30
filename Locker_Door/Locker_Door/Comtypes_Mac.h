/*
 * Comtypes_Mac.h
 *
 * Created: 20/03/12 2:07:52 PM
 *  Author: Mohamed Sobhy
 */ 


#ifndef COMTYPES_MAC_H_
#define COMTYPES_MAC_H_


//DIFFERENT DATA TYPES FOR DIFFERENR TARGETS
typedef unsigned char uint8;
typedef unsigned int  uint16;
typedef unsigned long uint32;
typedef unsigned long long uint64;
typedef  char sint8;
typedef  int  sint16;
typedef  long sint32;
typedef  long long sint64;
typedef uint8 bool_t;

#define ACCESS_REG_8BIT(REG)         (*(volatile uint8*)REG)

#define ACCESS_REG_16BIT(REG)        (*(volatile uint16*)REG)

#define READ_REG_8BIT(REG)           (*(volatile uint8*)(REG))

#define READ_REG_16BIT(REG)          (*(volatile uint16*)(REG))

#define WRITE_REG_8BIT(REG,Val)      (ACCESS_REG_8BIT(REG)) = (Val);

#define SET_BIT(REG,BIT_NUM)		 (ACCESS_REG_8BIT(REG) |= 1<<(BIT_NUM))

#define CLEAR_BIT(REG,BIT_NUM)       (ACCESS_REG_8BIT(REG) &= (~(1<<(BIT_NUM))))

#define TOGGLE_BIT(REG,BIT_NUM)  	 (ACCESS_REG_8BIT(REG) ^= (1<<BIT_NUM) )

#define IS_BIT_SET(REG,BIT_NUM)      ((ACCESS_REG_8BIT(REG) & (1 << BIT_NUM)))

#define IS_BIT_CLEAR(REG,BIT_NUM)    (!(IS_BIT_SET(REG,BIT_NUM)))



#endif /* COMTYPES_MAC_H_ */