# Basic-AntiDebugging
Basic script for anti-debugging using assembly and the process environment block

# How does it work?
```
    1. Uses assembly to find the PEB (Process Enviorment Block)
    2. Then we find the value for the BeingDebugged value
    3. If true then we flag the program as being debugged and exit

    Pretty simple, though people can get around this quite easily,
    if they know what they're doing, it's a nice little script you can make to 
    learn more about the TEB/PEB since they are often used in Malware Development
```
