#!/bin/bash
 
tar -cvf /home/parallels/backup.tar /home/parallels/sampleauthlog.txt /home/parallels/samplesyslog.txt /home/parallels/Documents /home/parallels/Downloads /home/parallels/Pictures /home/parallels/Desktop /home/parallels/Videos

# using the tar command to essentially create (-c) a zipped (-v) file (-f) and put a copy of (a) file(s) of your choice into the new zipped file

# For whatever reason I don't have log files on my VM so I had to create a few of my own to show that my script works. If I did have log files I would change the path of the samples to the path of the actual ones
