# source files in this project 
PROJECT_NAME=assg10

assg_src = assg10-library.cpp

test_src  = ${PROJECT_NAME}-tests.cpp \
	    ${assg_src}

# template files, list all files that define template classes
# or functions and should not be compiled separately (template
# is included where used)
template_files =

# assignment description documentation
assg_doc  = ${PROJECT_NAME}.pdf

# common targets and variables used for all assignments/projects
include include/Makefile.inc

# assignment header file specific dependencies
${OBJ_DIR}/assg10-library.o: ${SRC_DIR}/assg10-library.cpp ${INC_DIR}/assg10-library.hpp
${OBJ_DIR}/${PROJECT_NAME}-tests.o: ${SRC_DIR}/${PROJECT_NAME}-tests.cpp ${INC_DIR}/assg10-library.hpp
