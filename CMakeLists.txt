cmake_minimum_required(VERSION 3.0.0)

project(GolfMembersManager)

add_executable(${PROJECT_NAME}
    ./src/main.cpp
    ./src/GolfMembershipManager.cpp
    ./src/app/Listener/Listener.cpp
    ./src/app/Controller/Controller.cpp
    ./src/app/Entity/MembersEntity.cpp
    ./src/hw/rfid/mfrc522.cpp
    ./src/hw/rfid/CardReader.cpp
    ./src/hw/spi/SPI.cpp
    ./src/hw/Monitor/Monitor.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ./src
    ./src/app/Listener
    ./src/app/Controller
    ./src/app/Model
    ./src/app/Entity
    ./src/hw/rfid
    ./src/hw/spi
    ./src/hw/Monitor
)
# wiringPi에 대한 라이브러리를 추가해준다.
target_link_libraries(${PROJECT_NAME} PUBLIC
    -lwiringPi
)
# target은 프로젝트 이름을 말한다. compile했을 때 warning도 다 출력해줘라.
target_compile_options(${PROJECT_NAME} PUBLIC
    -Wall
)



