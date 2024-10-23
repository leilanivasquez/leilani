#!/bin/bash

DATE=$(date +"%Y-%m-%d_%H-%M-%S")
#date

FILE= touch "$HOME/Desktop/network_info_$DATE.txt"


#creates file and stores it on the desktop

function ip_info() {
	echo "IP Addresses:"
	ip addr show
	echo ""
}
#function using ip addr show to get ip address and prints it

function dns_info() {
	echo "DNS Configuation:"
	cat /etc/resolv.conf
	echo ""
}
#function using cat to show DNS, which is in the resolv.conf

function ports_info() {
	echo "Open Ports:"
	sudo netstat -tuln
	echo ""
}
# shows TCP connections (t), UDP connections (u), listening ports (l), and their names (n).

function firewall_info() {
	echo "Firewall status:"
	sudo ufw status
	echo ""
}
{
	echo "$DATE Network Info:"
	
	ip_info
	dns_info
	ports_info
	firewall_info 
} | tee "$FILE"
	#shows all info by running the functions

#tee displays the info and saves it to the file
