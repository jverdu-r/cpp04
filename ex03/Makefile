# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 18:13:14 by jverdu-r          #+#    #+#              #
#    Updated: 2024/01/22 18:13:17 by jverdu-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++

CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = src/AMateria.cpp \
	  src/AMateriaNode.cpp \
	  src/Character.cpp \
	  src/Cure.cpp \
	  src/Ice.cpp \
	  src/LinkedList.cpp \
	  src/MateriaSource.cpp \
	  src/main.cpp

TARGET = Materia

all: $(TARGET)

$(TARGET): $(SRC)
		$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
		rm -f $(TARGET)
