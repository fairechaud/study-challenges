import time

def generate_squares(n):
    for i in range(n):
        yield i * i

def calculate_squares(n):
    squares = []
    for i in range(n):
        squares.append(i * i)
    return squares

# Example usage
start_time = time.time()
generate_squares(1000000)  # Generator
end_time = time.time()
print("Generator execution time:", end_time - start_time)

start_time = time.time()
calculate_squares(1000000)  # Traditional iterator
end_time = time.time()
print("Traditional method execution time:", end_time - start_time)
