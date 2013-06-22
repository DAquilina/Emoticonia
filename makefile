test.o: util.cpp world.hpp scene.hpp action.hpp pointofinterest.hpp
	g++ -c test.cpp

clean:
	rm *.o *gch
