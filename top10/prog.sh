for i in */; do echo ${i::-1}: ; cat $i/completion; echo " "; done > progress
