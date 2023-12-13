# Git Exercise

This repository contains a Python project to showcase git as a tool for agile projects.

## Prerequisites

Make sure you have the following installed:

- Python (version 3.x)


## Installation

1. Clone the repository:

    ```bash
    git clone https://github.com/SofttekTec/GitExercise.git
    cd GitExercise
    ```

2. Start a virtual enviorment

    ```bash
    python -m venv venv
    ```

3. Activate the virtual enviorment

    ```bash
    .venv\Scripts\activate
    ```


4. Install dependencies:

    ```bash
    pip install -r requirements.txt
    ```

5. Add a debugger configuration to run the code

## Usage

Run the following command to execute the `main.py` script:

```bash
python main.py
```

## Test Cases

1. Install pytest as a library for testing 
    ```bash
    pip install -U pytest
    ```
2. Add a folder name tests and a file name "test_**TheNameYouWant**.py"
3. Add a test to your file "test_**TheNameYouWant**.py"
   ```python
    import unittest
    from ..main import divide_numbers

    class TestDivideNumbers(unittest.TestCase):

        def test_divide_positive_numbers(self):
            result = divide_numbers(10, 2)
            self.assertEqual(result, 5)
   
    if __name__ == "__main__":
        unittest.main()
    ```
4. Run you test
    ```bash
    pytest
    ```

## Test Cases

    ```bash
    pip install -U pytest
    ```
    Windows
    ```bash
    python -m pip freeze > requirements.txt
    python -m pip install -r requirements.txt
    ```
