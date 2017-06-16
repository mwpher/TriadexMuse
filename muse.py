
# init variables

import sys

IntA = IntB = IntC = IntD = ThemeA = ThemeB = ThemeC = ThemeD = 0

clock = 0

Sliders = [0, 1, "CH", "C1", "C2",
    "C4", "C8", "C3", "C5", "B1",
    "B2", "B3", "B4", "B5", "B6",
    "B7", "B8", "B9", "B10", "B11", 
    "B12", "B13", "B14", "B15", "B16",
    "B17", "B18", "B19", "B20", "B21",
    "B22", "B23", "B24", "B25", "B26",
    "B27", "B28", "B29", "B30", "B31"]

def GetBit(slider):
    if slider == 0: return 0
    elif slider == 1: return 1
    elif slider == "CH":
      return clock & 1
    elif slider == "C1":
      return (clock & 2) >> 1
    elif slider == "C2":
      return (clock & 4) >> 2
    elif slider == "C4":
      return (clock & 8) >> 3
    elif slider == "C8":
      return (clock & 16) >> 4
    elif slider == "C3":
      return int(clock / 3) % 2
    elif slider == "C6":
      return int(clock >= 6)
    elif (slider >= 9) and (slider <= 39):
      print ("do later")
    else:
      print("Not defined! " + slider)

clock = int(sys.argv[1])
print GetBit(Sliders[int(sys.argv[2])])
