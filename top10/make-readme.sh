{
echo "# Top 10 algorithms in Interview Questions"
echo "Taken from [Geeks for Geeks](https://www.geeksforgeeks.org/top-10-algorithms-in-interview-questions/)" 
echo "## Progress"
for i in */; do echo "#### ${i::-1}:" ; cat $i/completion; echo " "; done 
echo "## Index"
cat index
} > README.md
