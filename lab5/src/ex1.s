.data
        msg:
        .string "Группа: ПМ-32 \nКоманда №2 \nСостав: Каранкевич M., Комбаров Д., Комольцева Д.\n"
.LC0:
        .string "russian"
.text
.globl main
main:
        sub $8, %rsp
        lea msg(%rip), %rdi
        mov $0, %al
        call puts 
        add $8, %rsp
        xor %eax, %eax
        ret
