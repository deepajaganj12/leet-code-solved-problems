class BrowserHistory {
public:
    stack<string> past;
    stack<string> present;

    BrowserHistory(string homepage) {
        past.push(homepage);
    }

    void visit(string url) {
        past.push(url);
        present = stack<string>();
    }

    string back(int steps) {
        while (past.size() > 1 && steps > 0) { 
            present.push(past.top());
            past.pop();
            steps--;
        }
        return past.top();
    }

    string forward(int steps) {
        while (!present.empty() && steps > 0) {
            past.push(present.top());
            present.pop();
            steps--;
        }
        return past.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
