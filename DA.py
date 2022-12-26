import pandas as pd
import seaborn as sns
import numpy as np
from sklearn.impute import SimpleImputer
from sklearn.preprocessing import StandardScaler
from sklearn.pipeline import Pipeline
from sklearn.ensemble import RandomForestClassifier

# Load a CSV file into a Pandas DataFrame
df = pd.read_csv('data.csv')

# Impute missing values using the mean
imputer = SimpleImputer(strategy='mean')
df = pd.DataFrame(imputer.fit_transform(df), columns=df.columns)

# Normalize the data using the Standard Scaler
scaler = StandardScaler()
df = pd.DataFrame(scaler.fit_transform(df), columns=df.columns)

# Plot a pairplot to visualize relationships in the data
sns.pairplot(df, hue='target_column')

# Create a pipeline for training a model
pipeline = Pipeline([
    ('scaler', StandardScaler()),
    ('model', RandomForestClassifier())
])

# Split the data into training and test sets
X = df.drop('target_column', axis=1)
y = df['target_column']
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Fit the model to the training data
pipeline.fit(X_train, y_train)

# Use the model to make predictions on the test data
y_pred = pipeline.predict(X_test)

# Evaluate the model using metrics like accuracy and F1 score
accuracy = accuracy_score(y_test, y_pred)
f1 = f1_score(y_test, y_pred)
