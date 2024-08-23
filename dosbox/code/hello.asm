.model small
.stack 100h

.data
    hello_msg db 'Hello, world!$'  ; 定义字符串，$ 是字符串的结束符

.code
main proc
    mov ax, @data        ; 初始化数据段
    mov ds, ax

    ; 显示字符串
    lea dx, hello_msg    ; 加载字符串地址到DX
    mov ah, 09h          ; DOS 功能号 09h (显示字符串)
    int 21h              ; 调用DOS中断

    ; 结束程序
    mov ax, 4C00h        ; 退出代码
    int 21h              ; 调用DOS中断
main endp
end main