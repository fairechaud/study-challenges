# Linux command to see logged-in users:


There are several Linux commands you can use to see logged-in users, each with slightly different information displayed:

1. who:

This is the simplest and most common command. It displays the username, terminal, login date and time, and IP address (for remote users) for all currently logged-in users.

Code snippet
who
Use code with caution. Learn more
2. w:

This command provides more detailed information about logged-in users, including their processes, CPU usage, and memory usage. The output includes a header with the current time, system uptime, number of users, and load average.

Code snippet
w
Use code with caution. Learn more
3. users:

This command simply displays a list of usernames for all currently logged-in users.

Code snippet
users
Use code with caution. Learn more
4. whoami:

This command doesn't show you other users, but instead tells you who you are currently logged in as.

Code snippet
whoami
Use code with caution. Learn more
Here is a table summarizing the differences between these commands:

5. ps aux: This command lists all running processes, including those for logged-in users. You can filter the output by user with grep, for example: ps aux | grep user1.

Here's a quick comparison:
Command	Information Displayed
who	Username, terminal, login time, IP address (remote users)
w	Username, terminal, login time, IP address (remote users), processes, CPU usage, memory usage
users	Username
whoami	Current username
In most cases, the who command is sufficient for quickly seeing who is logged in. However, if you need more detailed information about user activity, the w command is a better choice.
