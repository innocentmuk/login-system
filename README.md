markdown
# 🔐 Simple Login System

A C++ authentication simulation using username and password verification with nested if statements.

## 📋 Description
Simulates a login system with predefined credentials:
- **Username:** `admin`
- **Password:** `1234`

## 🚀 Features
- Username and password input handling
- Nested authentication logic
- Specific error messages for different failure cases
- Secure credential verification

## 🛠️ Technologies
- C++
- String handling for usernames
- Integer input for passwords
- Nested conditional statements
- Input validation

## 📥 Compilation & Usage
```bash
g++ -o login_system main.cpp
./login_system
🎯 Example Output
text
Enter your username: admin
Enter your password: 1234
Login successful.

Enter your username: admin  
Enter your password: 0000
Incorrect password.

Enter your username: user
Enter your password: 1234
Unknown user.
🧠 Skills Practiced
String comparison and validation

Nested authentication logic

User input handling with getline()

Specific error message handling

Conditional statement nesting

📊 Project Structure
text
login-system/
├── main.cpp          # Main authentication program
├── README.md         # Project documentation
└── .gitignore        # Git ignore file for C++
🔧 Future Improvements
Add multiple user accounts

Implement password masking (***)

Add login attempt limits

Store credentials in a file

Add password encryption

⚠️ Note
This is a learning simulation with hardcoded credentials. In real applications, never store passwords in plain text in code.

👨‍💻 About the Developer
Building foundational C++ skills through practical authentication system implementation
