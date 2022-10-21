def inversion_counter(input_seq: str):
    num_inversions = 0
    found_zero = False
    pointer = 0
    # num_inversions += len(front)
    input_seq = input_seq[min(input_seq.index("1"), input_seq.index("?"))]
    while not found_zero:
        if pointer == len(input_seq):
            pointer = 0
        if pointer != 0 and input_seq[pointer] == '0' and input_seq[pointer - 1] == '1':
            front = sequence[:]


if __name__ == '__main__':
    sequence = "11010?"  # input()

    for i in range(len(sequence)):
        print(i, sequence[i])
