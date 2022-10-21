inpt = input()
scenario = 1
try:
    while inpt != '':
        l, n = inpt.strip().split(" ")
        length, num_ants = int(l), int(n)
        wood = [0 for _ in range(num_ants)]
        left = 0
        maxLeft = -1
        maxRight = -1
        for i in range(num_ants):
            pos, direction = input().strip().split(" ")
            wood[i] = int(pos)
            if direction == "L":
                left += 1
                maxLeft = max(int(pos), maxLeft)
            else:
                maxRight = max(length - int(pos), maxRight)
        wood.sort()
        specialCase = False
        seconds = 0
        outStr = "The last ant will fall down in " + str(max(maxRight, maxLeft)) + " seconds - started at "
        if maxLeft == maxRight:
            outStr += str(wood[left - 1]) + " and " + str(wood[left]) + "."
        else:
            if maxLeft > maxRight:
                outStr += str(wood[left - 1])
            else:
                outStr += str(wood[left])
        print(outStr)
        inpt = input()
        scenario += 1
except:
    pass
