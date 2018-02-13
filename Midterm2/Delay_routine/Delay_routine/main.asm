;
; Delay_routine.asm
;
; Created: 1/29/2018 12:43:10 PM
; Author : venkim
;


;
; Delay 8 000 000 cycles
; 1s at 8.0 MHz
.cseg
start:
                 LDI   R16, 5 
Again:           LDI   R17, 4
Here:            DEC   R17
                 NOP
                 BRNE  Here
                 DEC   R16
                 NOP
                 BRNE  Again
                 NOP
                 NOP