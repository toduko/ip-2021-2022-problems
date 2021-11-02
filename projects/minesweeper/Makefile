OUT_DIR=bin
SRC_DIR=src
OUT_FILE=main
FILES=$(wildcard $(SRC_DIR)/*.cpp)
LINKS= -lsfml-graphics -lsfml-window -lsfml-system 

run: compile
	@echo "Running $(OUT_DIR)/$(OUT_FILE)..."
	@$(OUT_DIR)/$(OUT_FILE)
	@echo "Program finished"

compile: create-bin
	@echo "Compiling..."
	@g++ -o $(OUT_DIR)/$(OUT_FILE) $(FILES) $(LINKS)
	@echo "Compiling finished"

create-bin:
	@echo "Checking for bin directory..."
	@if [ -d "bin" ]; then \
		echo "Directory exists"; \
	else \
		echo "Directory doesn't exist"; \
		echo "Creating bin..."; \
		mkdir bin; \
		echo "Directory created"; \
	fi