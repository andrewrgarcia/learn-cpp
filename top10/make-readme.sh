{
echo "# Top 10 algorithms in Interview Questions"
echo "Taken from [Geeks for Geeks](https://www.geeksforgeeks.org/top-10-algorithms-in-interview-questions/)" 
# echo "## Progress"
echo "| Section | Progress |"
echo "| -------- | --------|"
for i in */


do 
    var=$( cat $i/completion )
    echo "|${i::-1} |  $var |"   
    # cat $i/completion
    # echo " "
done 

echo "## Index"
cat index
} > README.md
