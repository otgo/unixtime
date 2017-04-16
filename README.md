# unixtime
Advanced format of C programming, UNIX time to bash.

Clone with: `https://github.com/otgo/unixtime`

Usage: `./unixtime "format string" UNIXTIME`

Examples:
```bash
user@host:~/unixtime$ unixtime
1492322763

user@host:~/unixtime$ unixtime "The year is %Y"
The year is 2017

user@host:~/unixtime$ unixtime "Today is %d"
Today is 16

user@host:~/unixtime$ unixtime "Hour: %H"
Hour: 01

user@host:~/unixtime$ unixtime "%c"
Sun Apr 16 01:06:19 2017

user@host:~/unixtime$ unixtime "TIME: %c" 1492322763
TIME: Sun Apr 16 01:06:03 2017

user@host:~/unixtime$ unixtime "TIME: %c" 1492322
TIME: Sun Jan 18 00:32:02 1970
```

Install: `sudo cp unixtime /usr/bin`



|Format|            Usage                       | 
|----|------------------------------------------|
| %a | abbreviated weekday name (e.g., Wed)     |
| %A | full weekday name (e.g., Wednesday)      |
| %b | abbreviated month name (e.g., Sep)       |
| %B | full month name (e.g., September)        |
| %c | date and time (e.g., 09/16/98 23:48:10)  |
| %d | day of the month (16) [01-31]            |
| %H | hour, using a 24-hour clock (23) [00-23] |
| %I | hour, using a 12-hour clock (11) [01-12] |
| %M | minute (48) [00-59]                      |
| %m | month (09) [01-12]                       |
| %p | either "am" or "pm" (pm)                 |
| %S | second (10) [00-61]                      |
| %w | weekday (3) [0-6 = Sunday-Saturday]      |
| %x | date (e.g., 09/16/98)                    |
| %X | time (e.g., 23:48:10)                    |
| %Y | full year (1998)                         |
| %y | two-digit year (98) [00-99]              |
| %% | the character `%`                        |


Taken from https://www.lua.org/pil/22.1.html
