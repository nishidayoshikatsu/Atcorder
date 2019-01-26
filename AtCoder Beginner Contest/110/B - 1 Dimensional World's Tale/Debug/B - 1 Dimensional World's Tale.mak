#-------------------------------------------------------
# BCC Developer 1.2.21
# Copyright (C) 2003 jun_miura@hi-ho.ne.jp
#-------------------------------------------------------
.autodepend
CC=bcc32
RC=brc32
CFLAG=-WC  -3 -Od -w- -AT -pc -H- -k -b -v -y  -DDEBUG
OUTDIR=-nDebug
CINCS=
TARGET="Debug\B - 1 Dimensional World's Tale.exe"
SRC1="C:\Users\ãgçé\Desktop\AtCoder\AtCoder Beginner Contest\110\B - 1 Dimensional World's Tale\B - 1 Dimensional World's Tale.cpp"
OBJ1="Debug\B - 1 Dimensional World's Tale.obj"

TARGET: $(TARGET)

$(TARGET): $(OBJ1)
    $(CC) $(CFLAG) -e$(TARGET) $(OBJ1)

$(OBJ1): $(SRC1)
    $(CC) $(CFLAG) $(OUTDIR) $(CINCS) -c $(SRC1)
