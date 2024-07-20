```
Penjelasan Program BFS:
Fungsi bfs(graph, start):

graph: Graf direpresentasikan sebagai dictionary (kamus) di mana setiap kunci adalah node dan nilainya adalah daftar tetangga dari node tersebut.
start: Node awal tempat pencarian dimulai.
visited: Daftar untuk melacak node yang telah dikunjungi.
queue: Antrian untuk melacak node yang akan dieksplorasi berikutnya.
Proses BFS:

Masukkan node awal ke dalam antrian.
Selama antrian tidak kosong:
Keluarkan node dari antrian.
Jika node belum dikunjungi, tambahkan ke dalam daftar visited.
Tambahkan semua tetangga yang belum dikunjungi dari node tersebut ke dalam antrian.
Kembalikan daftar visited yang berisi urutan node yang telah dikunjungi.
```

```
Penjelasan Program DFS Iteratif:
Fungsi dfs(graph, start):

graph: Graf direpresentasikan sebagai dictionary (kamus) di mana setiap kunci adalah node dan nilainya adalah daftar tetangga dari node tersebut.
start: Node awal tempat pencarian dimulai.
visited: Daftar untuk melacak node yang telah dikunjungi.
stack: Tumpukan untuk melacak node yang akan dieksplorasi berikutnya.
Proses DFS Iteratif:

Masukkan node awal ke dalam tumpukan.
Selama tumpukan tidak kosong:
Keluarkan node dari tumpukan.
Jika node belum dikunjungi, tambahkan ke dalam daftar visited.
Tambahkan semua tetangga yang belum dikunjungi dari node tersebut ke dalam tumpukan.
Kembalikan daftar visited yang berisi urutan node yang telah dikunjungi.
```

```
Penjelasan Program DFS Rekursif:
Fungsi dfs_recursive(graph, node, visited=None):

graph: Graf direpresentasikan sebagai dictionary (kamus) di mana setiap kunci adalah node dan nilainya adalah daftar tetangga dari node tersebut.
node: Node saat ini yang sedang dieksplorasi.
visited: Daftar untuk melacak node yang telah dikunjungi. Diinisialisasi sebagai None dan kemudian diubah menjadi daftar kosong pada panggilan pertama.
Proses DFS Rekursif:

Jika visited belum diinisialisasi, inisialisasi sebagai daftar kosong.
Jika node saat ini belum dikunjungi, tambahkan ke dalam daftar visited.
Untuk setiap tetangga dari node saat ini:
Jika tetangga belum dikunjungi, panggil fungsi dfs_recursive untuk tetangga tersebut.
Kembalikan daftar visited yang berisi urutan node yang telah dikunjungi.
```