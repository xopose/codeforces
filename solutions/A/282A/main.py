line = int(input())
args = []

for i in range(line):
    args.append(input().split())
counter = 0

for i in range(len(args)):
    for j in range(len(args[i])):
        if args[i][j][1] == '+':
            counter += 1
        else:
            counter -= 1

print(counter)
