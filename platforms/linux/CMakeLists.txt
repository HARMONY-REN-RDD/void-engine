add_executable(voe_linux ${SRC})

set_target_properties(voe_linux PROPERTIES
    OUTPUT_NAME "voe"
)

set_target_properties(voe_linux PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
)


target_link_libraries(voe_linux PRIVATE SDL3::SDL3)
