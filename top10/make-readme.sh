cd ~/learn-cpp/top10
{
cat README-top.md

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
percentage=$((fracsum*100/80))
# echo -n "| TOTAL | $fracsum/80 | "    # fraction complete
echo -n "| TOTAL | $percentage% | "     # express in percentage instead
TOTAL_FLOOR=$((fracsum*10/80))
for i in $(seq 1 $TOTAL_FLOOR )
do
    echo -n ':black_circle:'
done
for i in $(seq 1 $((10-TOTAL_FLOOR)) )
do
    echo -n ':white_circle:'
done

echo  " |"

echo "## Index"
cat index
} > README.md
# $(seq 1 $END)
