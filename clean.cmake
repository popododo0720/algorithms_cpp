# 빌드 디렉토리 내 모든 파일 삭제
file(REMOVE_RECURSE "${CMAKE_SOURCE_DIR}/")

message("### Cleaning Success: ${CMAKE_SOURCE_DIR}/")
