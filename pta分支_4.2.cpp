//#include <iostream>
//int main(void)
//{
//    using namespace std;
//    int n;
//    cin >> n;
//    if (n > 0)
//        cout << "1";
//    else if (n < 0)
//        cout << "-1";
//    else
//        cout << "0";
//    return 0;
//}
//#include <iostream>
//int main(void)
//{
//    using namespace std;
//    int n;
//    cin >> n;
//    if (n > 0)
//        cout << "sign(" << n << ") = 1";
//    else if (n < 0)
//        cout << "sign(" << n << ") = -1";
//    else
//        cout << "sign(" << n << ") = 0";
//    return 0;
//}
//#include <iostream>
//int main(void)
//{
//	using namespace std;
//	int Month[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int year;
//	int month;
//	int date;
//	int day=0;
//	cin >> year;
//	cin.get();
//	cin >> month;
//	cin.get();
//	cin >> date;
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		Month[1] = 29;
//	}
//	for (int i = 0; i < month-1;i++)
//	{
//		day += Month[i];
//	}
//	day += date;
//	cout << day;
//	return 0;
//}
//#include <iostream>
//int main(void)
//{
//	using namespace std;
//	int hour;
//	int min;
//	cin >> hour;
//	cin.get();
//	cin >> min;
//	if (hour < 12)
//	{
//		cout << hour << ":" << min << " AM" << endl;
//	}
//	else if(hour==12)
//		cout << hour  << ":" << min << " PM" << endl;
//	else
//		cout << hour - 12 << ":" << min << " PM" << endl;
//	return 0;
//}