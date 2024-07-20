#include <iostream>
using namespace std;

#define MAX 100  // Ukuran maksimum stack

class Stack {
private:
    int top;
    int arr[MAX];

public:
    // Constructor untuk menginisialisasi stack kosong
    Stack() {
        top = -1;
    }

    // Fungsi untuk menambahkan elemen ke stack
    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack overflow!" << endl;  // Jika stack penuh
            return;
        }
        arr[++top] = x;  // Menambah elemen ke stack
        cout << x << " pushed to stack" << endl;
    }

    // Fungsi untuk menghapus elemen teratas dari stack
    int pop() {
        if (top < 0) {
            cout << "Stack underflow!" << endl;  // Jika stack kosong
            return -1;
        }
        return arr[top--];  // Menghapus dan mengembalikan elemen teratas
    }

    // Fungsi untuk melihat elemen teratas stack tanpa menghapusnya
    int peek() {
        if (top < 0) {
            cout << "Stack is empty!" << endl;  // Jika stack kosong
            return -1;
        }
        return arr[top];  // Mengembalikan elemen teratas
    }

    // Fungsi untuk mengecek apakah stack kosong
    bool isEmpty() {
        return top < 0;  // Mengembalikan true jika stack kosong
    }

    // Fungsi untuk menampilkan semua elemen dalam stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;  // Jika stack kosong
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {  // Menampilkan elemen dari atas ke bawah
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Push\n";    // Pilihan untuk menambahkan elemen ke stack
        cout << "2. Pop\n";     // Pilihan untuk menghapus elemen teratas dari stack
        cout << "3. Peek\n";    // Pilihan untuk melihat elemen teratas stack
        cout << "4. Display\n"; // Pilihan untuk menampilkan semua elemen stack
        cout << "5. Exit\n";    // Pilihan untuk keluar dari program
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);  // Memanggil fungsi push untuk menambah elemen
                break;
            case 2:
                value = s.pop();  // Memanggil fungsi pop untuk menghapus elemen teratas
                if (value != -1) {
                    cout << value << " popped from stack" << endl;
                }
                break;
            case 3:
                value = s.peek();  // Memanggil fungsi peek untuk melihat elemen teratas
                if (value != -1) {
                    cout << "Top element is " << value << endl;
                }
                break;
            case 4:
                s.display();  // Memanggil fungsi display untuk menampilkan semua elemen stack
                break;
            case 5:
                cout << "Exiting..." << endl;  // Keluar dari program
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;  // Jika pilihan tidak valid
        }
    } while (choice != 5);

    return 0;
}
