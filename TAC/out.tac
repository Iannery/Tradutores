.table
int a_1
int b_1
int c_1
int c_2
int d_2
int a_3
int b_3
int c_3
char _str1[] = "Digite um numero:"
int _str1_size = 17
char _str2[] = "Aqui printa 11 menos o seu numero:"
int _str2_size = 34
char _str3[] = "E aqui printa 2 vezes o seu numero:"
int _str3_size = 35
.code


//write strings char by char
_writeStr:
mov $1000, 0
next_byte:
mov $999, #1
mov $999, $999[$1000]
print $999
sub $999, $1000, #0
add $1000, $1000, 1
brnz next_byte, $999
return 0

_writelnStr:
call _writeStr, 2
println
return 0

_retorna11:
mov a_1, 1
mov b_1, 2
mov c_1, 5
mul $0, b_1, c_1
add $1, a_1, $0
return $1
return 0

_retorna2:
sleq $2, 1, 2
not $2, $2
mov d_2, $2
not $3, d_2
mov d_2, $3
sleq $4, 5, 6
mov c_2, $4
add $5, d_2, c_2
return $5
return 0

_main:
param _str1_size
mov $998, &_str1
param $998
call _writelnStr, 2
scani a_3
call _retorna11, 0
pop $6
mov b_3, $6
call _retorna2, 0
pop $7
mov c_3, $7
param _str2_size
mov $998, &_str2
param $998
call _writelnStr, 2
sub $8, b_3, a_3
println $8
param _str3_size
mov $998, &_str3
param $998
call _writelnStr, 2
mul $9, c_3, a_3
println $9
return 0
return 0

main:
call _main, 0
