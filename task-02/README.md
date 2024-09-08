This task was tricky because of the limited instruction but were able to complete it.

**Part 1**
`git clone` - To clone the repo into the local repo.
`vim handbook` - To create the handbook file as instructed.
`ls` and `cd` - To find the cloned directory and get into it.

Got into another directory named 'Eolian caves' and did tree. Before tree was not intalled so I installed and then did
`tree` - The get the directories and sub-directories within the working directory.

Using tree I found out file named 'Parchment.txt' and did
`cat` - To view the content of the text file. 
From catting I found the *_code_*. Then added it to the handbook.

**Part 2**
`git branch` - To get the existing branches.
`git checkout The-Light-Realm` - To switch to specified branch.

Did a 'tree' again to find 'KharnokTheBloodForged.py'
Then this the part where I spent most of my time in find the grep command to find the file with both 'good' and 'holy', which I ended up never succeding and hence I did:
`grep -rl holy` - To find the files with the word holy. 
`grep -rl good` - To find the files with the word good.
and manually compared both the output and found those files.

Then I combined both the filename, used a online website to encode them into ceaesr cipher with -1 and finally remove the vowels to get the code.

Then ran the python script. Then there appeared the file named 'Celestial Veil Amulet.txt' which contained the code.

**Part 3**

Switched the branch to 'The-Dark-Realm-I' 
Ran `tree` found 'chest1.py' 
Ran the script, entered the amulet.
Another file named 'DarkBookI.txt' was created which had another code.

Switched the branch to 'The-Dark-Realm-II' 
Ran `tree` found 'chest2.py' 
Ran the script, entered the code got from previous chest.
Another file named 'DarkBookII.txt' was created which had another code.

**Part 4**
`echo "aHR0cHM6Ly9naXRodWIuY29tL2FtYW5zeGNhbGlidXIvVGVybWluYWwtQ2hhb3MtR29kU3VpdGU=" | base64 -d` - To decode base64

Through decoding I got a github repo link. Checked the commit to find a code.

**Part 5**

`base64 -d <<< "aHR0cHM6Ly9naXRodWIuY29tL2FuZ3JlemljaGF0dGVyYm94L1RvLXRoZS1zdGFycy1hbmQtcmVhbG1zLXVuc2Vlbg=="` - This gave another repo

cloned the repo and ran victory.py to get victory message.


