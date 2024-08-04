ifeq ($(strip $(AUDIO_ENABLE)), yes)
    SRC += muse.c
endif
MOUSEKEY_ENABLE = yes       # Mouse keys(+4700)
EXTRAKEY_ENABLE = yes       # Audio control and System control(+450)
COMBO_ENABLE = yes
