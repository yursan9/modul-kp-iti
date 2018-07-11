build:
	pandoc --pdf-engine=lualatex -o main.pdf metadata.yml\
		chapter/praktikum1.md\
		chapter/praktikum2.md\
		chapter/praktikum3.md\

clean:
	rm *.pdf
