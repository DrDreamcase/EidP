################################################################################
# Automatically-generated file. Do not edit!
################################################################################

REPOFILE :=repo.acp
CXX ?= g++
-include ../makefile.init

RM := @rm -rf *~ $(REPOFILE)

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: aufgabe_02_3_2

# Tool invocations
aufgabe_02_3_2: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: CDT Linker'
	g++  -o "aufgabe_02_3_2" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(EXECUTABLES)$(C_UPPER_DEPS)$(CXX_DEPS)$(OBJS)$(CPP_DEPS) aufgabe_02_3_2
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
