build:
	pandoc --pdf-engine=lualatex -o main.pdf metadata.yml\
		chapter/praktikum1.md

clean:
	rm *.pdf
