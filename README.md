
# ❓About
An extremely customisable and minimalist competitor to neofetch how minimal may you ask well Neofetch takes roughly 4000 lines of code and 2MB while Superfetch takes only 0.021424MB and allows for faster input for the user

# 👍Installation
<p>To install Superfetch simply go into the source directory and type <code>"make -j12"</code> and change 12 to the number of threads you have</p>
<p>then you can simply run it with ./Superfetch but this only works while being in the directory so in order to change this we must edit the superfetch.cpp file now in there you will see a variable called "ASCII_FILE_LOCATION" and what you want to do is take note of the directory your in currently and replace that with ascii so instead of <code>const char* ASCII_FILE_LOCATION='ascii'</code> which would only work if you were located in the same directory as the ascii if you simply put the full path like this <code>const char* ASCII_FILE_LOCATION='/home/nm_9/mydir/ascii'</code> instead of the first one I mentioned you should now be able to display the ascii in Superfetch from any directory but hold on even though you could theoretically run it from any directory now <code>./Superfetch</code> doesn't work in other directories and the solution is this go into the directory with source file and type <code>sudo cp Superfetch /usr/bin/superfetch</code> and now you can just type <code>superfetch</code> to run it from any directory</p>

# ♻️Update
<p>In order to update your version of Superfetch you will only need one package installed which is Git once you have that we can begin now type <code>mkdir superfetch-update && cd superfetch-update && git clone https://github.com/nmUnderscore9/superfetch && cd superfetch && make -j12 && sudo cp Superfetch /usr/bin/superfetch && sudo cp ascii /etc/ascii</code> then simply copy your source file before the update from another folder and replace it with the new one and that's how you do an update on Superfetch with no data loss</p>

# 🐛Reporting Bugs
<p>Simply click on the button titled issues and try and attempt to tell us the steps to reproduce said bug but because of how minimal my software is I am doubtful I will get any actual bug reports other than from trolls </p>

