;Program: Multiplication
code segment 
assume cs : code
start: mov ax,10h
 mov bx,2h
 mul bx
 mov cx,ax
 int 21h
code ends
 end.


; Divide 16-bit unsigned by 8-bit        
mov     ax, 700               ; Load dividend      700        
mov     bl, 36                ; Load divisor DIV    36        
div     bl                    ; Divide BL       -----             
                              ; Quotient in AL      19 
                              ; Remainder in AH     16 


;Program : Display Data
data segment
 datas db 'I am an Indian $'
data ends
code segment 
assume cs:code,ds:data
 start : mov ax,data ; initializes data segment
 mov ds,ax
 lea dx,datas
 mov ah,09h
 int 21h
code ends
end start


;Program : Addition
code segment 
assume cs: code
 start : mov ax,3h
 mov bx,3h
 add ax,bx
 mov ah,4ch
 code ends
 end





;Purpose: Input a string from keyboard (STDIN)
;Program

.data
max1 db 32          ; 32 is max no. of chars that a user can type in (max possible – 255)
act1 db ?           ; actual count of keys that user types will be stored here after int has 
                    ; executed (Note this cannot exceed the value specified in max1 – 
                    ; actual keys you enter will 31 as the 32nd will be Enter key)
inp1 db  32dup(0)   ; Reserve 32 locations for input string
.code
.startup
  LEA DX,max1
  MOV AH, 0Ah
  INT 21h
  
;After the interrupt, act 1 will contain the number of characters read, and the characters themselves 
;will start at inp1 The characters will be terminated by a carriage return (ASCII code 0Dh), although 
;this will not be included in the count (Note: this will not be included in the ACT1 but you have to 
;count Enter also when you are specifying it in max1)




; Output a character to display (STD OUT)
; Program Segment

MOV DL, ‘A’
MOV AH, 02h
INT 21h

;After Interrupt is executed character ‘A’ will be displayed on the screen.


;Purpose: Output a string on display (STDOUT)
;Program

.data
str1 db ‘HELLO $’ ; all strings must terminate with ‘$’ ASCII value (24h)
.code
.startup
lea dx, str1
mov ah, 09h
int 21h

;When interrupt is executed the string “HELLO” will be displayed on screen.
;Remove the ‘$’ sign. What happens?
