#pragma once
typedef int Number;
typedef Number* Numbers;
typedef int Result;
typedef Numbers* Coupon;

const int amountOfNumbersInDraw = 6;
const int amountOfTypesOnCoupon = 6;
const Number minNumber = 1, maxNumber = 49;

Numbers draw();
Result checkResult(Numbers drawnNumbers, Numbers types);
void printDrawResults(Numbers drawResults);