touch numbers.txt
for (( a = 0; a < 150; a++ ))
do
od -An -i -N1 /dev/random >> numbers.txt
doneecho <(echo hi)