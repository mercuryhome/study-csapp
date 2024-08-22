DATAS  SEGMENT
     MSG DB  'Hello World!',13,10,'$'

DATAS  ENDS

CODES  SEGMENT
     ASSUME  CS:CODES,DS:DATAS

START:
     MOV  AX,DATAS
     MOV  DS,AX

     LEA  DX,MSG

     MOV  AH,9
     INT  21H

     MOV  AX,4C00H
     INT  21H
CODES  ENDS
    END   START
