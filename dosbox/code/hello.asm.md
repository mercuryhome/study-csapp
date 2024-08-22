在8086汇编语言中编写一个简单的"Hello world!"程序涉及到几个关键步骤：设置数据段、定义消息字符串、编写代码以显示消息、以及退出程序。以下是一个基本的示例，展示了如何在DOS环境中使用MASM（Microsoft Macro Assembler）汇编器来编写并运行一个打印"Hello world!"的程序。

请注意，这个示例假定你已经安装了某种形式的汇编器（如MASM）和链接器（如Microsoft Linker），以及一个可以运行DOS可执行文件的环境（如DOSBox或在现代Windows系统中的命令行工具）。

```asm
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
```
解释
.model small：指定内存模型为small，这在DOS环境下很常见，它限制了程序可以使用的内存段数量。
.stack 100h：为程序分配一个100h字节的堆栈空间。
.data：定义数据段，这里是字符串"Hello, world!$"的存放位置。
.code：开始代码段。
main proc 和 main endp：定义主过程（在DOS环境中，程序的入口点通常是名为main的过程）。
mov ax, @data 和 mov ds, ax：初始化数据段寄存器DS，使其指向.data段。
lea dx, hello_msg：将字符串的地址加载到DX寄存器中，因为int 21h的09h功能需要DX寄存器来存放要显示的字符串的地址。
mov ah, 09h：设置AH寄存器为09h，即选择DOS中断21h的“显示字符串”功能。
int 21h：调用DOS中断。
mov ax, 4C00h 和 int 21h：退出程序，4C00h中断服务请求DOS根据AL寄存器的值（此处为00h，表示成功）退出程序。
编译和运行
将上述代码保存为.asm文件，例如hello.asm。
使用MASM汇编器编译这个文件。例如，在命令行中运行masm hello.asm。
使用链接器（如link）生成可执行文件。例如，link hello.obj。
在DOSBox或兼容环境中运行生成的可执行文件（例如hello.exe）。
请注意，根据你的开发环境，命令和步骤可能会有所不同。