# 🛍️ C++ Online Shopping Terminal App

A beginner-friendly terminal-based online shopping application developed in **C++**, simulating item selection, billing, and payment systems.

![Made with C++](https://img.shields.io/badge/Made%20with-C%2B%2B-blue)
![Project Stage](https://img.shields.io/badge/Status-Completed-brightgreen)

---

## 💡 Project Overview

This project demonstrates a basic **shopping experience** through the terminal. Users can:

- Select categories like **Mobile Phones, Laptops, Desktops, Headphones, and Speakers**
- Choose from various brands and models
- Specify quantity for each item
- Get a dynamically calculated total bill
- Choose a payment method (UPI or Cash on Delivery)
- Option to shop again or exit

It is built to strengthen C++ fundamentals like control flow, functions, and input/output operations.

---

## 🔧 Technologies Used

- **C++** (Standard Library: `iostream`, `string`)
- Console Input/Output
- Conditional Statements & Looping
- Functions for modularity
- `goto` control (for simplicity in this beginner project)

---

## 📂 Features

✅ Category-based product selection  
✅ Brand/model and quantity input  
✅ Auto-bill calculation  
✅ Payment method selection (UPI / Cash)  
✅ Option to shop again  
✅ Input validation with re-prompting  

---

## 📸 Sample Output

```text
Please press S to start shopping
s
******************Welcome To Online Shopping ***************************
***************** Please Follow the Instructions************************
(1) Enter m to order Mobile phone
(2) Enter l to order Laptop
(3) Enter d to order Desktop
(4) Enter h to order Headphone
(5) Enter s to order Speaker
...
Total Bill Amount = 40000
Enter your payment type:
Use UPI - Type 'upi' || Cash on delivery - Type 'cash'
upi
PAYMENT DONE
Do you want to shop again? yes or No !!
n
Thanks for shopping!!

g++ shopping.cpp -o shopping
./shopping
