$DATA << EOD
A	B	C	D	E	F
15	75	20	43	90	50
EOD

set spiderplot
set for [i=1:10] paxis i range [0:100]

set title "default spiderplot style"
plot for [i=1:5] $DATA using i title columnhead