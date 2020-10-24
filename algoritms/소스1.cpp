#include <vector>
#include <stack>

using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:

    vector<int> preorder(Node* root) {

        vector<int> ans;
        stack<Node*> s; // ds�� ����
        s.push(root);
        while (!s.empty()) {

            Node* x = s.top(); // children �� �� ��
            s.pop();
            if (!x) continue; // nullptr�� ���
            int size = int(x->children.size());
            for (int i = size - 1; i >= 0; i--)
                s.push(x->children[i]);
            ans.push_back(x->val);
        }

        return ans;
    }

    vector<int> postorder(Node* root) {

        vector<int> ans;
        vector<Node*> v;
        v.push_back(root);

        while (!v.empty()) {

            Node* x = v.back(); // children �� �� ��
            v.pop_back();
            if (!x) continue; // nullptr�� ���
            int size = int(x->children.size());
            for (int i = 0; i < size; i++) {
                auto c = x->children[i];
                v.push_back(c);
            }
            ans.push_back(x->val);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> ans;

        stack<TreeNode*> s;
        TreeNode* node = root;

        while (!s.empty() || node)
        {
            // �׳� �������� �ֱ���â �������ٰ�
            if (node)
            {
                s.push(node);
                node = node->left;
            }

            // ������ 
            else
            {
                // stack�� �ִ� �� �־��ְ�
                node = s.top();
                ans.push_back(node->val);
                s.pop();
                // ���������� ����Ž
                node = node->right;
            }
        }

        return ans;
    }
};

int main()
{
	return 0;
}