if exists("b:current_syntax")
    finish
endif

syntax match CustomF /F/
syntax match CustomD /D/
syntax match CustomE /E/
syntax match CustomM /M/
syntax match CustomW /W/

highlight CustomF ctermfg=LightBlue guifg=LightBlue
highlight CustomD ctermfg=LightGreen guifg=LightGreen
highlight CustomE ctermfg=Red guifg=Red
highlight CustomM ctermfg=Yellow guifg=Yellow
highlight CustomW ctermfg=Magenta guifg=Magenta

let b:current_syntax = "pipeline"

