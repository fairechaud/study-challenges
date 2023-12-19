# List files in a directory (sorted by size)

Bash

```
du -sh * | sort -rh
```

This command effectively lists files within the current directory, sorted by disk space usage in human-readable format (h) from largest to smallest (r).

* du -sh *:

Estimates disk usage for each file or subdirectory in the current directory.
1. -s: Summarizes instead of listing individual subdirectories.
2. -h: Displays sizes in easily understandable units (KB, MB, GB).
3. |: Pipes the output of du to the sort command.

* sort -rh:

1. Sorts the input lines in reverse (r) and human-numeric (h) order. This ensures files with larger sizes come first.

## Additional considerations:

* For absolute clarity, consider: du -sh ./* | sort -rh (includes hidden files).

* For a long list, pipe to head or tail to view top or bottom entries: du -sh * | sort -rh | head -10 (top 10 largest files).

* To list files in a specific directory, replace * with the path: du -sh /path/to/directory/* | sort -rh.


## Caveats:

* du reports apparent disk usage (considering factors like hard links) rather than exact physical space used.

* Accuracy might vary slightly for special files (devices, sockets, etc.).

**Bonus: To list directories themselves by size:**

```
du -sh */ | sort -rh
```
