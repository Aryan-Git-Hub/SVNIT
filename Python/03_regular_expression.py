'''
https://youtu.be/K8L6KVGG-7o?si=QHh1hbYfzLNm5RCF

. -- Matches any single character except newline. Using m option allows it to match newline as well.
\w -- matches a "word" character: a letter or digit or underbar [a-zA-Z0-9_].
\W -- matches any non-word character.
\b -- boundary between word and non-word
\S -- matches any non-whitespace character.
\t, \n, \r -- tab, newline, return
\d -- decimal digit [0-9]
^ = matches start of the string
$ = match the end of the string
\ -- inhibit the "specialness" of a character.
[...] -- Matches any single character in brackets.
[ ^ ...] -- Matches any single character not in brackets




(re) Groups regular expressions and remembers matched text.
(?imx) Temporarily toggles on i, m, or x options within a regular expression. If in parentheses, only that area is affected.
(?-imx) Temporarily toggles off i, m, or x options within a regular expression. If in parentheses, only that area is affected.
(?: re) Groups regular expressions without remembering matched text.
(?imx: re) Temporarily toggles on i, m, or x options within parentheses.
(?-imx: re) Temporarily toggles off i, m, or x options within parentheses.
(?  #...) Comment.
(?=re) Specifies position using a pattern. Does not have a range.
(?! re) Specifies position using pattern negation. Does not have a range.
(?> re) Matches independent pattern without backtracking.
\w Matches word characters.




\W Matches nonword characters.
\s Matches whitespace. Equivalent to[\t\n\r\f].
\S Matches nonwhitespace.
\d Matches digits. Equivalent to[0-9].
\D Matches nondigits.
\A Matches beginning of string.
\Z Matches end of string. If a newline exists, it matches just before newline.
\z Matches end of string.
\G Matches point where last match finished.
\b Matches word boundaries when outside brackets. Matches backspace(0x08) when inside brackets.
\B Matches nonword boundaries.
\n, \t, etc. Matches newlines, carriage returns, tabs, etc.
\1...\9 Matches nth grouped subexpression.
\10 Matches nth grouped subexpression if it matched already. Otherwise refers to the octal representation of a character code.

                                     Character Classes
[Pp]ython Match "Python" or "python"
rub[ye] Match "ruby" or "rube"
[aeiou] Match any one lowercase vowel
[0-9] Match any digit same as [0123456789]
[a-z] Match any lowercase ASCII letter
[A-Z] Match any uppercase ASCII letter
[a-zA-Z0-9] Match any of the above
[ ^ aeiou] Match anything other than a lowercase vowel
[ ^ 0-9] Match anything other than a digit

                                    Repetition Classes
ruby? Match "rub" or "ruby": the y is optional
ruby* Match "rub" plus 0 or more ys
ruby+ Match "rub" plus 1 or more ys
\d{3} Match exactly 3 digits
\d{3, } Match 3 or more digits
\d{3, 5} Match 3, 4, or 5 digits




.       - Any Character Except New Line
\d      - Digit (0-9)
\D      - Not a Digit (0-9)
\w      - Word Character (a-z, A-Z, 0-9, _)
\W      - Not a Word Character
\s      - Whitespace (space, tab, newline)
\S      - Not Whitespace (space, tab, newline)

\b      - Word Boundary
\B      - Not a Word Boundary
^       - Beginning of a String
$       - End of a String

[]      - Matches Characters in brackets
[^ ]    - Matches Characters NOT in brackets
|       - Either Or
( )     - Group

Quantifiers:
*       - 0 or More
+       - 1 or More
?       - 0 or One
{3}     - Exact Number
{3,4}   - Range of Numbers (Minimum, Maximum)
'''

# ------------------------------------ 1. re.match -----------------------------------------------
# import re
# line = "Cat's are smarter than dogs"
# matchObj = re.match(r'(.*) are? (.*?) .*', line, re.M | re.I)
# print (matchObj)
# if matchObj:
#     print("matchObj.group() : ", matchObj.group())
#     print("matchObj.group(1) : ", matchObj.group(1))
#     print("matchObj.group(2) : ", matchObj.group(2))
# else:
#     print("No match!!")

# 2. ------------------------------------ re.search -----------------------------------------------------------
# import re
# line = "Cat's are smarter than dogs"
# searchObj = re.search(r'dogs', line, re.M | re.I)
# print (searchObj)
# if searchObj:
#     print("search --> searchObj.group() : ", searchObj.group())
# else:
#     print("Nothing found!!")

# -----------------------------------------3. re.sub ---------------------------------------------------------------
# import re
# phone = "2004-959-559 # This is Phone Number"
# # Delete Python-style comments
# num = re.sub(r'#.*$', "", phone)
# print (num)
# print("Phone Num : ", num)
# # Remove anything other than digits
# num = re.sub(r'\D', "", phone)
# print("Phone Num : ", num)

# ----------------------------------------------------------------------------------------


# import re
# mystr = '''Tata Limited
# Dr. David Landsman, executive director
# 18, Grosvenor Place
# London SW1X 7HSc
# Phone: +44 (20) 7235 8281
# Fax: +44 (20) 7235 8727
# Email: tata@tata.co.uk
# Website: www.europe.tata.com
# Directions: View map

# Tata Sons, North America
# 1700 North Moore St, Suite 1520
# Arlington, VA 22209-1911
# USA
# Phone: +1 (703) 243 9787
# Fax: +1 (703) 243 9791
# 66-66
# 455-4545
# Email: northamerica@tata.com 
# Website: www.northamerica.tata.com
# Directions: View map fass
# harry bhai lekin
# bahut hi badia aadmi haiaiinaiiiiiiiiiiii'''
# # findall, search, split, sub, finditer
# # patt = re.compile(r'fass')
# # patt = re.compile(r'.adm')
# # patt = re.compile(r'^Tata')
# # patt = re.compile(r'iin$')
# # patt = re.compile(r'ai{2}')
# # patt = re.compile(r'(ai){1}')
# # patt = re.compile(r'ai{1}|Fax')
# # Special Sequences
# # patt = re.compile(r'Fax\b')
# # patt = re.compile(r'27\b')
# patt = re.compile(r'\d{5}-\d{4}')
# # Task
# # Given a string with a lot of indian phone numbers starting from +91
# matches = patt.finditer(mystr)
# for match in matches:
#     print(match)