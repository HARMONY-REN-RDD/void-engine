add_executable(voe_win ${SRC})

set_target_properties(voe_win PROPERTIES
    OUTPUT_NAME "voe"
)

set_target_properties(voe_win PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
)


target_link_libraries(voe_win PRIVATE SDL3::SDL3)
