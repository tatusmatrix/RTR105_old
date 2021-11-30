print ""
print "The range of valid RGB color component values is [0:255]"
print "This is a CHANGE in gnuplot version 5.2.
print "To adjust the color balance you can filter the individual values"
print "through a scaling function.  Here we multiply by a constant c,"
print " c > 1 to brighten, c < 1 to dim."
print ""
set size 1.0, 1.0
set origin 0.0, 0.0
set multiplot
set size 0.5,0.48
set origin 0.0,0.47
unset key
set xrange [-0.5:127.5]
set yrange [-0.5:127.5]
set tics out
set label 1 "Adjust color balance in the using spec" at 140,160 center
set title 'Lake Mendota, "or Wonk-sheck-ho-mik-la!"' offset 0,-0.5
set cbrange [*:*]
plot 'blutux.rgb' binary array=(128,128) flipy format='%uchar' using 1:2:3 with rgbimage
unset label 1
set size 0.5,0.48
set origin 0.5,0.47
set title '"Lucky I brought sunscreen."'
brighten(x) = x * 1.25
plot 'blutux.rgb' binary array=(128,128) flip=y format='%uchar' using (brighten($1)):(brighten($2)):(brighten($3)) with rgbimage
set size 0.5,0.48
set origin 0.0,0.0
set title 'Sunset on the Terrace'
dim(x) = x * 255./400.
plot 'blutux.rgb' binary array=(128,128) flip=y format='%uchar' using ($1):(dim($2)):(dim($3)) with rgbimage
set size 0.5,0.48
set origin 0.5,0.0
set title 'Sultry evening'
#set cbrange [0:400]
plot 'blutux.rgb' binary array=(128,128) flip=y format='%uchar' using ($1 * 255./400.):($2 * 255./400.):($3 * 255./400.) with rgbimage, \
'-' w points pt 7 ps 6 lt -2, \
 '-' w points pt 7 ps 0.65 lt -2
110 100
e
10 95
38 120
82 102
26 82
93 108
41 99
123 84
e
unset multiplot