#ifndef __ePaperSettings_GoodDisplay__
#define __ePaperSettings_GoodDisplay__

//
// Model GDEW026Z39 - 2.6 Inch 3-color ePaper display
//

const uint8_t deviceConfiguration_GDEW026Z39[] PROGMEM = 
{
	// booster soft start
	0,	0x06,
	3,	0x17,	0x17,	0x17,

	// power on command. Always "wait for ready" after this sequence
	0,	0x04,
	0xFF,		// wait for ready

	// Panel Setting
	0,	0x00,
	1,	0x0F,

	//Resolution 152x296 pixels
	0,	0x61,
	3,	0x98,	0x01,	0x28,
		
	
	//Vcom and data interval setting
	0,	0x50,
	1,	0x77
};
const uint8_t deviceConfigurationSize_GDEW026Z39 PROGMEM = 23;

//
// Model GDEW027C44 - 2.7 Inch three color
//

const uint8_t deviceConfiguration_GDEW027C44[] PROGMEM = 
{
	// booster soft start
	0,	0x06,
	3,	0x07, 0x07, 0x17,
	
	// power optimizations
	0,	0xF8,
	2,	0x60, 0xA5,
	0,	0xF8,
	2,	0x73, 0x23,
	0,	0xF8,
	2,	0x7C, 0x00,

	// Reset DFV_EN
	0,	0x16,
	1,	0x00,
	
	// Power Setting SPI
	0,	0x01,
	5,	0x03, 0x00, 0x2B, 0x2B, 0x09,
	
	// power on command. Always "wait for ready" after this sequence
	0,	0x04,
	0xFF,		// wait for ready
	
	// Panel Setting
	0,	0x00,
	1,	0x0F,
	
	// PLL Control
	0,	0x30,
	1,	0x3A,
	
	// Resolution
	0,	0x61,
	4,	0x00, 0xB0, 0x01, 0x08,
	
	// VCM_DC Setting
	0,	0x82,
	1,	0x12,
	
	// VCOM and Data Interval
	0,	0x50,
	1,	0x87,
};

const uint8_t deviceConfigurationSize_GDEW027C44 PROGMEM = 59;

//
// Model GDEW029Z10 - 2.9 inch Three colors red e-paper display
//

const uint8_t deviceConfiguration_GDEW029Z10[] PROGMEM = 
{

	// booster soft start
	0,	0x06,
	3,	0x17,	0x17,	0x17,

	// power on command. Always "wait for ready" after this sequence
	0,	0x04,
	0xFF,		// wait for ready

	// Panel Setting
	0,	0x00,
	2,	0x0F, 0x0D,

	//Resolution 128x296
	0,	0x61,
	3,	0x80,	0x01,	0x28,		
	
	//Vcom and data interval setting
	0,	0x50,
	2,	0x77
};
const uint8_t deviceConfigurationSize_GDEW029Z10 PROGMEM = 24;

//
// Model GDEW0371Z80 - 3.71 inch Three colors red e-paper display
//

const uint8_t deviceConfiguration_GDEW0371Z80[] PROGMEM = 
{

	// booster soft start
	0,	0x06,
	3,	0x17,	0x17,	0x1D,

// 		panel power setting command
// 	0,	0x01,	
// 	5,	0x07,	0x07,	0x3F,	0x3F,	0x0D,

	// power on command. Always "wait for ready" after this sequence
	0,	0x04,
	0xFF,		// wait for ready

	// Panel Setting
	0,	0x00,
	1,	0x0F,

	// 	PLL Control
// 	0,	0x30,
// 	1,	0x09,

	//Resolution 240x416
	0,	0x61,
	3,	0xf0,	0x01,	0xa0,

// 		VCOM_DC Setting
// 	0,	0x82,
// 	1,	0x12,
		
	
	//Vcom and data interval setting
	0,	0x50,
	2,	0x11, 0x07
};
const uint8_t deviceConfigurationSize_GDEW0371Z80 PROGMEM = 24;


//
// Model GDEW0371W7 - 3.71 inch 4 gray scale e-paper display
//

