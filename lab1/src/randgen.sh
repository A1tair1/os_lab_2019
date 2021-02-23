touch numbers.txt
for (( a = 0; a < 150; a++ ))
do
od -A n -t d -N 1 /dev/random >> numbers.txt
doneecho <(echo hi)