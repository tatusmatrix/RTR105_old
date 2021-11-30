#set term wxt
set terminal pngcairo size 640, 480
set output "test.png"

plot [0:10] sin(x)*x
