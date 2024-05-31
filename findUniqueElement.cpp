#include <iostream>
#include <vector>
using namespace std;

int findUniqueElement(vector<int> arr) {
  int ans = 0;
  for(int i=0; i<arr.size(); i++) {
    ans = ans ^ arr[i];
  }

    return ans;
}

int main() {
  int n;
  cout<<"Enter the number of elements in the array: ";
  cin >> n;
  vector<int> arr(n);
  cout<<"Enter the elements of the array: ";
  for (int i=0; i<arr.size(); i++) {
    cin >> arr[i];
  }

  //FIND UNIQUE ELEMENT
  int uniqueElement = findUniqueElement(arr);
  cout<<"The unique element is: "<<uniqueElement<<endl;
  return 0;
}
