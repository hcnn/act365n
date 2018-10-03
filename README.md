# act365n
* Date difference in years according to the **Actual/365NL** daycount method
* Synonyms: Actual/365NL, Actual/365 Non-Leap


## ISO 20022 -- A014

    "Method whereby interest is calculated based on the actual number of accrued days in the interest period, excluding any leap day from the count, and a 365-day year."

[link](https://www.iso20022.org/15022/uhb/mt565-16-field-22f.htm)


### Installation
```
clib install hcnn/act365n
```

Or add to your `package.json` and run `clib install`

```
{ ...
    "dependencies": {
        "hcnn/act365n": "0.1.0"
        ...
```

### Test and Demo
Download, compile, and run [test.c](https://github.com/hcnn/act365n/blob/master/test.c) and [demo.c](https://github.com/hcnn/act365n/blob/master/demo.c)

```
git clone git@github.com:hcnn/act365n.git
cd act365n
make deps
make validate
make showcase
```
