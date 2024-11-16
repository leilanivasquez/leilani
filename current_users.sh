#!/bin/bash

#create the file that you would like to put your info in
touch users.txt

# using cp to copy the contents from the passwd file to the new file
sudo cp /etc/passwd users.txt

# adds (>>; adds the date without gettiing rid of what's before it) the date(%F) and time(%T) to the file
date '+%F %T' >> users.txt

