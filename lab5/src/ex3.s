.section .data
    x: .double 7.0         # установка значения x
    y: .double 10.0        # установка значения y
    result: .double 0.0    # переменная для результата
    format_string: .string "x = %lf, y = %lf\n"
    format_result: .string "Result: %f\n"

.section .text
    .globl _start

    .extern pow

_start:
    # Вывод x и y
    movq $format_string, %rdi  # адрес строки формата
    movsd x(%rip), %xmm0        # загрузка x в регистр xmm0
    movsd y(%rip), %xmm1        # загрузка y в регистр xmm1
    call printf                 # вызов функции printf для вывода x и y

    # Вычисление результата (атангенса)
    movsd x(%rip), %xmm0        # загрузка x в регистр xmm0
    movsd y(%rip), %xmm1        # загрузка y в регистр xmm1
    call pow                    # вызов функции atan2()
    movsd %xmm0, result(%rip)   # сохранение результата в переменной result

    # Вывод результата
    movq $format_result, %rdi   # адрес строки формата для результата
    movsd result(%rip), %xmm0   # загрузка результата в регистр xmm0
    call printf                 # вызов функции printf для вывода результата

    # завершение программы
    movq $60, %rax          # код завершения программы
    xorq %rdi, %rdi         # нет ошибок
    syscall                 # вызов прерывания
