[amstex]

arguments=-tcx=cp227.tcx
attributes=exclude
compiler=pdftex
description=AMS-TeX
input=amstex.ini

[bagpipe]

attributes=exclude
compiler=pdftex
description=Typesetting bagpipe music
input=bagpipe.ini

[bagpipex]

attributes=exclude
compiler=pdftex
description=Typesetting bagpipe music
input=bagpipex.ini

[bplain]

arguments=-tcx=cp227.tcx
attributes=exclude
compiler=pdftex
description=Babel plain TeX
input=bplain.ini

#!include formats-context.ini

[cslatex]

attributes=exclude
compiler=pdftex
description=CSLaTeX
input=cslatex.ini

[pdfcslatex]

attributes=exclude
compiler=pdftex
description=PDF CSLaTeX
input=cslatex.ini

[csplain]

arguments=-enable-enctex
attributes=exclude
compiler=pdftex
description=CSPlain
input=csplain-utf8.ini

[pdfcsplain]

arguments=-enable-enctex
attributes=exclude
compiler=pdftex
description=PDF CSPlain
input=csplain-utf8.ini

[dvilualatex]

attributes=exclude
compiler=luatex
description=DVI LuaLaTeX
input=dvilualatex.ini

[dviluatex]

attributes=exclude
compiler=luatex
description=DVI LuaTeX
input=dviluatex.ini

[etex]

arguments=-tcx=cp227.tcx
compiler=pdftex
description=plain e-TeX
input=etex.ini

[jadetex]

attributes=exclude
compiler=pdftex
description=jadeTeX
input=jadetex.ini
preloaded=latex

[lambda]

attributes=exclude
compiler=omega
description=Lambda
input=lambda.ini

[latex]

arguments=-tcx=cp227.tcx
compiler=pdftex
description=LaTeX2e
input=latex.ini

[lualatex]

compiler=luatex
description=LuaLaTeX
input=lualatex.ini

[luatex]

compiler=luatex
description=LuaTeX
input=luatex.ini

[mex]

arguments=-tcx=cp227.tcx
attributes=exclude
compiler=pdftex
description=MeX
input=mex.ini

[mf]

arguments=-tcx=cp227.tcx
compiler=mf
description=METAFONT default base file
input=mf.ini

[mllatex]

arguments=-enable-mltex -tcx=cp227.tcx
attributes=exclude
compiler=pdftex
description=MLTeX extensions (LaTeX)
input=mllatex.ini

[mltex]

arguments=-enable-mltex -tcx=cp227.tcx
attributes=exclude
compiler=pdftex
description=MLTeX extensions (plain)
input=mltex.ini

[mptopdf]

arguments=-tcx=cp227.tcx
attributes=exclude,noexe
compiler=pdftex
description=MPtoPDF
input=mptopdf.tex

[omega]

attributes=exclude
compiler=omega
description=Omega
input=omega.ini

[pdfetex]

arguments=-tcx=cp227.tcx
compiler=pdftex
description=plain PDF-e-TeX
input=pdfetex.ini

[pdfjadetex]

attributes=exclude
compiler=pdftex
description=pdfjadeTeX
input=pdfjadetex.ini
preloaded=pdflatex

[pdflatex]

arguments=-tcx=cp227.tcx
compiler=pdftex
description=pdfLaTeX
input=pdflatex.ini

[pdfmex]

arguments=-tcx=cp227.tcx
attributes=exclude
compiler=pdftex
description=pdfMeX
input=pdfmex.ini

[pdftex]

arguments=-tcx=cp227.tcx
compiler=pdftex
description=plain pdfTeX
input=pdftex.ini

[tex]

compiler=tex
description=plain TeX 
input=tex.ini

[xmltex]

attributes=exclude
compiler=pdftex
description=xmltex
input=xmltex.ini
preloaded=latex

[pdfxmltex]

attributes=exclude
compiler=pdftex
description=pdfxmltex
input=pdfxmltex.ini
preloaded=pdflatex

[xetex]

compiler=xetex
description=xetex
input=xetex.ini

[xelatex]

compiler=xetex
description=xelatex
input=xelatex.ini

[dvilollipop]

arguments=-tcx=cp227.tcx
attributes=exclude
compiler=pdftex
description=dvilollipop
input=dvilollipop.ini

[dvilualollipop]

attributes=exclude
compiler=luatex
description=dvilualollipop
input=dvilualollipop.ini

[lollipop]

arguments=-tcx=cp227.tcx
attributes=exclude
compiler=pdftex
description=lollipop
input=lollipop.ini

[lualollipop]

attributes=exclude
compiler=luatex
description=lualollipop
input=lualollipop.ini

[utf8mex]

arguments=-enable-enctex
attributes=exclude
compiler=pdftex
description=UTF8MeX
input=utf8mex.ini
