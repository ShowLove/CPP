/////////////////////////////////////
// Thins you'll find in this repo
////////////////////////////////////

/* this is a quick and dirty main that uses fooClass */
g++ basicCPPMainClass.cpp -o basicCPPMainClass.out && ./basicCPPMainClass.out

/* generic main with generic .cpp and .h file */
g++ genericMain.cpp genericSource.cpp -o genericOut.out && ./genericOut.out

/* compile string util classes */
g++ main.cpp cStringUtils.cpp -o cStringUtils.out && ./cStringUtils.out

/* run gtests */
cd /Users/carlosgarzon/Desktop/code/cpp98/tests
g++ -lgtest firstTest.cpp -o firstTest.out

/* run gtests for utils */
cd /Users/carlosgarzon/Desktop/code/cpp98/utils/tests/build/ && cmake /Users/carlosgarzon/Desktop/code/cpp98/utils && make && ./tests/gtestProject