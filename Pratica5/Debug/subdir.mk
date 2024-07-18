################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../fila_teste.cpp \
../impressora.cpp \
../lista_char.cpp \
../lista_teste.cpp \
../pilha_teste.cpp \
../polonesa.cpp 

CPP_DEPS += \
./fila_teste.d \
./impressora.d \
./lista_char.d \
./lista_teste.d \
./pilha_teste.d \
./polonesa.d 

OBJS += \
./fila_teste.o \
./impressora.o \
./lista_char.o \
./lista_teste.o \
./pilha_teste.o \
./polonesa.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./fila_teste.d ./fila_teste.o ./impressora.d ./impressora.o ./lista_char.d ./lista_char.o ./lista_teste.d ./lista_teste.o ./pilha_teste.d ./pilha_teste.o ./polonesa.d ./polonesa.o

.PHONY: clean--2e-

