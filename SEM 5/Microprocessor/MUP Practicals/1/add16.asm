.MODEL TINY
.386
.CODE
.STARTUP
    MOV     EAX,  0DEA9H
    MOV     EBX,  4FBDH
    ADD     EAX,  EBX
.EXIT
END

