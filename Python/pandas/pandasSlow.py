import pandas as pd 

def expensive_operation_1(row): 
    # ... complex logic 
    return row 
def expensive_operation_2(row): 
    # ... complex logic 
    return row 

df = pd.read_csv("large_dataset.csv") 
df = df.apply(expensive_operation_1, axis=1) 
df = df.apply(expensive_operation_2, axis=1)