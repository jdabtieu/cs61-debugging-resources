ex%:
	g++ -g $@.cpp -o $@
clean:
	sh -c 'rm $$(ls | grep ex | grep -v cpp)'
