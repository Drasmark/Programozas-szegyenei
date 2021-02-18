#include <iostream>
#include <exception>

#include<company.h>

using namespace std;

int main()
{
    Company c("Test Inc.", 357500000);
    try{
        c.readEmployees("employees.txt");
    }
    catch(exception& ex){
        cout << ex.what() << endl;
    }
    c.calculateSalaries();
    /*
    invalid division row ids: 35 99 122
    Employee id: 1 - annual salary: 2715000
    Employee id: 2 - annual salary: 11087000
    Employee id: 3 - annual salary: 3517000
    Employee id: 4 - annual salary: 3042000
    Employee id: 9 - annual salary: 18465000
    Employee id: 5 - annual salary: 3842000
    Employee id: 7 - annual salary: 2499840
    Employee id: 15 - annual salary: 15466000
    Employee id: 6 - annual salary: 6102000
    Employee id: 8 - annual salary: 3467040
    Employee id: 16 - annual salary: 11471000
    Employee id: 11 - annual salary: 5183000
    Employee id: 10 - annual salary: 3255000
    Employee id: 13 - annual salary: 3827000
    Employee id: 21 - annual salary: 11135000
    Employee id: 12 - annual salary: 3498960
    Employee id: 14 - annual salary: 5304000
    Employee id: 22 - annual salary: 11255000
    Employee id: 17 - annual salary: 3018600
    Employee id: 18 - annual salary: 4848000
    Employee id: 23 - annual salary: 18141000
    Employee id: 28 - annual salary: 3469680
    Employee id: 19 - annual salary: 3756000
    Employee id: 25 - annual salary: 10463000
    Employee id: 29 - annual salary: 3273600
    Employee id: 20 - annual salary: 5520000
    Employee id: 26 - annual salary: 10415000
    Employee id: 30 - annual salary: 2370960
    Employee id: 24 - annual salary: 3732000
    Employee id: 37 - annual salary: 15418000
    Employee id: 31 - annual salary: 3130920
    Employee id: 27 - annual salary: 3595000
    Employee id: 42 - annual salary: 16965000
    Employee id: 33 - annual salary: 2604000
    Employee id: 32 - annual salary: 5892000
    Employee id: 47 - annual salary: 17625000
    Employee id: 34 - annual salary: 3155880
    Employee id: 41 - annual salary: 3708000
    Employee id: 48 - annual salary: 11195000
    Employee id: 36 - annual salary: 2494800
    Employee id: 43 - annual salary: 4106000
    Employee id: 49 - annual salary: 15166000
    Employee id: 38 - annual salary: 2101920
    Employee id: 44 - annual salary: 4822000
    Employee id: 54 - annual salary: 10535000
    Employee id: 39 - annual salary: 2074679
    Employee id: 50 - annual salary: 4944000
    Employee id: 56 - annual salary: 16785000
    Employee id: 40 - annual salary: 3528240
    Employee id: 51 - annual salary: 3519000
    Employee id: 62 - annual salary: 15778000
    Employee id: 45 - annual salary: 2648640
    Employee id: 53 - annual salary: 5388000
    Employee id: 71 - annual salary: 10895000
    Employee id: 46 - annual salary: 3285000
    Employee id: 57 - annual salary: 5196000
    Employee id: 76 - annual salary: 11087000
    Employee id: 52 - annual salary: 2177280
    Employee id: 69 - annual salary: 4488000
    Employee id: 89 - annual salary: 9791000
    Employee id: 55 - annual salary: 3484320
    Employee id: 72 - annual salary: 3990000
    Employee id: 94 - annual salary: 9683000
    Employee id: 58 - annual salary: 2491200
    Employee id: 73 - annual salary: 4272000
    Employee id: 95 - annual salary: 15022000
    Employee id: 59 - annual salary: 2923200
    Employee id: 74 - annual salary: 4344000
    Employee id: 106 - annual salary: 18597000
    Employee id: 60 - annual salary: 2755200
    Employee id: 77 - annual salary: 5904000
    Employee id: 115 - annual salary: 17685000
    Employee id: 61 - annual salary: 2918160
    Employee id: 79 - annual salary: 4596000
    Employee id: 116 - annual salary: 14038000
    Employee id: 63 - annual salary: 3243240
    Employee id: 90 - annual salary: 5563000
    Employee id: 120 - annual salary: 19389000
    Employee id: 64 - annual salary: 3176880
    Employee id: 102 - annual salary: 4992000
    Employee id: 129 - annual salary: 17157000
    Employee id: 65 - annual salary: 2176200
    Employee id: 104 - annual salary: 3660000
    Employee id: 133 - annual salary: 14134000
    Employee id: 66 - annual salary: 2948400
    Employee id: 110 - annual salary: 4103000
    Employee id: 135 - annual salary: 17997000
    Employee id: 67 - annual salary: 3135000
    Employee id: 113 - annual salary: 3991000
    Employee id: 138 - annual salary: 14242000
    Employee id: 68 - annual salary: 2917200
    Employee id: 114 - annual salary: 3948000
    Employee id: 139 - annual salary: 15574000
    Employee id: 70 - annual salary: 2569680
    Employee id: 119 - annual salary: 5604000
    Employee id: 144 - annual salary: 11099000
    Employee id: 75 - annual salary: 2317680
    Employee id: 121 - annual salary: 5370000
    Employee id: 146 - annual salary: 15166000
    Employee id: 78 - annual salary: 2630880
    Employee id: 124 - annual salary: 4665000
    Employee id: 147 - annual salary: 13582000
    Employee id: 80 - annual salary: 3229199
    Employee id: 126 - annual salary: 5316000
    Employee id: 150 - annual salary: 18981000
    Employee id: 81 - annual salary: 2770560
    Employee id: 130 - annual salary: 5112000
    Employee id: 82 - annual salary: 3455760
    Employee id: 137 - annual salary: 3024000
    Employee id: 83 - annual salary: 2386560
    Employee id: 140 - annual salary: 4104000
    Employee id: 84 - annual salary: 2373840
    Employee id: 141 - annual salary: 5100000
    Employee id: 85 - annual salary: 3158640
    Employee id: 148 - annual salary: 4689000
    Employee id: 86 - annual salary: 3374640
    Employee id: 149 - annual salary: 4370000
    Employee id: 87 - annual salary: 2727480
    Employee id: 88 - annual salary: 2723040
    Employee id: 91 - annual salary: 3242640
    Employee id: 92 - annual salary: 2171520
    Employee id: 93 - annual salary: 2900160
    Employee id: 96 - annual salary: 3630720
    Employee id: 97 - annual salary: 2445000
    Employee id: 98 - annual salary: 2227200
    Employee id: 100 - annual salary: 2765880
    Employee id: 101 - annual salary: 2545080
    Employee id: 103 - annual salary: 2693760
    Employee id: 105 - annual salary: 3215160
    Employee id: 107 - annual salary: 3353399
    Employee id: 108 - annual salary: 2223840
    Employee id: 109 - annual salary: 2739119
    Employee id: 111 - annual salary: 3244800
    Employee id: 112 - annual salary: 2856960
    Employee id: 117 - annual salary: 2835000
    Employee id: 118 - annual salary: 3010560
    Employee id: 123 - annual salary: 2706000
    Employee id: 125 - annual salary: 3247200
    Employee id: 127 - annual salary: 2125200
    Employee id: 128 - annual salary: 2152320
    Employee id: 131 - annual salary: 2779920
    Employee id: 132 - annual salary: 3229200
    Employee id: 134 - annual salary: 2517480
    Employee id: 136 - annual salary: 3263400
    Employee id: 142 - annual salary: 2835000
    Employee id: 143 - annual salary: 2555280
    Employee id: 145 - annual salary: 2188800
    */
    return 0;
}
