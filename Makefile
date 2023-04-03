all: build

clean:
	rm -f ./rapport/*.log ./rapport/*.fls ./rapport/*.aux ./rapport/*.toc ./rapport/*.fdb_latexmk ./rapport/*.gz somme-groupe26.tar.gz

pdf:
	mv rapport/main.pdf rapport/Somme-26.pdf

build: clean
	tar -czvf somme-groupe26.tar.gz code/* rapport/*