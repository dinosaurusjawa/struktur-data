#include <iostream>
#include <string>
#include <vector>
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
void inorder(Node* root, vector<string>& universities) {
    if (root != nullptr) {
        inorder(root->left, universities);
        universities.push_back(root->data);
        inorder(root->right, universities);
    }
}

int main() {
    Node* root = nullptr;

    // Menambahkan node ke dalam tree
    vector<string> universityList = {
        "Universitas Indonesia",
        "Institut Teknologi Bandung",
        "Universitas Gadjah Mada",
        "Universitas Airlangga",
        "Institut Pertanian Bogor",
        "Universitas Padjadjaran",
        "Universitas Diponegoro"
    };

    for (const string& university : universityList) {
        root = insert(root, university);
    }

    // Menampilkan tree dalam urutan inorder
    vector<string> universities;
    inorder(root, universities);

    cout << "Daftar Universitas dalam urutan inorder:\n";
    for (size_t i = 0; i < universities.size(); ++i) {
        cout << i + 1 << ". " << universities[i] << endl;
    }

    // Mencari nilai dalam tree
    int choice;
    cout << "Pilih nomor universitas yang ingin dicari: ";
    cin >> choice;

    if (choice < 1 || choice > universities.size()) {
        cout << "Pilihan tidak valid." << endl;
    } else {
        string selectedUniversity = universities[choice - 1];
        if (search(root, selectedUniversity)) {
            cout << "Universitas ditemukan dalam tree: " << selectedUniversity << endl;
        } else {
            cout << "Universitas tidak ditemukan dalam tree." << endl;
        }
    }

    return 0;
}
