#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Definisi struktur node untuk binary tree dengan data string
struct Node {
    string data;
    Node* left;
    Node* right;

    Node(string val) : data(val), left(nullptr), right(nullptr) {}
};

// Fungsi untuk menambahkan node baru ke dalam binary tree
Node* insert(Node* root, string data) {
    if (root == nullptr) {
        return new Node(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }

    return root;
}

// Fungsi untuk mencari node dalam binary tree
bool search(Node* root, string data) {
    if (root == nullptr) {
        return false;
    }

    if (root->data == data) {
        return true;
    } else if (data < root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}

// Fungsi untuk menampilkan binary tree dalam urutan inorder
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << endl;
        inorder(root->right);
    }
}

// Fungsi untuk menulis struktur pohon ke dalam file Graphviz
void writeGraphviz(Node* root, ofstream &file) {
    if (root != nullptr) {
        if (root->left != nullptr) {
            file << "    \"" << root->data << "\" -> \"" << root->left->data << "\";" << endl;
            writeGraphviz(root->left, file);
        }
        if (root->right != nullptr) {
            file << "    \"" << root->data << "\" -> \"" << root->right->data << "\";" << endl;
            writeGraphviz(root->right, file);
        }
    }
}

int main() {
    Node* root = nullptr;

    // Menambahkan node ke dalam tree
    root = insert(root, "Universitas Esa Unggul");
    root = insert(root, "Institut Teknologi Bandung");
    root = insert(root, "Universitas Gadjah Mada");
    root = insert(root, "Universitas Airlangga");
    root = insert(root, "Institut Pertanian Bogor");
    root = insert(root, "Universitas Padjadjaran");
    root = insert(root, "Universitas Diponegoro");

    // Menampilkan tree dalam urutan inorder
    cout << "Inorder traversal of the binary tree:" << endl;
    inorder(root);

    // Mencari nilai dalam tree
    string value;
    cout << "Enter university name to search: ";
    getline(cin, value);

    if (search(root, value)) {
        cout << "University found in the tree." << endl;
    } else {
        cout << "University not found in the tree." << endl;
    }

    // Menulis struktur tree ke dalam file Graphviz
    ofstream file("tree.dot");
    file << "digraph G {" << endl;
    writeGraphviz(root, file);
    file << "}" << endl;
    file.close();

    cout << "Tree structure has been written to tree.dot file. Use Graphviz to generate the image." << endl;

    return 0;
}
