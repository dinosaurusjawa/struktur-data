#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Fungsi untuk menambahkan node di akhir
    void insert(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Fungsi untuk menampilkan list
    void display() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    // Fungsi untuk menghapus node berdasarkan nilai
    void deleteNode(int value) {
        if (!head) return;

        // Jika head perlu dihapus
        if (head->data == value) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        Node* temp = head;
        while (temp->next && temp->next->data != value) {
            temp = temp->next;
        }

        // Jika nilai tidak ditemukan
        if (!temp->next) {
            std::cout << "Nilai tidak ditemukan di dalam list." << std::endl;
            return;
        }

        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    // Destruktor untuk membersihkan linked list
    ~LinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;
    int choice, value;

    do {
        std::cout << "Menu:\n";
        std::cout << "1. Tambah node\n";
        std::cout << "2. Tampilkan list\n";
        std::cout << "3. Hapus node\n";
        std::cout << "4. Keluar\n";
        std::cout << "Pilih opsi: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Masukkan nilai untuk node baru: ";
                std::cin >> value;
                list.insert(value);
                break;
            case 2:
                std::cout << "Linked List: ";
                list.display();
                break;
            case 3:
                std::cout << "Masukkan nilai node yang akan dihapus: ";
                std::cin >> value;
                list.deleteNode(value);
                break;
            case 4:
                std::cout << "Keluar dari program." << std::endl;
                break;
            default:
                std::cout << "Pilihan tidak valid. Silakan coba lagi." << std::endl;
        }
    } while (choice != 4);

    return 0;
}
