/*ESP32 WROOM MODULE 
/*SSD1306 SCREEN
/*ROTARY ENCODER 
/*PCM5102 SOUND MODULE DAC

/*Myoptions file below 

#ifndef myoptions_h
#define myoptions_h

#define DSP_MODEL           DSP_SSD1306
#define PLAYER_FORCE_MONO   true
#define ENC_BTNR            33
#define ENC_BTNL            34
#define ENC_BTNB            35
#define HALFQUARD           true
#define I2S_DOUT            2
#define IS2_BCLK            4
#define I2S_LRC             15

#endif

/*Notes

/*Encoder Setup (Rotary Enc / Push Button)
/*Internal pull-up (Yes)
/*Halfquard (Yes)
/*Pin 33 - Orange wire - CLK 
/*Pin 34 - Yellow wire - DT
/*Pin 35 - Brown wire - SW

/*Screen (SSD1306)
/*GND - Black Wire - Shared GND
/*VCC - Red Wire - Shared 3.3v
/*SCL - Orange Wire - Pin 22
/*SDA - Yellow Wire - Pin 21

/*PCM5102 (Sound Module)
/*VIN - Red Wire - Shared 3.3v
/*GND - Black Wire - Shared GND
/*L/RCK - Green Wire - Pin 15
/*DIN - Orange Wire - Pin 2
/*BCK - Yellow Wire - Pin 4

/* PCM5102 Notes 

/*The tabs at the back needs to be soldered as follows

/*H2L - Centre Pad + Right Pad
/*H1L - Centre Pad + Right Pad
/*H4L - Centre Pad + Right Pad
/*H3L - Centre Pad + Left Pad

/*Front of board solder pads as follows
/* SCK + BCK (Solder both pads to join them together )

