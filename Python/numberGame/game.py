numbers = []

while True:
  number = int(input("Enter a number (0 to stop): "))
  if number == 0:
    break
  numbers.append(number)

# Calculate statistics
smallest = min(numbers)
biggest = max(numbers)
count = len(numbers)
sum_of_numbers = sum(numbers)

# Find most frequent number(s) efficiently
from collections import Counter

frequency_count = Counter(numbers)
most_frequent = frequency_count.most_common(1)

# Check if there are ties for most frequent
most_repeated_numbers = []
max_count = most_frequent[0][1]
for number, count in frequency_count.items():
  if count == max_count:
    most_repeated_numbers.append(number)

# Display results in a clear and user-friendly way
print("\n--- Program Statistics ---")
print(f"Number of numbers entered: {count}")
print(f"Smallest number: {smallest}")
print(f"Biggest number: {biggest}")
print(f"Sum of the numbers: {sum_of_numbers}")
print(f"Most frequently repeated number(s): {', '.join(str(num) for num in most_repeated_numbers)}")
