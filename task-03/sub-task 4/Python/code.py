with open('/home/abinav/git/amfoss-tasks/task-03/sub-task 4/input.txt', 'r') as file:
    n = int(file.read().strip())

with open("/home/abinav/git/amfoss-tasks/task-03/sub-task 4/Python/output.txt", "w") as outfile:
    for i in range((n + 1) // 2):
        outfile.write(" " * ((n // 2) - i) + "*" * (2 * i + 1) + "\n")
    for i in range((n // 2) - 1, -1, -1):
        outfile.write(" " * ((n // 2) - i) + "*" * (2 * i + 1) + "\n")

