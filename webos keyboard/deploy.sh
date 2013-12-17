#!/bin/bash
 
ssh -p 5522 root@localhost 'rm -rf /usr/share/maliit/plugins/com/ubuntu/'

scp -P 5522 -r './ubuntu/' root@localhost:'/usr/share/maliit/plugins/com/'

ssh -p 5522 root@localhost systemctl restart maliit-server