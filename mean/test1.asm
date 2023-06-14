main:
        push    ebp
        mov     ebp, esp
        sub     esp, 4016
        mov     DWORD PTR [ebp-3116], 10
        mov     eax, DWORD PTR [ebp-3116]
        mov     DWORD PTR [ebp-4], eax
.L4:
        cmp     DWORD PTR [ebp-4], 0
        jle     .L2
        sub     DWORD PTR [ebp-4], 1
        cmp     DWORD PTR [ebp-4], 5
        je      .L6
        jmp     .L4
.L6:
        nop
.L2:
        mov     eax, DWORD PTR [ebp-4]
        leave
        ret