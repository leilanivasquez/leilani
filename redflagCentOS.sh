#!/bin/bash

echo "all logins for certain user:" 
last leilanivas
echo ""
# uses last to show all the the logins for a specific user

echo "IP address that have tried to access the server:"
grep 'authentication failure' /home/leilanivas/Downloads/secure.txt
echo ""
# uses grep to search the secure file to find all the failed logins (they are stored in auth.log)

echo "all activity between midnight and 6 AM:"
awk '$3 ~ /^(00|01|02|03|04|05|06:00)/' /home/leilanivas/Downloads/messages.txt
echo "" 
# uses awk and reg ex to get all the activity between midnight and 6 am from the messages file

echo "processes that a certain user is running: "
ps -u leilanivas
echo ""
# uses ps -u to display all the processes running by a certain user (-u specifies the user)

echo "how long the system has been running:"
uptime -p
echo ""
# uses uptime to show how long the system has been running in is user friendly way (-p)
