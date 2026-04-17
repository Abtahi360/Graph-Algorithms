# Graph Algorithms in C++

This repository contains basic graph implementations and operations using C++. It includes directed and undirected graphs, adjacency list representation, and degree calculation.

---

## 📌 Features

* Directed Graph
* Undirected Graph
* Adjacency List Implementation
* In-Degree & Out-Degree (Directed Graph)
* Degree Calculation (Undirected Graph)
* File Input Support

---

## 📁 Project Structure

TODAY LAB/

├── directed.cpp
├── undirected.cpp
├── both.cpp

├── find degree_directed/
│   ├── find degree_directed.cpp
│   ├── graph values.txt

├── find degree_undirected/
│   ├── find degree_undirected.cpp
│   ├── graph values.txt

---

## ⚙️ How It Works

### Directed Graph

* Stores edges in one direction (u → v)
* Uses adjacency list

### Undirected Graph

* Stores edges both ways (u ↔ v)

### Degree Calculation

Directed Graph:

* In-Degree = incoming edges
* Out-Degree = outgoing edges

Undirected Graph:

* Degree = total connected edges

---

## ▶️ Run the Code

Compile:
g++ directed.cpp -o directed
g++ undirected.cpp -o undirected

Run:
./directed
./undirected

---

## 📥 Input Format

n m
u v
u v

Example:

5 4
0 1
1 2
2 3
3 4

---

## 📂 File Input

For degree programs, input file:
graph values.txt

---

## 💡 Concepts Used

* Graph Theory
* Adjacency List
* STL (vector)
* File Handling

---

## 🚀 Future Work

* BFS / DFS
* Dijkstra Algorithm
* Weighted Graph
