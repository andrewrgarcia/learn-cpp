## Using this folder to review

The C++ files of this folder may be emptied and added individually from the above GFG site as the material is reviewed by the below protocol.

#### Reset

In a terminal under this directory

```bash
find . -name \*.cpp -type f -delete     # to remove all C++ files in all folders
for f in `find . -name \*completion`; do echo "0/10" > $f; done     # to reset the progress table to 0
./make_readme.sh    # to recompile the progress table in this README
```

#### Update

To update the _completion_ files in each exercises sub-folder and then run the .sh file.
Under any of the 8 subdirectories of the 8 data structure sections:

```bash
cat completion      # to see current progress of specific section (i.e. 1/10)
echo "X/10" > completion        # to update progress (i.e. if X = 2; it will update to 2/10)
../make_readme.sh       # to recompile the progress table in this README (note the ".." prefix instead of ".")
```
