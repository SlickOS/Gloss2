//===========================================================================//
// GLOSS - Generic Loader for Operating System Software                      //
// An extensible and configurable bootloader.                                //
//---------------------------------------------------------------------------//
// Copyright (C) 2013-2016 ~ Adrian J. Collado     <acollado@polaritech.com> //
// All Rights Reserved                                                       //
//===========================================================================//

// Seeing as how AT&T syntax is much more obscure and difficult to read (IMO)
// than Intel syntax, the assembly language code in this project for x86 based
// architectures will be using Intel syntax.
.intel_syntax noprefix

// This code will be executed in a 64 bit long mode environment.
.code64

// This code is located in the .TEXT (executable) section of the executable.
.section .text

.global AMD64_Console_PrintHex16
AMD64_Console_PrintHex16:
.global AMD64.Console.PrintHex16
AMD64.Console.PrintHex16:
    push rax
    push rbx
    push rcx
    push rdx
    push rdi

    mov rdi, 0x30
    call AMD64.Console.PutChar
    mov rdi, 0x78
    call AMD64.Console.PutChar

    mov cl, 0x0C

    AMD64.Console.PrintHex16.PrintDigit:
        mov rax, rsi
        mov rbx, 0x0F
        shl rbx, cl
        and rax, rbx
        shr rax, cl

        mov rdi, rax
        call AMD64.Console.PrintHexDigit

        mov dl, cl
        sub cl, 0x04
        test dl, dl
        jnz AMD64.Console.PrintHex16.PrintDigit

    pop rdi
    pop rdx
    pop rcx
    pop rbx
    pop rax
    ret
    