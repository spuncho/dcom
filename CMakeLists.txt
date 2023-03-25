
include(ZeekPlugin)

include_directories(BEFORE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})

zeek_plugin_begin(Zeek dcom)
zeek_plugin_cc(dcom.cc Plugin.cc dcom_c.c dcom_i.c dcom_p.c)
