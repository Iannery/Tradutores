.table
int a_1
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

_main:
mov a_1, 10
println a_1
return 0
return 0

main:
call _main, 0
