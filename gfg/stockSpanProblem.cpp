#include <iostream>
#include <stack>
#include <vector>

// Function to calculate stock spans
std::vector<int> stockSpan(std::vector<int>& prices) {
    std::vector<int> spans; // Store the spans of each stock
    std::stack<std::pair<int, int>> stack; // Store pairs of (price, span)
    
    for(int i=0;i<prices.size();i++){
        int span= 1;
        while(!stack.empty() && prices[i]>=stack.top().first){
            span += stack.top().second;
            stack.pop();

        }
        stack.push({prices[i], span});
        spans.push_back(span);
    }
    return spans;

}

int main(){
    std::vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    std::vector<int> spans = stockSpan(prices);
    std::cout<<"Stock Prices : ";
    for(int price: prices){
        std::cout<<price<<" ";
    }
    std::cout<<"\n";
    std::cout<<"Stock Spans :  ";
    for(int span : spans){
        std::cout<<span<<"  ";
    }
    std::cout<<std::endl;
    return 0;
    }