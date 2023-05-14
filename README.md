# libnya
The Nyasm standard utility library

## Install
This is not a standalone project!  

Install it as dependency using the [catcaretaker](https://github.com/labricecat/catcaretaker)
```
$ catcare get labricecat/nyasm@main
```

## Utilities
`*` -> not implemented

### _stdCAP
- **Arguments:** 1  
- **Return:** Int  
- **Information:** Casts the argument to either `1` for true or `0` for false.  

### _stdNOT
- **Arguments:** 1  
- **Return:** Int  
- **Information:** Logical NOT (`!`) operator.

### _stdMOD
- **Arguments:** 2   
- **Return:** Int  
- **Information:** Modulo operator (`%`)

### _stdABS
- **Arguments:** 1  
- **Return:** Int  
- **Information:** Returns the absolute value of the argument.

### _stdMIN
- **Arguments:** 2   
- **Return:** Int  
- **Information:** Returns the smaller argument.

### _stdMAX
- **Arguments:** 2  
- **Return:** Int  
- **Information:** Returns the greater argument.

### _stdBOR*
- **Arguments:** 2   
- **Return:** Int  
- **Information:** Binary OR operator (`|`) 

### _stdLOR
- **Arguments:** 2  
- **Return:** Int  
- **Information:** Logical OR operator (`||`)

### _stdBAN
- **Arguments:** 2  
- **Return:** Int  
- **Information:** Binary AND operator (`&`)

### _stdLAN
- **Arguments:** 2  
- **Return:** Int  
- **Information:** Logical AND operator (`&&`)

### _stdGRE
- **Arguments:** 2  
- **Return:** Int  
- **Information:** Greater comperator operator (`>`)

### _stdLES
- **Arguments:** 2  
- **Return:** Int  
- **Information:** Less comperator operator (`<`)

### _stdEQS
- **Arguments:** 2  
- **Return:** Int  
- **Information:** Equal comperator operator (`==`)

### _stdNEW
- **Arguments:**   
- **Return:** Int  
- **Information:** Not equal comperator operator (`!=`)

### _stdGEQ
- **Arguments:** 2  
- **Return:** Int  
- **Information:** Greater equal comperator operator (`>=`)

### _stdLEQ
- **Arguments:** 2  
- **Return:** Int  
- **Information:** Less equal comperator operator (`<=`)

### _stdNEG
- **Arguments:** 1   
- **Return:** Int  
- **Information:** Arithmetic negation operator (`-`)

### _stdBNO
- **Arguments:** 1  
- **Return:** Int  
- **Information:** Binary negation operator (`~`)



