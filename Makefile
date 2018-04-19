TEXFILE=ms-thesis
OUTPUT=build

all:
	pdflatex --output-directory=$(OUTPUT)  $(TEXFILE).tex
	biber $(TEXFILE) --output-directory=$(OUTPUT) --debug
	pdflatex --output-directory=$(OUTPUT)  $(TEXFILE).tex
clean:
	rm -f {,$(OUTPUT)/}{*.bbl,*.aux,*.blg,*.log,*.bcf,*.out,*.toc,*.run,*.xml,*.pdf,*.synctex.gz}
