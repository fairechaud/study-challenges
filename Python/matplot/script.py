import pandas as pd
import matplotlib.pyplot as plt

data = {
    "product": ["Apple", "Oranges", "Lemon", "Mango", "Grapes"], 
    "quantity": [137, 85, 41, 89, 175], 
    "price": [56, 42, 70, 43, 83], 
    "sale_off_perc": [0.06, 0.36, 0.17, 0.14, 0.32], 
    "sale_off_price": [52.64, 26.88, 58.1, 36.98, 56.44], 
    "Total_cost": [7672, 3570, 2870, 3827, 14525], 
    "Type": ["Local", "Local", "Foreign", "Foreign", "Foreign"]
}

df = pd.DataFrame(data)

plt.figure(figsize=(8, 6))
plt.bar(df["product"], df["price"], label = "Normal Price")
plt.bar(df["product"], df["sale_off_price"], label = "Sale Price")

plt.title("Price of Fruits: Normal vs. Sale")
plt.xlabel("Product")
plt.ylabel("Price")
plt.xticks(rotation=45, ha="right", rotation_mode="anchor")
plt.tight_layout()
plt.legend()

plt.show()