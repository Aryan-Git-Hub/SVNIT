products = {}

while(True):
    product_name = input("Enter product name or 0 to exit: ")
    if product_name=='0': break
    product_price = input("Enter the price of product: ")
    products[product_name] = product_price

while(True):
    product_name = input("Enter name of product to find its price or 0 to exit: ")
    if product_name=='0': exit()
    product_price = products.get(product_name)
    if product_price: print("price is", product_price)
    else: print("Product is not in the dictionary")
