#include <iostream>
#include <exception>

#include "ordermanager.h"

using namespace std;

int main()
{
    OrderManager manager;

    //manager.readOrders("orders.txt");

    //manager.manageOrders();
    /*
    Item number 10 is not recognized in order 180!
    Item number 7 is not recognized in order 170!
    Item number 8 is not recognized in order 161!
    wrong itemnumber order ids: 180 170 161
    Processing orders...
    Order successfully processed: id: 1, status: PROCESSED, item: 3, quantity: 34
    Customer successfully notified, order: id: 1, status: PROCESSED, item: 3, quantity: 34
    Order successfully processed: id: 2, status: PROCESSED, item: 2, quantity: 47
    Customer successfully notified, order: id: 2, status: PROCESSED, item: 2, quantity: 47
    Order successfully processed: id: 3, status: PROCESSED, item: 3, quantity: 34
    Customer successfully notified, order: id: 3, status: PROCESSED, item: 3, quantity: 34
    Processing orders...
    Order successfully processed: id: 4, status: PROCESSED, item: 5, quantity: 13
    Customer successfully notified, order: id: 4, status: PROCESSED, item: 5, quantity: 13
    Order successfully processed: id: 5, status: PROCESSED, item: 5, quantity: 32
    Customer successfully notified, order: id: 5, status: PROCESSED, item: 5, quantity: 32
    Order successfully processed: id: 6, status: PROCESSED, item: 2, quantity: 24
    Customer successfully notified, order: id: 6, status: PROCESSED, item: 2, quantity: 24
    Order successfully processed: id: 7, status: PROCESSED, item: 5, quantity: 30
    Customer successfully notified, order: id: 7, status: PROCESSED, item: 5, quantity: 30
    Processing orders...
    Order successfully processed: id: 8, status: PROCESSED, item: 1, quantity: 46
    Customer successfully notified, order: id: 8, status: PROCESSED, item: 1, quantity: 46
    Order successfully processed: id: 9, status: PROCESSED, item: 3, quantity: 23
    Customer successfully notified, order: id: 9, status: PROCESSED, item: 3, quantity: 23
    Order successfully processed: id: 10, status: PROCESSED, item: 3, quantity: 20
    Customer successfully notified, order: id: 10, status: PROCESSED, item: 3, quantity: 20
    Order successfully processed: id: 11, status: PROCESSED, item: 3, quantity: 26
    Customer successfully notified, order: id: 11, status: PROCESSED, item: 3Processing orders...
    , quantity: 26
    Order successfully processed: id: 12, status: PROCESSED, item: 5, quantity: 25
    Customer successfully notified, order: id: 12, status: PROCESSED, item: 5, quantity: 25
    Order successfully processed: id: 13, status: PROCESSED, item: 3, quantity: 17
    Customer successfully notified, order: id: 13, status: PROCESSED, item: 3, quantity: 17
    Order successfully processed: id: 14, status: PROCESSED, item: 1, quantity: 23
    Customer successfully notified, order: id: 14, status: PROCESSED, item: 1, quantity: 23
    Processing orders...
    Order successfully processed: id: 15, status: PROCESSED, item: 2, quantity: 44
    Customer successfully notified, order: id: 15, status: PROCESSED, item: 2, quantity: 44
    Order successfully processed: id: 16, status: PROCESSED, item: 5, quantity: 23
    Customer successfully notified, order: id: 16, status: PROCESSED, item: 5, quantity: 23
    Order successfully processed: id: 17, status: PROCESSED, item: 2, quantity: 12
    Customer successfully notified, order: id: 17, status: PROCESSED, item: 2, quantity: 12
    Processing orders...
    Order successfully processed: id: 18, status: PROCESSED, item: 2, quantity: 13
    Customer successfully notified, order: id: 18, status: PROCESSED, item: 2, quantity: 13
    Order successfully processed: id: 19, status: PROCESSED, item: 2, quantity: 28
    Customer successfully notified, order: id: 19, status: PROCESSED, item: 2, quantity: 28
    Order successfully processed: id: 20, status: PROCESSED, item: 4, quantity: 42
    Customer successfully notified, order: id: 20, status: PROCESSED, item: 4, quantity: 42
    Processing orders...
    Order successfully processed: id: 21, status: PROCESSED, item: 5, quantity: 33
    Customer successfully notified, order: id: 21, status: PROCESSED, item: 5, quantity: 33
    Order successfully processed: id: 22, status: PROCESSED, item: 3, quantity: 15
    Customer successfully notified, order: id: 22, status: PROCESSED, item: 3, quantity: 15
    Order successfully processed: id: 23, status: PROCESSED, item: 1, quantity: 38
    Customer successfully notified, order: id: 23, status: PROCESSED, item: 1, quantity: 38
    Order successfully processed: id: 24, status: PROCESSED, item: 5, quantity: 35
    Processing orders...
    Customer successfully notified, order: id: 24, status: PROCESSED, item: 5, quantity: 35
    Order successfully processed: id: 25, status: PROCESSED, item: 4, quantity: 40
    Customer successfully notified, order: id: 25, status: PROCESSED, item: 4, quantity: 40
    Order successfully processed: id: 26, status: PROCESSED, item: 2, quantity: 28
    Customer successfully notified, order: id: 26, status: PROCESSED, item: 2, quantity: 28
    Order successfully processed: id: 27, status: PROCESSED, item: 1, quantity: 35
    Customer successfully notified, order: id: 27, status: PROCESSED, item: 1, quantity: 35
    Processing orders...
    Order successfully processed: id: 28, status: PROCESSED, item: 5, quantity: 32
    Customer successfully notified, order: id: 28, status: PROCESSED, item: 5, quantity: 32
    Order successfully processed: id: 29, status: PROCESSED, item: 1, quantity: 11
    Customer successfully notified, order: id: 29, status: PROCESSED, item: 1, quantity: 11
    Order successfully processed: id: 30, status: PROCESSED, item: 5, quantity: 15
    Customer successfully notified, order: id: 30, status: PROCESSED, item: 5, quantity: 15
    Processing orders...
    Order successfully processed: id: 31, status: PROCESSED, item: 3, quantity: 41
    Customer successfully notified, order: id: 31, status: PROCESSED, item: 3, quantity: 41
    Order successfully processed: id: 32, status: PROCESSED, item: 1, quantity: 33
    Customer successfully notified, order: id: 32, status: PROCESSED, item: 1, quantity: 33
    Order successfully processed: id: 33, status: PROCESSED, item: 1, quantity: 20
    Customer successfully notified, order: id: 33, status: PROCESSED, item: 1, quantity: 20
    Processing orders...
    Order successfully processed: id: 34, status: PROCESSED, item: 4, quantity: 19
    Customer successfully notified, order: id: 34, status: PROCESSED, item: 4, quantity: 19
    Order successfully processed: id: 35, status: PROCESSED, item: 3, quantity: 45
    Customer successfully notified, order: id: 35, status: PROCESSED, item: 3, quantity: 45
    Order successfully processed: id: 36, status: PROCESSED, item: 5, quantity: 30
    Customer successfully notified, order: id: 36, status: PROCESSED, item: 5, quantity: 30
    Order successfully processed: id: 37, status: PROCESSED, item: 3Processing orders...
    , quantity: 35
    Customer successfully notified, order: id: 37, status: PROCESSED, item: 3, quantity: 35
    Order successfully processed: id: 38, status: PROCESSED, item: 3, quantity: 19
    Customer successfully notified, order: id: 38, status: PROCESSED, item: 3, quantity: 19
    Order successfully processed: id: 39, status: PROCESSED, item: 1, quantity: 46
    Customer successfully notified, order: id: 39, status: PROCESSED, item: 1, quantity: 46
    Order successfully processed: id: 41, status: PROCESSED, item: 5, quantity: 35
    Customer successfully notified, order: id: 41, status: PROCESSED, item: 5, quantity: 35
    Processing orders...
    Order successfully processed: id: 42, status: PROCESSED, item: 4, quantity: 38
    Customer successfully notified, order: id: 42, status: PROCESSED, item: 4, quantity: 38
    Order successfully processed: id: 43, status: PROCESSED, item: 3, quantity: 46
    Customer successfully notified, order: id: 43, status: PROCESSED, item: 3, quantity: 46
    Order successfully processed: id: 44, status: PROCESSED, item: 3, quantity: 45
    Customer successfully notified, order: id: 44, status: PROCESSED, item: 3, quantity: 45
    Processing orders...
    Order successfully processed: id: 45, status: PROCESSED, item: 3, quantity: 37
    Customer successfully notified, order: id: 45, status: PROCESSED, item: 3, quantity: 37
    Order successfully processed: id: 46, status: PROCESSED, item: 2, quantity: 24
    Customer successfully notified, order: id: 46, status: PROCESSED, item: 2, quantity: 24
    Order successfully processed: id: 47, status: PROCESSED, item: 2, quantity: 37
    Customer successfully notified, order: id: 47, status: PROCESSED, item: 2, quantity: 37
    Processing orders...
    Order successfully processed: id: 48, status: PROCESSED, item: 4, quantity: 32
    Customer successfully notified, order: id: 48, status: PROCESSED, item: 4, quantity: 32
    Order successfully processed: id: 49, status: PROCESSED, item: 3, quantity: 11
    Customer successfully notified, order: id: 49, status: PROCESSED, item: 3, quantity: 11
    Order successfully processed: id: 50, status: PROCESSED, item: 1, quantity: 17
    Customer successfully notified, order: id: 50, status: PROCESSED, item: 1, quantity: 17
    Order successfully processed: id: 51, status: PROCESSED, item: 5, quantity: 15
    Customer successfully notified, order: id: 51, status: PROCESSED, item: 5, quantity: 15
    Processing orders...
    Order successfully processed: id: 52, status: PROCESSED, item: 4, quantity: 33
    Customer successfully notified, order: id: 52, status: PROCESSED, item: 4, quantity: 33
    Order successfully processed: id: 53, status: PROCESSED, item: 1, quantity: 43
    Customer successfully notified, order: id: 53, status: PROCESSED, item: 1, quantity: 43
    Order successfully processed: id: 54, status: PROCESSED, item: 1, quantity: 40
    Customer successfully notified, order: id: 54, status: PROCESSED, item: 1, quantity: 40
    Processing orders...
    Order successfully processed: id: 55, status: PROCESSED, item: 2, quantity: 30
    Customer successfully notified, order: id: 55, status: PROCESSED, item: 2, quantity: 30
    Order successfully processed: id: 56, status: PROCESSED, item: 1, quantity: 42
    Customer successfully notified, order: id: 56, status: PROCESSED, item: 1, quantity: 42
    Order successfully processed: id: 57, status: PROCESSED, item: 5, quantity: 18
    Customer successfully notified, order: id: 57, status: PROCESSED, item: 5, quantity: 18
    Order successfully processed: id: 58, status: PROCESSED, item: 5, quantity: 21
    Customer successfully notified, order: id: 58, status: PROCESSED, item: 5, quantity: 21
    Processing orders...
    Order successfully processed: id: 59, status: PROCESSED, item: 2, quantity: 29
    Customer successfully notified, order: id: 59, status: PROCESSED, item: 2, quantity: 29
    Order successfully processed: id: 60, status: PROCESSED, item: 5, quantity: 17
    Customer successfully notified, order: id: 60, status: PROCESSED, item: 5, quantity: 17
    Order successfully processed: id: 61, status: PROCESSED, item: 5, quantity: 46
    Customer successfully notified, order: id: 61, status: PROCESSED, item: 5, quantity: 46
    Processing orders...
    Order successfully processed: id: 62, status: PROCESSED, item: 3, quantity: 36
    Customer successfully notified, order: id: 62, status: PROCESSED, item: 3, quantity: 36
    Order successfully processed: id: 63, status: PROCESSED, item: 5, quantity: 40
    Customer successfully notified, order: id: 63, status: PROCESSED, item: 5, quantity: 40
    Order successfully processed: id: 64, status: PROCESSED, item: 3, quantity: 35
    Customer successfully notified, order: id: 64, status: PROCESSED, item: 3, quantity: 35
    Order successfully processed: id: 65, status: PROCESSED, item: 1, quantity: 38
    Customer successfully notified, order: id: 65, status: PROCESSED, item: 1, quantity: 38
    Processing orders...
    Order successfully processed: id: 66, status: PROCESSED, item: 1, quantity: 36
    Customer successfully notified, order: id: 66, status: PROCESSED, item: 1, quantity: 36
    Order successfully processed: id: 67, status: PROCESSED, item: 3, quantity: 39
    Customer successfully notified, order: id: 67, status: PROCESSED, item: 3, quantity: 39
    Order successfully processed: id: 68, status: PROCESSED, item: 3, quantity: 39
    Customer successfully notified, order: id: 68, status: PROCESSED, item: 3, quantity: 39
    Processing orders...
    Order successfully processed: id: 69, status: PROCESSED, item: 2, quantity: 45
    Customer successfully notified, order: id: 69, status: PROCESSED, item: 2, quantity: 45
    Order successfully processed: id: 70, status: PROCESSED, item: 1, quantity: 49
    Customer successfully notified, order: id: 70, status: PROCESSED, item: 1, quantity: 49
    Order successfully processed: id: 71, status: PROCESSED, item: 4, quantity: 48
    Customer successfully notified, order: id: 71, status: PROCESSED, item: 4, quantity: 48
    Order successfully processed: id: 72, status: PROCESSED, item: 3, quantity: 28
    Customer successfully notified, order: id: 72, status: PROCESSED, item: 3, quantity: 28
    Processing orders...
    Order successfully processed: id: 73, status: PROCESSED, item: 4, quantity: 33
    Customer successfully notified, order: id: 73, status: PROCESSED, item: 4, quantity: 33
    Order successfully processed: id: 74, status: PROCESSED, item: 2, quantity: 11
    Customer successfully notified, order: id: 74, status: PROCESSED, item: 2, quantity: 11
    Order successfully processed: id: 75, status: PROCESSED, item: 1, quantity: 26
    Customer successfully notified, order: id: 75, status: PROCESSED, item: 1, quantity: 26
    Processing orders...
    Order successfully processed: id: 76, status: PROCESSED, item: 1, quantity: 40
    Customer successfully notified, order: id: 76, status: PROCESSED, item: 1, quantity: 40
    Order successfully processed: id: 77, status: PROCESSED, item: 2, quantity: 14
    Customer successfully notified, order: id: 77, status: PROCESSED, item: 2, quantity: 14
    Order successfully processed: id: 78, status: PROCESSED, item: 2, quantity: 33
    Customer successfully notified, order: id: 78, status: PROCESSED, item: 2, quantity: 33
    Order successfully processed: id: 79, status: PROCESSED, item: 1, quantity: 21
    Customer successfully notified, order: id: 79, status: PROCESSED, item: 1, quantity: 21
    Processing orders...
    Order successfully processed: id: 81, status: PROCESSED, item: 1, quantity: 14
    Customer successfully notified, order: id: 81, status: PROCESSED, item: 1, quantity: 14
    Order successfully processed: id: 82, status: PROCESSED, item: 4, quantity: 44
    Customer successfully notified, order: id: 82, status: PROCESSED, item: 4, quantity: 44
    Order successfully processed: id: 83, status: PROCESSED, item: 2, quantity: 40
    Customer successfully notified, order: id: 83, status: PROCESSED, item: 2, quantity: 40
    Processing orders...
    Order successfully processed: id: 84, status: PROCESSED, item: 3, quantity: 17
    Customer successfully notified, order: id: 84, status: PROCESSED, item: 3, quantity: 17
    Order successfully processed: id: 85, status: PROCESSED, item: 1, quantity: 16
    Customer successfully notified, order: id: 85, status: PROCESSED, item: 1, quantity: 16
    Order successfully processed: id: 86, status: PROCESSED, item: 4, quantity: 48
    Customer successfully notified, order: id: 86, status: PROCESSED, item: 4, quantity: 48
    Processing orders...
    Order successfully processed: id: 87, status: PROCESSED, item: 3, quantity: 45
    Customer successfully notified, order: id: 87, status: PROCESSED, item: 3, quantity: 45
    Order successfully processed: id: 88, status: PROCESSED, item: 3, quantity: 26
    Customer successfully notified, order: id: 88, status: PROCESSED, item: 3, quantity: 26
    Order successfully processed: id: 89, status: PROCESSED, item: 5, quantity: 35
    Customer successfully notified, order: id: 89, status: PROCESSED, item: 5, quantity: 35
    Order successfully processed: id: 90, status: PROCESSED, item: 4, quantity: 30
    Customer successfully notified, order: id: 90, status: PROCESSED, item: 4, quantity: 30
    Processing orders...
    Order successfully processed: id: 91, status: PROCESSED, item: 2, quantity: 36
    Customer successfully notified, order: id: 91, status: PROCESSED, item: 2, quantity: 36
    Order successfully processed: id: 92, status: PROCESSED, item: 4, quantity: 29
    Customer successfully notified, order: id: 92, status: PROCESSED, item: 4, quantity: 29
    Order successfully processed: id: 93, status: PROCESSED, item: 4, quantity: 10
    Customer successfully notified, order: id: 93, status: PROCESSED, item: 4, quantity: 10
    Processing orders...
    Order successfully processed: id: 94, status: PROCESSED, item: 2, quantity: 35
    Customer successfully notified, order: id: 94, status: PROCESSED, item: 2, quantity: 35
    Order successfully processed: id: 95, status: PROCESSED, item: 4, quantity: 31
    Customer successfully notified, order: id: 95, status: PROCESSED, item: 4, quantity: 31
    Order successfully processed: id: 96, status: PROCESSED, item: 2, quantity: 39
    Customer successfully notified, order: id: 96, status: PROCESSED, item: 2, quantity: 39
    Order successfully processed: id: 97, status: PROCESSED, item: 3, quantity: 50
    Customer successfully notified, order: id: 97, status: PROCESSED, item: 3, quantity: 50
    Processing orders...
    Order successfully processed: id: 98, status: PROCESSED, item: 4, quantity: 15
    Customer successfully notified, order: id: 98, status: PROCESSED, item: 4, quantity: 15
    Order successfully processed: id: 99, status: PROCESSED, item: 5, quantity: 31
    Customer successfully notified, order: id: 99, status: PROCESSED, item: 5, quantity: 31
    Order successfully processed: id: 100, status: PROCESSED, item: 1, quantity: 37
    Customer successfully notified, order: id: 100, status: PROCESSED, item: 1, quantity: 37
    Processing orders...
    Order successfully processed: id: 101, status: PROCESSED, item: 4, quantity: 44
    Customer successfully notified, order: id: 101, status: PROCESSED, item: 4, quantity: 44
    Order successfully processed: id: 102, status: PROCESSED, item: 1, quantity: 44
    Customer successfully notified, order: id: 102, status: PROCESSED, item: 1, quantity: 44
    Order successfully processed: id: 103, status: PROCESSED, item: 5, quantity: 31
    Customer successfully notified, order: id: 103, status: PROCESSED, item: 5, quantity: 31
    Order successfully processed: id: 104, status: PROCESSED, item: 2Processing orders...
    , quantity: 13
    Customer successfully notified, order: id: 104, status: PROCESSED, item: 2, quantity: 13
    Order successfully processed: id: 105, status: PROCESSED, item: 5, quantity: 33
    Customer successfully notified, order: id: 105, status: PROCESSED, item: 5, quantity: 33
    Order successfully processed: id: 106, status: PROCESSED, item: 3, quantity: 21
    Customer successfully notified, order: id: 106, status: PROCESSED, item: 3, quantity: 21
    Order successfully processed: id: 107, status: PROCESSED, item: 3, quantity: 48
    Customer successfully notified, order: id: 107, status: PROCESSED, item: 3, quantity: 48
    Processing orders...
    Order successfully processed: id: 108, status: PROCESSED, item: 1, quantity: 38
    Customer successfully notified, order: id: 108, status: PROCESSED, item: 1, quantity: 38
    Order successfully processed: id: 109, status: PROCESSED, item: 5, quantity: 10
    Customer successfully notified, order: id: 109, status: PROCESSED, item: 5, quantity: 10
    Order successfully processed: id: 110, status: PROCESSED, item: 3, quantity: 30
    Customer successfully notified, order: id: 110, status: PROCESSED, item: 3, quantity: 30
    Processing orders...
    Order successfully processed: id: 111, status: PROCESSED, item: 5, quantity: 26
    Customer successfully notified, order: id: 111, status: PROCESSED, item: 5, quantity: 26
    Order successfully processed: id: 112, status: PROCESSED, item: 3, quantity: 13
    Customer successfully notified, order: id: 112, status: PROCESSED, item: 3, quantity: 13
    Order successfully processed: id: 113, status: PROCESSED, item: 4, quantity: 34
    Customer successfully notified, order: id: 113, status: PROCESSED, item: 4, quantity: 34
    Processing orders...
    Order successfully processed: id: 114, status: PROCESSED, item: 4, quantity: 27
    Customer successfully notified, order: id: 114, status: PROCESSED, item: 4, quantity: 27
    Order successfully processed: id: 115, status: PROCESSED, item: 3, quantity: 18
    Customer successfully notified, order: id: 115, status: PROCESSED, item: 3, quantity: 18
    Order successfully processed: id: 116, status: PROCESSED, item: 5, quantity: 30
    Customer successfully notified, order: id: 116, status: PROCESSED, item: 5, quantity: 30
    Order successfully processed: id: 117, status: PROCESSED, item: 3, quantity: 27
    Customer successfully notified, order: id: 117, status: PROCESSED, item: 3, quantity: 27
    Processing orders...
    Order successfully processed: id: 118, status: PROCESSED, item: 4, quantity: 35
    Customer successfully notified, order: id: 118, status: PROCESSED, item: 4, quantity: 35
    Order successfully processed: id: 119, status: PROCESSED, item: 4, quantity: 37
    Customer successfully notified, order: id: 119, status: PROCESSED, item: 4, quantity: 37
    Order successfully processed: id: 120, status: PROCESSED, item: 5, quantity: 20
    Customer successfully notified, order: id: 120, status: PROCESSED, item: 5, quantity: 20
    Processing orders...
    Order successfully processed: id: 121, status: PROCESSED, item: 4, quantity: 38
    Customer successfully notified, order: id: 121, status: PROCESSED, item: 4, quantity: 38
    Order successfully processed: id: 122, status: PROCESSED, item: 4, quantity: 25
    Customer successfully notified, order: id: 122, status: PROCESSED, item: 4, quantity: 25
    Order successfully processed: id: 123, status: PROCESSED, item: 3, quantity: 43
    Customer successfully notified, order: id: 123, status: PROCESSED, item: 3, quantity: 43
    Order successfully processed: id: 124, status: PROCESSED, item: 5, quantity: 29
    Customer successfully notified, order: id: 124, status: PROCESSED, item: 5, quantity: 29
    Processing orders...
    Order successfully processed: id: 125, status: PROCESSED, item: 1, quantity: 10
    Customer successfully notified, order: id: 125, status: PROCESSED, item: 1, quantity: 10
    Order successfully processed: id: 126, status: PROCESSED, item: 5, quantity: 26
    Customer successfully notified, order: id: 126, status: PROCESSED, item: 5, quantity: 26
    Order successfully processed: id: 127, status: PROCESSED, item: 1, quantity: 31
    Customer successfully notified, order: id: 127, status: PROCESSED, item: 1Processing orders...
    , quantity: 31
    Customer successfully notified, order: id: 128, status: REJECTED, item: 4, quantity: 22
    Customer successfully notified, order: id: 129, status: REJECTED, item: 1, quantity: 23
    Order successfully processed: id: 130, status: PROCESSED, item: 2, quantity: 17
    Customer successfully notified, order: id: 130, status: PROCESSED, item: 2, quantity: 17
    Processing orders...
    Order successfully processed: id: 131, status: PROCESSED, item: 5, quantity: 31
    Customer successfully notified, order: id: 131, status: PROCESSED, item: 5, quantity: 31
    Order successfully processed: id: 132, status: PROCESSED, item: 2, quantity: 19
    Customer successfully notified, order: id: 132, status: PROCESSED, item: 2, quantity: 19
    Customer successfully notified, order: id: 133, status: REJECTED, item: 1, quantity: 35
    Processing orders...
    Order successfully processed: id: 134, status: PROCESSED, item: 2, quantity: 19
    Customer successfully notified, order: id: 134, status: PROCESSED, item: 2, quantity: 19
    Customer successfully notified, order: id: 135, status: REJECTED, item: 1, quantity: 12
    Order successfully processed: id: 136, status: PROCESSED, item: 4, quantity: 12
    Customer successfully notified, order: id: 136, status: PROCESSED, item: 4, quantity: 12
    Customer successfully notified, order: id: 137, status: REJECTED, item: 4, quantity: 26
    Processing orders...
    Order successfully processed: id: 138, status: PROCESSED, item: 3, quantity: 43
    Customer successfully notified, order: id: 138, status: PROCESSED, item: 3, quantity: 43
    Customer successfully notified, order: id: 139, status: REJECTED, item: 1, quantity: 34
    Order successfully processed: id: 140, status: PROCESSED, item: 2, quantity: 50
    Customer successfully notified, order: id: 140, status: PROCESSED, item: 2, quantity: 50
    Order successfully processed: id: 141, status: PROCESSED, item: 2, quantity: 30
    Customer successfully notified, order: id: 141, status: PROCESSED, item: 2, quantity: 30
    Processing orders...
    Order successfully processed: id: 142, status: PROCESSED, item: 3, quantity: 39
    Customer successfully notified, order: id: 142, status: PROCESSED, item: 3, quantity: 39
    Customer successfully notified, order: id: 143, status: REJECTED, item: 4, quantity: 10
    Order successfully processed: id: 144, status: PROCESSED, item: 5, quantity: 26
    Customer successfully notified, order: id: 144, status: PROCESSED, item: 5, quantity: 26
    Order successfully processed: id: 145, status: PROCESSED, item: 3, quantity: 22
    Customer successfully notified, order: id: 145, status: PROCESSED, item: 3, quantity: 22
    Processing orders...
    Customer successfully notified, order: id: 146, status: REJECTED, item: 1, quantity: 35
    Order successfully processed: id: 147, status: PROCESSED, item: 2, quantity: 15
    Customer successfully notified, order: id: 147, status: PROCESSED, item: 2, quantity: 15
    Order successfully processed: id: 148, status: PROCESSED, item: 2, quantity: 41
    Customer successfully notified, order: id: 148, status: PROCESSED, item: 2, quantity: 41
    Processing orders...
    Order successfully processed: id: 149, status: PROCESSED, item: 5, quantity: 30
    Customer successfully notified, order: id: 149, status: PROCESSED, item: 5, quantity: 30
    Order successfully processed: id: 150, status: PROCESSED, item: 3, quantity: 12
    Customer successfully notified, order: id: 150, status: PROCESSED, item: 3, quantity: 12
    Finished processing orders!
    id: 1, status: PROCESSED, item: 3, quantity: 34
    id: 2, status: PROCESSED, item: 2, quantity: 47
    id: 3, status: PROCESSED, item: 3, quantity: 34
    id: 4, status: PROCESSED, item: 5, quantity: 13
    id: 5, status: PROCESSED, item: 5, quantity: 32
    id: 6, status: PROCESSED, item: 2, quantity: 24
    id: 7, status: PROCESSED, item: 5, quantity: 30
    id: 8, status: PROCESSED, item: 1, quantity: 46
    id: 9, status: PROCESSED, item: 3, quantity: 23
    id: 10, status: PROCESSED, item: 3, quantity: 20
    id: 11, status: PROCESSED, item: 3, quantity: 26
    id: 12, status: PROCESSED, item: 5, quantity: 25
    id: 13, status: PROCESSED, item: 3, quantity: 17
    id: 14, status: PROCESSED, item: 1, quantity: 23
    id: 15, status: PROCESSED, item: 2, quantity: 44
    id: 16, status: PROCESSED, item: 5, quantity: 23
    id: 17, status: PROCESSED, item: 2, quantity: 12
    id: 18, status: PROCESSED, item: 2, quantity: 13
    id: 19, status: PROCESSED, item: 2, quantity: 28
    id: 20, status: PROCESSED, item: 4, quantity: 42
    id: 21, status: PROCESSED, item: 5, quantity: 33
    id: 22, status: PROCESSED, item: 3, quantity: 15
    id: 23, status: PROCESSED, item: 1, quantity: 38
    id: 24, status: PROCESSED, item: 5, quantity: 35
    id: 25, status: PROCESSED, item: 4, quantity: 40
    id: 26, status: PROCESSED, item: 2, quantity: 28
    id: 27, status: PROCESSED, item: 1, quantity: 35
    id: 28, status: PROCESSED, item: 5, quantity: 32
    id: 29, status: PROCESSED, item: 1, quantity: 11
    id: 30, status: PROCESSED, item: 5, quantity: 15
    id: 31, status: PROCESSED, item: 3, quantity: 41
    id: 32, status: PROCESSED, item: 1, quantity: 33
    id: 33, status: PROCESSED, item: 1, quantity: 20
    id: 34, status: PROCESSED, item: 4, quantity: 19
    id: 35, status: PROCESSED, item: 3, quantity: 45
    id: 36, status: PROCESSED, item: 5, quantity: 30
    id: 37, status: PROCESSED, item: 3, quantity: 35
    id: 38, status: PROCESSED, item: 3, quantity: 19
    id: 39, status: PROCESSED, item: 1, quantity: 46
    id: 41, status: PROCESSED, item: 5, quantity: 35
    id: 42, status: PROCESSED, item: 4, quantity: 38
    id: 43, status: PROCESSED, item: 3, quantity: 46
    id: 44, status: PROCESSED, item: 3, quantity: 45
    id: 45, status: PROCESSED, item: 3, quantity: 37
    id: 46, status: PROCESSED, item: 2, quantity: 24
    id: 47, status: PROCESSED, item: 2, quantity: 37
    id: 48, status: PROCESSED, item: 4, quantity: 32
    id: 49, status: PROCESSED, item: 3, quantity: 11
    id: 50, status: PROCESSED, item: 1, quantity: 17
    id: 51, status: PROCESSED, item: 5, quantity: 15
    id: 52, status: PROCESSED, item: 4, quantity: 33
    id: 53, status: PROCESSED, item: 1, quantity: 43
    id: 54, status: PROCESSED, item: 1, quantity: 40
    id: 55, status: PROCESSED, item: 2, quantity: 30
    id: 56, status: PROCESSED, item: 1, quantity: 42
    id: 57, status: PROCESSED, item: 5, quantity: 18
    id: 58, status: PROCESSED, item: 5, quantity: 21
    id: 59, status: PROCESSED, item: 2, quantity: 29
    id: 60, status: PROCESSED, item: 5, quantity: 17
    id: 61, status: PROCESSED, item: 5, quantity: 46
    id: 62, status: PROCESSED, item: 3, quantity: 36
    id: 63, status: PROCESSED, item: 5, quantity: 40
    id: 64, status: PROCESSED, item: 3, quantity: 35
    id: 65, status: PROCESSED, item: 1, quantity: 38
    id: 66, status: PROCESSED, item: 1, quantity: 36
    id: 67, status: PROCESSED, item: 3, quantity: 39
    id: 68, status: PROCESSED, item: 3, quantity: 39
    id: 69, status: PROCESSED, item: 2, quantity: 45
    id: 70, status: PROCESSED, item: 1, quantity: 49
    id: 71, status: PROCESSED, item: 4, quantity: 48
    id: 72, status: PROCESSED, item: 3, quantity: 28
    id: 73, status: PROCESSED, item: 4, quantity: 33
    id: 74, status: PROCESSED, item: 2, quantity: 11
    id: 75, status: PROCESSED, item: 1, quantity: 26
    id: 76, status: PROCESSED, item: 1, quantity: 40
    id: 77, status: PROCESSED, item: 2, quantity: 14
    id: 78, status: PROCESSED, item: 2, quantity: 33
    id: 79, status: PROCESSED, item: 1, quantity: 21
    id: 81, status: PROCESSED, item: 1, quantity: 14
    id: 82, status: PROCESSED, item: 4, quantity: 44
    id: 83, status: PROCESSED, item: 2, quantity: 40
    id: 84, status: PROCESSED, item: 3, quantity: 17
    id: 85, status: PROCESSED, item: 1, quantity: 16
    id: 86, status: PROCESSED, item: 4, quantity: 48
    id: 87, status: PROCESSED, item: 3, quantity: 45
    id: 88, status: PROCESSED, item: 3, quantity: 26
    id: 89, status: PROCESSED, item: 5, quantity: 35
    id: 90, status: PROCESSED, item: 4, quantity: 30
    id: 91, status: PROCESSED, item: 2, quantity: 36
    id: 92, status: PROCESSED, item: 4, quantity: 29
    id: 93, status: PROCESSED, item: 4, quantity: 10
    id: 94, status: PROCESSED, item: 2, quantity: 35
    id: 95, status: PROCESSED, item: 4, quantity: 31
    id: 96, status: PROCESSED, item: 2, quantity: 39
    id: 97, status: PROCESSED, item: 3, quantity: 50
    id: 98, status: PROCESSED, item: 4, quantity: 15
    id: 99, status: PROCESSED, item: 5, quantity: 31
    id: 100, status: PROCESSED, item: 1, quantity: 37
    id: 101, status: PROCESSED, item: 4, quantity: 44
    id: 102, status: PROCESSED, item: 1, quantity: 44
    id: 103, status: PROCESSED, item: 5, quantity: 31
    id: 104, status: PROCESSED, item: 2, quantity: 13
    id: 105, status: PROCESSED, item: 5, quantity: 33
    id: 106, status: PROCESSED, item: 3, quantity: 21
    id: 107, status: PROCESSED, item: 3, quantity: 48
    id: 108, status: PROCESSED, item: 1, quantity: 38
    id: 109, status: PROCESSED, item: 5, quantity: 10
    id: 110, status: PROCESSED, item: 3, quantity: 30
    id: 111, status: PROCESSED, item: 5, quantity: 26
    id: 112, status: PROCESSED, item: 3, quantity: 13
    id: 113, status: PROCESSED, item: 4, quantity: 34
    id: 114, status: PROCESSED, item: 4, quantity: 27
    id: 115, status: PROCESSED, item: 3, quantity: 18
    id: 116, status: PROCESSED, item: 5, quantity: 30
    id: 117, status: PROCESSED, item: 3, quantity: 27
    id: 118, status: PROCESSED, item: 4, quantity: 35
    id: 119, status: PROCESSED, item: 4, quantity: 37
    id: 120, status: PROCESSED, item: 5, quantity: 20
    id: 121, status: PROCESSED, item: 4, quantity: 38
    id: 122, status: PROCESSED, item: 4, quantity: 25
    id: 123, status: PROCESSED, item: 3, quantity: 43
    id: 124, status: PROCESSED, item: 5, quantity: 29
    id: 125, status: PROCESSED, item: 1, quantity: 10
    id: 126, status: PROCESSED, item: 5, quantity: 26
    id: 127, status: PROCESSED, item: 1, quantity: 31
    id: 128, status: REJECTED, item: 4, quantity: 22
    id: 129, status: REJECTED, item: 1, quantity: 23
    id: 130, status: PROCESSED, item: 2, quantity: 17
    id: 131, status: PROCESSED, item: 5, quantity: 31
    id: 132, status: PROCESSED, item: 2, quantity: 19
    id: 133, status: REJECTED, item: 1, quantity: 35
    id: 134, status: PROCESSED, item: 2, quantity: 19
    id: 135, status: REJECTED, item: 1, quantity: 12
    id: 136, status: PROCESSED, item: 4, quantity: 12
    id: 137, status: REJECTED, item: 4, quantity: 26
    id: 138, status: PROCESSED, item: 3, quantity: 43
    id: 139, status: REJECTED, item: 1, quantity: 34
    id: 140, status: PROCESSED, item: 2, quantity: 50
    id: 141, status: PROCESSED, item: 2, quantity: 30
    id: 142, status: PROCESSED, item: 3, quantity: 39
    id: 143, status: REJECTED, item: 4, quantity: 10
    id: 144, status: PROCESSED, item: 5, quantity: 26
    id: 145, status: PROCESSED, item: 3, quantity: 22
    id: 146, status: REJECTED, item: 1, quantity: 35
    id: 147, status: PROCESSED, item: 2, quantity: 15
    id: 148, status: PROCESSED, item: 2, quantity: 41
    id: 149, status: PROCESSED, item: 5, quantity: 30
    id: 150, status: PROCESSED, item: 3, quantity: 12
    */
    return 0;
}
