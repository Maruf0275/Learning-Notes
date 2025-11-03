def is_safe(processes, available, max_need, allocation):
    n = len(processes)
    m = len(available)
    need = [[max_need[i][j] - allocation[i][j] for j in range(m)] for i in range(n)]
    finish = [False] * n
    safe_seq = []
    work = available[:]

    while len(safe_seq) < n:
        allocated = False
        for i in range(n):
            if not finish[i]:
                if all(need[i][j] <= work[j] for j in range(m)):
                    for j in range(m):
                        work[j] += allocation[i][j]
                    finish[i] = True
                    safe_seq.append(processes[i])
                    allocated = True
                    break
        if not allocated:
            return False, []
    return True, safe_seq


# Example Input
processes = [0, 1, 2, 3, 4]
available = [3, 3, 2]
max_need = [
    [7, 5, 3],
    [3, 2, 2],
    [9, 0, 2],
    [2, 2, 2],
    [4, 3, 3]
]
allocation = [
    [0, 1, 0],
    [2, 0, 0],
    [3, 0, 2],
    [2, 1, 1],
    [0, 0, 2]
]

safe, sequence = is_safe(processes, available, max_need, allocation)

print("System is in a safe state." if safe else "System is not in a safe state.")
if safe:
    print("Safe sequence is:", sequence)
