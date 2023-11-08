import pandas as pd 
from concurrent.futures import ProcessPoolExecutor 

def expensive_operation_1(df): 
    # ... complex logic 
    # return df 

def expensive_operation_2(df): 
    # ... complex logic 
    return df 

def parallel_apply(df, func): n_partitions = 4 
    # Number of CPU cores 
    df_split = np.array_split(df, n_partitions) with ProcessPoolExecutor() as executor: df = pd.concat(executor.map(func, df_split)) 
    return df 

df = pd.read_csv("large_dataset.csv") 
df = parallel_apply(df, expensive_operation_1) 
df = parallel_apply(df, expensive_operation_2)