#include <iostream>
#include <vector>
#include <forward_list>
#include <list>
using namespace std;

template<typename InputIterator, typename valueType>
InputIterator findfirstinstance(InputIterator iterBegin, InputIterator iterEnd, const valueType& findEle){
    while(iterBegin!= iterEnd && *iterBegin != findEle){
        ++iterBegin;
    }
   return iterBegin;
}

template<class InputIterator, class OutputIterator>
OutputIterator mergeSortedContainers(InputIterator lhsBegin ,InputIterator lhsEnd,
                                     InputIterator rhsBegin,InputIterator rhsEnd,OutputIterator result){


 while(lhsBegin != lhsEnd && rhsBegin != rhsEnd){
    if(*lhsBegin <= *rhsBegin){
        *result = *lhsBegin;
        ++lhsBegin;
    }
    else{
        *result = *rhsBegin;
        ++rhsBegin;
    }
    ++result;
}
 //Copy remaining elements.
         while (lhsBegin != lhsEnd) {
                 *result = *lhsBegin;
                 ++lhsBegin;
                 ++result;
         }

         while (rhsBegin != rhsEnd) {
                 *result = *rhsBegin;
                 ++rhsBegin;
                 ++result;
         }

         return result;


}

template<class ForwardIterator, typename ElementType>
void findandreplace(ForwardIterator iterBegin, ForwardIterator iterEnd,const ElementType& oldEle, const ElementType& newEle){
    while(iterBegin!=iterEnd){
        if (*iterBegin==oldEle){
            *iterBegin=newEle;
        }
        ++iterBegin;
    }
}





int main(){
std::forward_list<int> firstList ={ 34, 77, 16, 2 };
std::forward_list<int> secondList = { 35, 76, 18, 5 };
std::list<int> List = { 34, 77, 16, 2, 35, 76, 18, 2 };
std::vector<int> resultsList(8);
//Sort containers.
firstList.sort();
secondList.sort();
//cout << "findfirstinstance of 16 in firstList and 76 in secondlist is " <<
      //  *findfirstinstance(firstList.begin(),firstList.end(),16)<<endl;

//cout << "Results of calling mergeSortedContainers with firstList and secondList are." << "\n";
       // mergeSortedContainers(firstList.begin(),firstList.end(),secondList.begin(),secondList.end(),resultsList.begin());

       // for (std::vector<int>::iterator it = resultsList.begin(); it != resultsList.end(); it++) {
      //  cout << *it << " ";
      //  }
       // cout << "\n\n";
//findandreplace example.
        cout << "Results of calling findandreplace on firstList with values 16 and 23" << "\n";
        findandreplace(firstList.begin(),firstList.end(),16,23);
        for (std::forward_list<int>::iterator it = firstList.begin(); it != firstList.end(); it++) {
        cout << *it << " ";
        }
        cout << "\n\n";


return 0;
}
