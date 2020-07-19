/*Problem 1: Gary is an avid hiker. He tracks his hikes meticulously, paying close attention to small details like topography.
During his last hike he took exactly n steps. For every step he took, he noted if it was an uphill, U, or a downhill, D step.
Gary's hikes start and end at sea level and each step up or down represents a 1 unit change in altitude. We define the following terms:

A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down to sea level.

A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.

Given Gary's sequence of up and down steps during his last hike, find and print the number of valleys he walked through.

For example, if Gary's path is S = [D,D,U,U,U,U,D,D] , he first enters a valley  2 units deep. Then he climbs out and up onto a mountain 2  units high. Finally, he returns to sea level and ends his hike.

Goal: Your task is to create a function countingValleys which should return an integer that denotes the number of valleys Gary traversed.

The function takes in only one parameter which is an array.

Example Input: const steps = [D,D,U,U,U,U,D,D]*/

#include<bits/stdc++.h>
using namespace std;
int countingValleys(vector<char> path)
{
    int valleys=0;
    int sealevel=0;
    int prevsealevel=0;
    for(int i=0;i<path.size();i++)
    {
        if(path[i] =='D')
        {
            sealevel--;
            if(prevsealevel>=0 && sealevel<0)
            {
                prevsealevel=sealevel;
                valleys++;
            }
        }
        else{
            sealevel++;
            prevsealevel=sealevel;
        }
    }

    return valleys;
}

int main(){
    int n;
    cin>>n; // no of steps in path.
    vector<char> a(n);
    for(int i= 0;i<n;i++)
    {
        cin>> a[i];
    }

    cout<< countingValleys(a)<<endl;;

}

