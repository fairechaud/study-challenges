#O(n**2)
def find_pairs_with_sum(data, target_sum):
  """
  Finds all pairs in a list whose sum is equal to a given target sum.

  Args:
    data: A list of numbers.
    target_sum: The desired sum of the pairs.

  Returns:
    A list of tuples containing the pairs whose sum is equal to the target sum.
  """
  pairs = []
  for i in range(len(data)):
    for j in range(i + 1, len(data)):
      if data[i] + data[j] == target_sum:
        pairs.append((data[i], data[j]))
  return pairs

# Example usage
data = [1, 5, 7, -1, 5]
target_sum = 6

pairs = find_pairs_with_sum(data, target_sum)
print(f"Pairs with sum {target_sum}: {pairs}")



