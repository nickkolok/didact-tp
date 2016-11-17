#!/bin/bash
DATE=`date +%Y-%m-%d---%H-%M-%S`
git log --pretty=format:"%h" -1 > .gitrevision
echo $DATE > .builddate
pdflatex $1.tex
pdflatex $1.tex
echo "неизвестна" > .builddate
echo "неизвестна" > .gitrevision
mv $1.pdf $1-$DATE.pdf
evince $1-$DATE.pdf
