################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../BankApp.cpp \
../GetInterestRateWithDeposit.cpp \
../GetInterestRateWithoutDeposit.cpp \
../InitialDisplay.cpp \
../InputDisplay.cpp \
../InvestmentAmounts.cpp 

OBJS += \
./BankApp.o \
./GetInterestRateWithDeposit.o \
./GetInterestRateWithoutDeposit.o \
./InitialDisplay.o \
./InputDisplay.o \
./InvestmentAmounts.o 

CPP_DEPS += \
./BankApp.d \
./GetInterestRateWithDeposit.d \
./GetInterestRateWithoutDeposit.d \
./InitialDisplay.d \
./InputDisplay.d \
./InvestmentAmounts.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


