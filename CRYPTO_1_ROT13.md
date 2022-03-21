# Mod 26 | 10 points
Tags: Cryptography

## Description
Cryptography can be easy, do you know what ROT13 is? `cvpbPGS{arkg_gvzr_V'yy_gel_2_ebhaqf_bs_ebg13_uJdSftmh}`

## Information

### What is ROT13 ?
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher 
that replaces a letter with the 13th letter after it in the alphabet. ROT13 is a special case of 
the Caesar cipher which was developed in ancient Rome. 

#### Algorithm
Only those letters which occur in the English alphabet are affected; numbers, symbols, whitespace, 
and all other characters are left unchanged. Because there are 26 letters in the English alphabet 
and 26 = 2 × 13, the ROT13 function is its own inverse:<br>
`ROT13(ROT13(x)) = x` for any basic Latin-alphabet text x.<br>
<br>
In other words, two successive applications of ROT13 restore the original text (in mathematics, 
this is sometimes called an involution; in cryptography, a reciprocal cipher). 

![algo ROT13](https://upload.wikimedia.org/wikipedia/commons/3/33/ROT13_table_with_example.svg)

- [ROT13](https://en.wikipedia.org/wiki/ROT13)

### tr command
It is an abbreviation of translate or transliterate, indicating its operation of replacing or 
removing specific characters in its input data set. <br>
`tr SET1 [SET2]` set2 replace set1

- [tr command](https://www.geeksforgeeks.org/tr-command-in-unix-linux-with-examples/)

## STEPS

1. `echo "cvpbPGS{arkg_gvzr_V'yy_gel_2_ebhaqf_bs_ebg13_uJdSftmh}" | tr '[a-z][A-Z]' '[n-za-m][N-ZA-M]'`
2. FLAG : `picoCTF{next_time_I'll_try_2_rounds_of_rot13_hWqFsgzu}`



# 13 | 100 points
Tags: Cryptography

## Description
Cryptography can be easy, do you know what ROT13 is? cvpbPGS{abg_gbb_onq_bs_n_ceboyrz}

## STEPS

1. `echo "cvpbPGS{abg_gbb_onq_bs_n_ceboyrz}" | tr '[a-z][A-Z]' '[n-za-m][N-ZA-M]'`
2. FLAG : `picoCTF{not_too_bad_of_a_problem}`
