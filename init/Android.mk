LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_STATIC_LIBRARIES := \
libbase \
libselinux

include $(BUILD_STATIC_LIBRARY)
