## Using this folder to review algorithms in C++

To keep a record of your progress you may use Git as a version control protocol, which would begin by [forking](https://docs.github.com/en/get-started/quickstart/fork-a-repo) the [main repository](https://github.com/andrewrgarcia/learn-cpp). After forking, you may clone it by copying the `SSH` or `HTTPS` address for your fork and [cloning it](https://git-scm.com/book/en/v2/Git-Basics-Getting-a-Git-Repository) with a `git clone` command. The `.cpp` files of this folder may be emptied and added individually from the [GFG "Top 10" site](https://www.geeksforgeeks.org/top-10-algorithms-in-interview-questions/) as the material is reviewed by the below protocol.

#### Reset Content

This will remove all `.cpp` files from the folders in this directory and reset the progress table counter to "0/10" for all topics. In a terminal under this directory:

```bash
find . -name \*.cpp -type f -delete     # to remove all C++ files in all folders
for f in `find . -name \*completion`; do echo "0/10" > $f; done     # to reset the progress table to 0
./make_readme.sh    # to recompile the progress table in this README
```

#### Update

To update the `completion` files in each exercises sub-folder and then run the .sh file.
Under any of the 8 subdirectories of the 8 data structure sections:

```bash
cat completion      # to see current progress of specific section (i.e. 1/10)
echo "X/10" > completion        # to update progress (i.e. if X = 2; it will update to 2/10)
../make_readme.sh       # to recompile the progress table in this README (note the ".." prefix instead of ".")
```
