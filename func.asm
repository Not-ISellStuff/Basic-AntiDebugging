.code

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


FetchPEB proc
    mov rax, gs:[60h]
    ret
FetchPEB endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


IsBeingDebuggedQuestionMark proc
    xor eax, eax
    call FetchPEB
    movzx eax, byte ptr[rax + 2h]
    ret
IsBeingDebuggedQuestionMark endp


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

end
