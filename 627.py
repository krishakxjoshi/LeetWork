import pandas as pd

def swap_salary(salary: pd.DataFrame) -> pd.DataFrame:
    salary["sex"]=salary["sex"].str.replace("m","temp").str.replace("f","m").str.replace("temp","f")
    return salary