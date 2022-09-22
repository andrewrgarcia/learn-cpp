{
echo "# Top 10 algorithms in Interview Questions"
echo "Taken from [Geeks for Geeks](https://www.geeksforgeeks.org/top-10-algorithms-in-interview-questions/)" 
# echo "## Progress"
echo "| Section | Progress |"
echo "| -------- | --------|"
fracsum=0
for i in */
do 
    var=$( cat $i/completion )
    echo "|${i::-1} |  $var |"   
    completed=${var::-3}
    fracsum=$((fracsum+completed))
done 
echo "| TOTAL | $fracsum/80 |"

echo "## Index"
cat index
} > README.md
