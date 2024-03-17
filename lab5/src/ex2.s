.text
.globl main
main:
    # sub $2, %rsp # short
    # sub $4, %rsp # int
    # sub $8, %rsp # long long
    # sub $4, %rsp # float
    # sub $8, %rsp # double

    # lea (%rsp), %rdi   
    # lea (%rip), %rsi  
    # call scanf
    xor %eax, %eax
    ret
