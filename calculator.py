# Result Calculator - Python Version
# By Believe Thompson - Computer Engineering

name = input("Enter student name: ")
num_subjects = int(input("Enter number of subjects: "))

total = 0
for i in range(1, num_subjects + 1):
    marks = float(input(f"Enter marks for subject {i}: "))
    total += marks

average = total / num_subjects

# Grading
if average >= 70:
    grade = 'A - First Class'
elif average >= 60:
    grade = 'B - Second Class Upper'
elif average >= 50:
    grade = 'C - Second Class Lower'
else:
    grade = 'F - Fail'

# Show result
print("\n--- RESULT ---")
print(f"Name: {name}")
print(f"Total: {total}")
print(f"Average: {average:.2f}")
print(f"Grade: {grade}")

# Save to file
with open("result_python.txt", "w") as file:
    file.write(f"--- RESULT ---\n")
    file.write(f"Name: {name}\n")
    file.write(f"Total: {total}\n")
    file.write(f"Average: {average:.2f}\n")
    file.write(f"Grade: {grade}\n")

print("\n✅ Result saved to result_python.txt")