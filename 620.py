import pandas as pd

def not_boring_movies(cinema: pd.DataFrame) -> pd.DataFrame:
    df = cinema.loc[(cinema['id'] % 2 != 0) & (cinema['description'] != 'boring'),['id', 'movie', 'description', 'rating']]
    df = df.sort_values(by='rating', ascending=False)
    return df
