set(CHAPTER_EXE
    00_write
    01_read
    02_open_slow
    03_open_fast
    04_close
    05_ioctl
    06_lseek
    07_fstat_stat_lstat
)
foreach(EXE ${CHAPTER_EXE})
    add_executable(${EXE} ${EXE}.c)
endforeach()