"movw $1, %dx\n"
"cmpb $1, %al\n"
"jbe factorial_end\n"
"xorb %ah, %ah\n"
"movw %ax, %dx\n"
"decb %al\n"
"factorial_loop:\n"
"imulw %ax, %dx\n"
"decb %al\n"
"jnz factorial_loop\n"
"factorial_end:\n"