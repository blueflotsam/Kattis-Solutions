line = ""
row1 = {"1": "    +", "2": "+---+", "4": "+   +", "3": "+---+", "5": "+---+", "6": "+---+", "7": "+---+", "8": "+---+",
        "9": "+---+", "0": "+---+", }
row2_3 = {"1": "    |", "4": "|   |", "6": "|    ", "2": "    |", "3": "    |", "7": "    |", "9": "|   |",
          "0": "|   |", "8": "|   |", "5": "|    "}
row4 = {"1": "    +", "2": "+---+", "0": "+   +", "7": "    +", "3": "+---+", "4": "+---+", "5": "+---+", "6": "+---+",
        "8": "+---+", "9": "+---+"}
row5_6 = {"1": "    |", "2": "|    ", "8": "|   |", "3": "    |", "4": "    |", "5": "    |", "7": "    |",
          "9": "    |", "0": "|   |", "6": "|   |"}
row7 = {"1": "    +", "2": "+---+", "7": "    +", "4": "    +", "3": "+---+", "5": "+---+", "6": "+---+", "8": "+---+",
        "9": "+---+", "0": "+---+"}
while True:
    line = input()
    if line == "end":
        break
    line = line.split(":")
    outputline = row1[line[0][0]] + "  " + row1[line[0][1]] + "     " + row1[line[1][0]] + "  " + row1[line[1][1]] + "\n"
    outputline += row2_3[line[0][0]] + "  " + row2_3[line[0][1]] + "     " + row2_3[line[1][0]] + "  " + row2_3[line[1][1]] + "\n"
    outputline += row2_3[line[0][0]] + "  " + row2_3[line[0][1]] + "  o  " + row2_3[line[1][0]] + "  " + row2_3[line[1][1]] + "\n"
    outputline += row4[line[0][0]] + "  " + row4[line[0][1]] + "     " + row4[line[1][0]] + "  " + row4[line[1][1]] + "\n"
    outputline += row5_6[line[0][0]] + "  " + row5_6[line[0][1]] + "  o  " + row5_6[line[1][0]] + "  " + row5_6[line[1][1]] + "\n"
    outputline += row5_6[line[0][0]] + "  " + row5_6[line[0][1]] + "     " + row5_6[line[1][0]] + "  " + row5_6[line[1][1]] + "\n"
    outputline += row7[line[0][0]] + "  " + row7[line[0][1]] + "     " + row7[line[1][0]] + "  " + row7[line[1][1]] + "\n\n"
    print(outputline)
print("end")