//写红黑树给出例子
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node* parent;
    int color;
    int key;
    int value;
    int size;
    int height;
    int count;
    int max;
    int min;
    int sum;
    int median;
    int mode;
    int mode_count;
    int mode_value;
    int mode_values[100];
    int mode_counts[100];
    int mode_count_index;
    int mode_value_index;
    int mode_values_count;
    int mode_counts_count;
    int mode_values_index[100];
    int mode_counts_index[100];
    int mode_values_count_index[100];
    int mode_counts_count_index[100];
    int mode_values_count_count;
    int mode_counts_count_count;
    int mode_values_count_count_index;
    int mode_counts_count_count_index;
    int mode_values_count_count_count;
    int mode_counts_count_count_count;
    int mode_values_count_count_count_index;
    int mode_counts_count_count_count_index;
    int mode_values_count_count_count_count;
    int mode_counts_count_count_count_count;
};

class RedBlackTree {
private:
    Node* root;
    Node* TNULL;

    void initializeNULLNode(Node* node, Node* parent) {
        node->data = -1;
        node->parent = parent;
        node->left = nullptr;
        node->right = nullptr;
        node->color = 0;
    }

    void preOrderHelper(Node* node) {
        if (node != TNULL) {
            cout << node->data << " ";
            preOrderHelper(node->left);
            preOrderHelper(node->right);
        }
    }

public:
    RedBlackTree() {
        TNULL = new Node;
        TNULL->color = 0;
        TNULL->left = nullptr;
        TNULL->right = nullptr;
        root = TNULL;
    }

    void preOrder() {
        preOrderHelper(this->root);
    }

    void leftRotate(Node* x) {
        Node* y = x->right;
        x->right = y->left;

        if (y->left != TNULL) {
            y->left->parent = x;
        }

        y->parent = x->parent;

        if (x->parent == nullptr) {
            this->root = y; // Update root
        } else if (x == x->parent->left) {
            x->parent->left = y;
        }
        else {
            x->parent->right = y;
        }

        y->left = x;
        x->parent = y;
    }

    void rightRotate(Node* x) {
        Node* y = x->left;
        x->left = y->right;

        if (y->right != TNULL) {
            y->right->parent = x;
        }

        y->parent = x->parent; // Update root

        if (x->parent == nullptr) {
            this->root = y;
        } else if (x == x->parent->left) { 
            x->parent->left = y;
        } else {
            x->parent->right = y;
        }

        y->right = x;
        x->parent = y;
    }

    void fixInsert(Node* k) {
        Node* u;
        while (k->parent->color == 1) {
            if (k->parent == k->parent->parent->right) {
                u = k->parent->parent->left; // uncle

                if (u->color == 1) {
                    u->color = 0;
                    k->parent->color = 0;
                    k->parent->parent->color = 1;
                    k = k->parent->parent;
                } else {
                    if (k == k->parent->left) {
                        k = k->parent;
                        rightRotate(k);
                    }
                    k->parent->color = 0;
                    k->parent->parent->color = 1;
                    leftRotate(k->parent->parent);
                }
            } else {
                u = k->parent->parent->right; // uncle

                if (u->color == 1) {
                    u->color = 0;
                    k->parent->color = 0;
                    k->parent->parent->color = 1;
                    k = k->parent->parent;
                } else {
                    if (k == k->parent->right) {
                        k = k->parent;
                        leftRotate(k);
                    }
                    k->parent->color = 0;
                    k->parent->parent->color = 1;
                    rightRotate(k->parent->parent);
                }
            }
            if (k == this->root) {
                
                break;
            }
            }
        this->root->color = 0;
    }

    void fixDelete(Node* x) {
        Node* s;
        while (x != this->root && x->color == 0) {
            if (x == x->parent->left) {
                s = x->parent->right;
                if (s->color == 1) {
                    s->color = 0;
                    x->parent->color = 1;
                    leftRotate(x->parent);
                    s = x->parent->right;
                }
                if (s->left->color == 0 && s->right->color == 0) {
                    s->color = 1;
                    x = x->parent;
                }
                else {
                    if (s->right->color == 0) {
                        s->left->color = 0;
                        s->color = 1;
                        rightRotate(s);
                        s = x->parent->right;
                    }
                    s->color = x->parent->color;
                    x->parent->color = 0;
                    s->right->color = 0;
                    leftRotate(x->parent);
                    x = this->root;
                }
            } else {
                s = x->parent->left; // uncle

                if (s->color == 1) {
                    s->color = 0;
                    x->parent->color = 1;
                    rightRotate(x->parent);
                    s = x->parent->left;
                }
                if (s->right->color == 0 && s->right->color == 0) {
                    s->color = 1;
                    x = x->parent;
                }
                else {
                    if (s->left->color == 0) {
                        s->right->color = 0;
                        s->color = 1;
                        leftRotate(s);
                        s = x->parent->left;
                    }
                    s->color = x->parent->color;
                    x->parent->color = 0;
                    s->left->color = 0;
                    rightRotate(x->parent);
                    x = this->root;
                    
                }
            }

                }
            x->color = 0;
    }
    Node* minimum(Node* x) {
        while (x->left != nullptr) {
            x = x->left;
        }
        return x;
    }
    Node* maximum(Node* x) {
        while (x->right != nullptr) {
            x = x->right;
        }
        return x;
    }
    Node* searchNode(int key) {
        Node* x = this->root;
        while (x != nullptr && key != x->key) {
            if (key < x->key) {
                x = x->left;
            }
            else {
                x = x->right;
            }
        }
        return x;
    }
    void transplant(Node* u, Node* v) {
        if (u->parent == nullptr) {
            this->root = v;
        }
        else if (u == u->parent->left) {
            u->parent->left = v;
        }
        else {
            u->parent->right = v;
        }
        if (v != nullptr) {
            v->parent = u->parent;
        }
    }
    
    void deleteNode(int key) {
        Node* z = searchNode(key);
        if (z == nullptr) {
            return;
        }
        Node* y = z;
        Node* x;
        int yOriginalColor = y->color;
        if (z->left == nullptr) {
            x = z->right;
            transplant(z, z->right);
        }
        else if (z->right == nullptr) {
            x = z->left;
            transplant(z, z->left);
        }
        else {

            y = minimum(z->right);
            yOriginalColor = y->color;
            x = y->right;
            if (y->parent == z) {
                x->parent = y;
            }
            else {
                transplant(y, y->right);
                y->right = z->right;
                y->right->parent = y;
            }
            transplant(z, y);
            y->left = z->left;
            y->left->parent = y;
            y->color = z->color;

        }
        delete z;
        if (yOriginalColor == 0) {
            fixDelete(x);
        }

    }
    
};// C++ program to implement
int main() {
    New RedBlackTree;
    RedBlackTree.insert(7);
    RedBlackTree.insert(6);
    RedBlackTree.insert(5);
    RedBlackTree.insert(4);
    RedBlackTree.insert(3);
    RedBlackTree.insert(2);
    RedBlackTree.insert(1);
    RedBlackTree.deleteNode(7);
    RedBlackTree.deleteNode(6);
    RedBlackTree.deleteNode(5);
    RedBlackTree.deleteNode(4);
    RedBlackTree.deleteNode(3);
    RedBlackTree.deleteNode(2);
    RedBlackTree.deleteNode(1);
    return 0;
}