# -*- MakeFile -*-

# MACRO = substitute with this

# directories

LIBALX_INC_DIR = $(LIBALX_DIR)/inc/

INC_DIR = $(ABOUT_DIR)/inc/
SRC_DIR = $(ABOUT_DIR)/src/

# dependencies

_ALL = about.o
ALL = $(_ALL) about_mod.o

ABOU_INC_LIBALX =	alx_file.h
ABOU_INC =	about.h
ABOU_DEPS = $(SRC_DIR)/about.c \
			$(patsubst %,$(LIBALX_INC_DIR)/%,$(ABOU_INC_LIBALX)) \
			$(patsubst %,$(INC_DIR)/%,$(ABOU_INC))
ABOU_INC_DIRS = -I $(INC_DIR) \
			-I $(LIBALX_INC_DIR)

# target: dependencies
#	action

all: $(ALL)


about_mod.o: $(_ALL)
	$(Q)$(LD) -r $^ -o $@
	@echo  "\tLD $@"
	@echo  ""


about.o: $(ABOU_DEPS)
	$(Q)$(CC) $(CFLAGS) $(ABOU_INC_DIRS) -c $< -o $@ $(LIBS)
	@echo  "\tCC $<"
	@echo  ""


clean:
	$(Q)rm -f *.o
