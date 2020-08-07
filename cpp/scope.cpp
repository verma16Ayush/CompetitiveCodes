#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
    int max, min;
  	public:
  	int maximumDifference;
    Difference(vector<int> ele)
    {
        this->elements = ele;
        max = *elements.begin();
        min = *elements.begin();
    }

    void computeDifference()
    {
        for (int i = 0; i < elements.size(); i++)
        {
            if(elements[i] > max)
                max = elements[i];
            
            if(elements[i] < min)
                min = elements[i];
        }
        maximumDifference = abs(min - max);
    }
	// Add your code here

}; // End of Difference class

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    vector<int> ele;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        ele.push_back(temp);
    }

    Difference* diff_ptr = new Difference(ele);
    diff_ptr->computeDifference();
    cout<<diff_ptr->maximumDifference<<endl;
    
}