echo 'Downloading latest version...'
sleep 1.5
mkdir superfetch-update && cd superfetch-update && sleep 3 &&  git clone https://github.com/nmUnderscore9/superfetch && cd superfetch && make -j12 

echo '[PROTIP] copy the code inside your previous configuration into the new one and delete all files in the previous version folder'
