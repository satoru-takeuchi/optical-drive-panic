opened: opened.c
	cc -o $@ $<

.PHONY: clean

clean:
	rm -rf *.o *~ opened
