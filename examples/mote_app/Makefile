# name of your application
APPLICATION = mote_app

# If no BOARD is found in the environment, use this default:
BOARD ?= native

# This has to be the absolute path to the RIOT base directory:
RIOTBASE ?= $(CURDIR)/../..

BOARD_INSUFFICIENT_MEMORY := airfy-beacon chronos msb-430 msb-430h nrf51dongle nrf6310 \
                             nucleo-f334 pca10000 pca10005 stm32f0discovery telosb weio \
                             wsn430-v1_3b wsn430-v1_4 yunjia-nrf51822 z1 nucleo-f072

# Add also the shell, some shell commands
USEMODULE += mote

# Comment this out to disable code in RIOT that does safety checking
# which is not needed in a production environment but helps in the
# development process:
CFLAGS += -DDEVELHELP

# Change this to 0 show compiler invocation lines by default:
QUIET ?= 1

include $(RIOTBASE)/Makefile.include
