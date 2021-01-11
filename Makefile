CXX      := g++
CXXFLAGS := -std=c++17 -O2 -Wall -Wextra -pedantic -Wshadow -Wformat=2 -Wfloat-equal -Wconversion -Wlogical-op -Wshift-overflow=2 -Wduplicated-cond -Wcast-qual -Wcast-align -Wno-unused-result -Wno-sign-conversion

.PHONY: run
run: 
	@echo "Bulding files..."
	${CXX} ${CXXFLAGS} src/$(filter-out $@,$(MAKECMDGOALS)).cpp -o build/$(filter-out $@,$(MAKECMDGOALS)).o
	./build/$(filter-out $@,$(MAKECMDGOALS)).o

.PHONY: clean
clean:
	@echo "Deleting all output files..."
	@rm -rf build/*
