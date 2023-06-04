CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=program

BUILD_DIR	= ./build
SRC_DIR		= ./src
INCLUDE_DIR	= ./include

$(TARGET): ${BUILD_DIR}/Filme.o  ${BUILD_DIR}/Serie.o ${BUILD_DIR}/Video.o ${BUILD_DIR}/Streaming.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Filme.o: ${INCLUDE_DIR}/Filme.hpp ${SRC_DIR}/Filme.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Filme.cpp -o ${BUILD_DIR}/Filme.o

${BUILD_DIR}/Serie.o: ${INCLUDE_DIR}/Serie.hpp ${SRC_DIR}/Serie.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Serie.cpp -o ${BUILD_DIR}/Serie.o

${BUILD_DIR}/Video.o: ${INCLUDE_DIR}/Video.hpp ${SRC_DIR}/Video.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Video.cpp -o ${BUILD_DIR}/Video.o

${BUILD_DIR}/Streaming.o: ${INCLUDE_DIR}/Streaming.hpp ${SRC_DIR}/Streaming.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Streaming.cpp -o ${BUILD_DIR}/Streaming.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Filme.hpp ${INCLUDE_DIR}/Serie.hpp ${INCLUDE_DIR}/Video.hpp ${INCLUDE_DIR}/Streaming.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

clean:
	rm -f ${BUILD_DIR}/* ${TARGET}