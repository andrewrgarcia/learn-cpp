cd ~/learn-cpp/top10
{
echo "# Top 10 algorithms in Interview Questions"
echo "From [Top 10 algorithms in Interview Questions by Geeks for Geeks](https://www.geeksforgeeks.org/top-10-algorithms-in-interview-questions/).

Comments made by me are in all caps. May have deleted some comments from GFG better understanding. *make_readme.sh* generates the exercise completion counter under this paragraph. To use, update the *completion* files in each exercises sub-folder and then run the .sh file. " 
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
