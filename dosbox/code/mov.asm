assume cs:codesg   ;表示codesg在代码段
codesg segment     ;自定义一个叫codesg的段
    mov ax,0123H    ;代码
    mov bx,0456H
    add ax,bx
codesg ends        ;标记为自定义段结束
end                ;标记为程序结束
