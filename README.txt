Problem Description

The name of one product of a Corporation consists only in lowercase English letters. The Corporation has decided to try change the name of this product. 

For this purpose the corporation has consecutively hired n designers. Once a company hires the i-th designer, he immediately contributes to the creation of a new product name as follows: he takes the newest version of the name and replaces all the letters xi by yi, and all the letters yi by xi. This results in the new version. It is possible that some of these letters do no occur in the string. It may also happen that xi coincides with yi. The version of the name received after the work of the last designer becomes the new name of the product.

Show the final version of the name of the product.

Input

The first line of the input contains one integer n (1 ≤ n  ≤ 200 000) —the number of designers hired.

The second line consists of a group of lowercase English letters that represents the original product name.

Next n lines contain the descriptions of the designers' actions: the i-th of them contains two space-separated lowercase English letters xi and yi.

Output

One line with the new name of the product.
Sample Input

6
abacabadaba
a b
b c
a d
e g
f a
b b

Sample Output

cdcbcdcfcdc