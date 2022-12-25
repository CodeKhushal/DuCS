.DATA

INMSG1 db 13, 10, "Enter the first number(32 Bit): $"
.CODE
.STARTUP

; INPUT - FIRST 32-bit NUMBER

	; Print 'INMSG1'
	MOV DX, OFFSET INMSG1 ; DX <- Address of msg
	MOV AH, 09 ; 09 - Print string to stdout w/ echo
	INT 21H ; Interrupt - Application specific
