import json
import logging
from statistics import quantiles

def identify_promotion_eligible(file_path):
  """
  Reads a JSON file containing employee data and identifies employees eligible for promotion.

  Args:
      file_path (str): Path to the JSON file containing employee data.

  Returns:
      list: A list of tuples containing the names and new salary proposals for eligible employees.
  """

  try:
    with open(file_path) as f:
      employee_data = json.load(f)
  except FileNotFoundError:
    logging.error(f"File not found: {file_path}")
    return []
  except json.JSONDecodeError:
    logging.error(f"Error parsing JSON file: {file_path}")
    return []

  eligible_employees = []
  for employee in employee_data:
    department = employee["department"]
    years_of_experience = employee["years_of_experience"]
    salary = employee["salary"]

    if years_of_experience >= 5:
      department_salaries = [emp["salary"] for emp in employee_data if emp["department"] == department]
      tenth_percentile = quantiles(department_salaries, n=10)[0]
      if salary <= tenth_percentile:
        new_salary = salary * 1.1
        eligible_employees.append((employee["name"], new_salary))

  return eligible_employees

print(identify_promotion_eligible("candidates.json"))
