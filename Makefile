OS = Windows
BIN = debug

SRC_PRIMARY = main.cpp

STD = -std=c++11 -Os -s

LIBS = -lsfml-audio -lsfml-graphics -lsfml-system -lsfml-window
SFML_INCLUDE_PATH = D:\Programming\SFML-2.5.1\include
SFML_LIBS_PATH = D:\Programming\SFML-2.5.1\lib

LINKER_FLAGS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -static-libgcc -static-libstdc++ # -DSFML_STATIC

all:
ifeq ($(OS), Linux)
	g++ $(STD) $(LIBS) $(SRC_PRIMARY) $(SRC_SECONDARY) -o build/$(BIN)
else
	g++ $(STD) -I$(SFML_INCLUDE_PATH) -L$(SFML_LIBS_PATH) $(SRC_PRIMARY) $(LINKER_FLAGS) -o build/$(BIN)
	strip build/$(BIN).exe
endif
