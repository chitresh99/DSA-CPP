// link :- https://www.naukri.com/code360/problems/subsequences-of-string_985087?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16&leftPanelTabValue=PROBLEM


// void solve(vector<string>& ans, string str, string output, int i) {
//     //base case
//     if(i>=str.length()) {
//         if(output.length()>0)
//         ans.push_back(output);
//         return ;
//         }
    
//     //exclude
//     solve(ans, str, output, i+1);
//     //include
//     output.push_back(str[i]);
//     solve(ans, str, output, i+1);
// }

// vector<string> subsequences(string str){
	
// 	vector<string> ans;
//     string output = "";
//     solve(ans,str,output,0);
//     return ans;
	
// }