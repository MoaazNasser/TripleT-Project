################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../APP \
../HAL \
../HAL/LED \
../HAL/BUZZ \
../HAL/LCD \
../MCAL \
../MCAL/DIO \
../MCAL/ADC


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../HAL/LCD/LCD.c \
../HAL/LED/LED.c \
../main.c \
../MCAL/DIO/DIO.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
HAL/LCD/LCD.o \
HAL/LED/LED.o \
main.o \
MCAL/DIO/DIO.o

OBJS_AS_ARGS +=  \
HAL/LCD/LCD.o \
HAL/LED/LED.o \
main.o \
MCAL/DIO/DIO.o

C_DEPS +=  \
HAL/LCD/LCD.d \
HAL/LED/LED.d \
main.d \
MCAL/DIO/DIO.d

C_DEPS_AS_ARGS +=  \
HAL/LCD/LCD.d \
HAL/LED/LED.d \
main.d \
MCAL/DIO/DIO.d

OUTPUT_FILE_PATH +=TripleT\ project.elf

OUTPUT_FILE_PATH_AS_ARGS +="TripleT project.elf"

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler
HAL/LCD/LCD.o: ../HAL/LCD/LCD.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.31
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.31\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATmega32A  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\2.0.401\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATmega32A__ -DDEBUG  -I"../MCAL/DIO" -I".." -I"../HAL/LCD"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

HAL/LED/LED.o: ../HAL/LED/LED.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.31
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.31\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATmega32A  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\2.0.401\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATmega32A__ -DDEBUG  -I"../MCAL/DIO" -I".." -I"../HAL/LCD"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./main.o: .././main.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.31
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.31\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATmega32A  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\2.0.401\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATmega32A__ -DDEBUG  -I"../MCAL/DIO" -I".." -I"../HAL/LCD"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

MCAL/DIO/DIO.o: ../MCAL/DIO/DIO.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.31
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.31\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATmega32A  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\2.0.401\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATmega32A__ -DDEBUG  -I"../MCAL/DIO" -I".." -I"../HAL/LCD"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	




# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking:  XC8 C Linker : 2.31
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.31\bin\xc8-cc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -mcpu=ATmega32A  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\2.0.401\xc8"  -Wl,-Map="TripleT project.map" -funsigned-char -funsigned-bitfields -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums --memorysummary,memoryfile.xml  
	@echo Finished building target: $@
	"C:\Program Files\Microchip\xc8\v2.31\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "TripleT project.elf" "TripleT project.hex"
	"C:\Program Files\Microchip\xc8\v2.31\bin\avr-objcopy.exe" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0 --no-change-warnings -O ihex "TripleT project.elf" "TripleT project.eep" || exit 0
	"C:\Program Files\Microchip\xc8\v2.31\bin\avr-objdump.exe" -h -S "TripleT project.elf" > "TripleT project.lss"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "TripleT project.elf" "TripleT project.hex" "TripleT project.eep" "TripleT project.map" "TripleT project.usersignatures" "TripleT project.a"  "TripleT project.lss"
	