# Python Wrangling | 10 points
Tags: General skills

## Description
Python scripts are invoked kind of like programs in the Terminal... 
Can you run this Python script using this password to get the flag?

## STEPS

1. `cat flag.txt.en` -> `gAAAAABgUAIV8D5MJdzgLLTkkMlbU84ARVwfX4brMt2rJQCjkpLItytfWVZe1L2dp4K8VrKgRU3axStKJEAqcM0iDaxiYE54Boh8UfAAo1RNifKnlDrFz0gLaznVSFVj2xAUa4V35180`
2. `cat pw.txt` -> `68f88f9368f88f9368f88f9368f88f93`
3. `cat ende.py`
``` py
import sys
import base64
from cryptography.fernet import Fernet



usage_msg = "Usage: "+ sys.argv[0] +" (-e/-d) [file]"
help_msg = usage_msg + "\n" +\
        "Examples:\n" +\
        "  To decrypt a file named 'pole.txt', do: " +\
        "'$ python "+ sys.argv[0] +" -d pole.txt'\n"



if len(sys.argv) < 2 or len(sys.argv) > 4:
    print(usage_msg)
    sys.exit(1)



if sys.argv[1] == "-e":
    if len(sys.argv) < 4:
        sim_sala_bim = input("Please enter the password:")
    else:
        sim_sala_bim = sys.argv[3]

    ssb_b64 = base64.b64encode(sim_sala_bim.encode())
    c = Fernet(ssb_b64)

    with open(sys.argv[2], "rb") as f:
        data = f.read()
        data_c = c.encrypt(data)
        sys.stdout.write(data_c.decode())


elif sys.argv[1] == "-d":
    if len(sys.argv) < 4:
        sim_sala_bim = input("Please enter the password:")
    else:
        sim_sala_bim = sys.argv[3]

    ssb_b64 = base64.b64encode(sim_sala_bim.encode())
    c = Fernet(ssb_b64)

    with open(sys.argv[2], "r") as f:
        data = f.read()
        data_c = c.decrypt(data.encode())
        sys.stdout.buffer.write(data_c)


elif sys.argv[1] == "-h" or sys.argv[1] == "--help":
    print(help_msg)
    sys.exit(1)


else:
    print("Unrecognized first argument: "+ sys.argv[1])
    print("Please use '-e', '-d', or '-h'.")
```
4. `ls -la` -> `-rw-r--r--  1 kali kali 1328 Mar 20 22:37 ende.py`
5. `chmod 777 ende.py `
6. `./ende.py`
```
./ende.py: 2: import: not found
./ende.py: 3: import: not found
./ende.py: 4: from: not found
./ende.py: 8: usage_msg: not found
./ende.py: 9: help_msg: not found
./ende.py: 16: Syntax error: word unexpected (expecting ")")
```
7. Write this on the first line : `#!/usr/bin/python` [source](https://stackoverflow.com/questions/22275350/xx-py-line-1-import-command-not-found)
8. `./ende.py` -> `Usage: ./ende.py (-e/-d) [file]`
9. `./ende.py -d flag.txt.en` -> `Please enter the password:`
10. `68f88f9368f88f9368f88f9368f88f93`
11. FLAG : `picoCTF{4p0110_1n_7h3_h0us3_68f88f93}`
