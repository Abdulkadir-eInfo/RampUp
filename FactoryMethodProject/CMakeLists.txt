cmake_minimum_required(VERSION 3.16.3)
project (VehicleIndustry)

#Target
add_executable(MyVehicle Main.cpp
                src/Vehicle.cpp
                src/Owner.cpp)
target_include_directories(MyVehicle PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