const uint8_t deviceConfiguration_GDEW0371W7[] PROGMEM = 
{
	// power settings
	0, 0x01,
	4, 0x07, 0x07, 0x3F, 0x3F,

	// booster soft start
	0,	0x06,
	3,	0x17,	0x17,	0x1D,

	// power on command. Always "wait for ready" after this sequence
	0,	0x04,
	0xFF,		// wait for ready

	// Panel Setting
	0,	0x00,
	1,	0x3f,

	// PLL Setting
	0, 0x30,
	1, 0x04,
	
	//Resolution 240x416
	0,	0x61,
	3,	0xf0,	0x01,	0xa0,
		
	// vcom_dc setting
	0, 0x82,
	1, 0x08,
	
	//Vcom and data interval setting
	0,	0x50,
	2,	0x11, 0x07
};
const uint8_t deviceConfigurationSize_GDEW0371W7 PROGMEM = 39;

const uint8_t setImage_CMD_GDEW0371W7[] PROGMEM = {
	// set black image command
	0,	0x10,
	
	// send black data
	0xFD,
	
	// set color image command
	0,	0x13,
	
	// send color data
	0xFC,
	
	// set LUT information
	
	0, 0x20,		//vcom
	42,	0x00  ,0x0A ,0x00 ,0x00 ,0x00 ,0x01,
		0x60  ,0x14 ,0x14 ,0x00 ,0x00 ,0x01,
		0x00  ,0x14 ,0x00 ,0x00 ,0x00 ,0x01,
		0x00  ,0x13 ,0x0A ,0x01 ,0x00 ,0x01,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,
	
	0, 0x21,    // red not use
	42,	0x40  ,0x0A ,0x00 ,0x00 ,0x00 ,0x01,
		0x90  ,0x14 ,0x14 ,0x00 ,0x00 ,0x01,
		0x10  ,0x14 ,0x0A ,0x00 ,0x00 ,0x01,
		0xA0  ,0x13 ,0x01 ,0x00 ,0x00 ,0x01,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,
	
	0, 0x22,		// bw r
	42,	0x40  ,0x0A ,0x00 ,0x00 ,0x00 ,0x01,
		0x90  ,0x14 ,0x14 ,0x00 ,0x00 ,0x01,
		0x00  ,0x14 ,0x0A ,0x00 ,0x00 ,0x01,
		0x99  ,0x0C ,0x01 ,0x03 ,0x04 ,0x01,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,

	0, 0x23,		// wb w
	42,	0x40  ,0x0A ,0x00 ,0x00 ,0x00 ,0x01,
		0x90  ,0x14 ,0x14 ,0x00 ,0x00 ,0x01,
		0x00  ,0x14 ,0x0A ,0x00 ,0x00 ,0x01,
		0x99  ,0x0B ,0x04 ,0x04 ,0x01 ,0x01,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,

	0, 0x24,		// bb b
	42,	0x80  ,0x0A ,0x00 ,0x00 ,0x00 ,0x01,
		0x90  ,0x14 ,0x14 ,0x00 ,0x00 ,0x01,
		0x20  ,0x14 ,0x0A ,0x00 ,0x00 ,0x01,
		0x50  ,0x13 ,0x01 ,0x00 ,0x00 ,0x01,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,

	0, 0x25,
	42,	0x40  ,0x0A ,0x00 ,0x00 ,0x00 ,0x01,
		0x90  ,0x14 ,0x14 ,0x00 ,0x00 ,0x01,
		0x10  ,0x14 ,0x0A ,0x00 ,0x00 ,0x01,
		0xA0  ,0x13 ,0x01 ,0x00 ,0x00 ,0x01,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,
		0x00  ,0x00 ,0x00 ,0x00 ,0x00 ,0x00,

	// display refresh command
	0,	0x12,
	
	// wait until ready
	0xFE, 5,
	0xFF,
	
	//VCOM AND DATA INTERVAL SETTING
	0, 0x50,
	1, 0xF7,
	
	//power off
	0, 0x02,
	0xff,
	
	//deep sleep
	0, 0x07,
	1, 0xA5,
};

const uint16_t setImage_CMD_GDEW0371W7_size = 292;

#endif //__ePaperSettings_GoodDisplay__