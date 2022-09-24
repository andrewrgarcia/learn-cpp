{
echo "# Top 10 algorithms in Interview Questions"
echo "Taken from [Geeks for Geeks](https://www.geeksforgeeks.org/top-10-algorithms-in-interview-questions/)" 
# echo "## Progress"
echo "| Section | Progress | Progress Bar |"
echo "| -------- | --------| --------|"
fracsum=0
for i in */
do 
    var=$( cat $i/completion )
    completed=${var::-3}
    END=$(($completed))
    echo -n "|${i::-1} |  $var | " 
    for i in $(seq 1 $END)
    do
        echo -n ':white_square_button:'
    done
    echo
    fracsum=$((fracsum+completed))
done 
echo "| TOTAL | $fracsum/80 |   |"

echo "## Index"
cat index
} > README.md
# $(seq 1 $END)