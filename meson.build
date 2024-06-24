project('test_gtest', ['cpp'], version:'0.0.1', default_options: ['cpp_std=c++17', 'werror=true'])

gtest_dep = dependency('gtest', version: '>=1.10.0', main:true, fallback:['gtest', 'gtest_main_dep'])

test_exe = executable('test_type', ['test.cpp'], dependencies:[gtest_dep])

test('test_type', test_exe)
