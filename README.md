# SnapSort – AI-Powered Photo Organizer using Visual Intelligence & DSA (C++ Project)

A professional offline photo-organizing application built fully in **C++** using **OpenCV** and classic **Data Structures & Algorithms (DSA)** like Trie, Union-Find, Graphs, and Sliding Window.
---
## Problem

Most users today have thousands of unorganized photos on their phones or laptops. Common issues include:
- Duplicate or burst images taking up space
- No automatic way to create albums based on events or dates
- Manual sorting and tagging is time-consuming
- Searching for a photo like “Goa trip 2024” is difficult without structured albums

There is **no lightweight, offline C++ tool** that solves this using intelligent logic and structured algorithms.

---

## Solution

**SnapSort** solves this problem by applying advanced image and data structure logic to:
- Automatically organize photos into **albums** by time and similarity
- Detect and group **duplicate or burst images**
- ✅ Extract time data and visually hash each image
- ✅ Use **DSA** to intelligently cluster, search, and tag
- ✅ Save results into neat folders like `album_0`, `album_1`, etc.

All this is done **offline**, using pure C++ for performance, and no external cloud or AI models.

---

## 💡 Technologies & DSA Used

| Area                  | Technology / Algorithm          | Purpose                                          |
|-----------------------|----------------------------------|--------------------------------------------------|
| Language              | **C++17**                        | Full application written in C++                  |
| Image Processing      | **OpenCV**                       | Reading images, resizing, grayscale, hashing     |
| Duplicate Detection   | **Hashing + Union-Find**         | Group near-identical images                      |
| Album Clustering      | **Graph + DFS**                  | Cluster images into events using time data       |
| Burst Detection       | **Sliding Window**               | Identify quick-sequence images                   |
| Tag Indexing          | **Trie**                         | Fast search and tagging                          |
| File Management       | **<filesystem>**                 | Folder creation and image writing                |
| Timestamps            | **<chrono>, <ctime>**            | Time-based sorting and clustering                |
| Build Tool            | **CMake**                        | Compile multi-file C++ project                   |

---

## 🧠 What Makes SnapSort Special

- 🚀 Solves a **real-world daily problem** (photo mess)
- 🧠 Uses **classic DSA** to solve a visual, practical challenge
- 📁 Completely **local** and **privacy-friendly**
- 🔧 Built with **zero Python, cloud, or external API dependency**

---

