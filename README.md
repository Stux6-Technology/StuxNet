<p align="center">
  <i>Stux6 Technology Team</i><br>
  <b></b>
</p>

## StuxNet: Architectural Teardown & Source Code Reconstruction

This repository contains a comprehensive reverse engineering analysis, source code reconstruction, and architectural deconstruction of the historic **Stuxnet** worm. Managed and optimized under the **Stux6 Technology** volunteer core.

> **Disclaimer:** This project is hosted strictly for educational purposes, malware analysis training, and architectural research. All binaries and reconstructed codes are neutralized and contained within a safe simulation scope.

---

## 📁 Repository Structure

* **`main/`**: The core functional architecture of the framework.
  * **`Dropper/`**: Analysis of the initial vector, staging phases, encoding algorithms, and anti-analysis layers (`AssemblyBlock` modules).
  * **`Rootkit/`**: Kernel-level manipulation hooks, driver evasion techniques, and `FastIo` communication structures.
* **`master/`**: Isolated functional blocks categorized by their respective cryptographic hashes for modular tracking and structural analysis.

---

## 🛠️ Technical Insights & Analysis Scope

The reconstruction focuses on decoding the exact subroutines that defined Stuxnet's sophisticated operational capability:
1. **Multi-Stage Injection:** How the dropper utilizes specific stub handlers and memory sections to unpack the payload.
2. **Evasion Mechanisms:** Reverse engineering the custom encoding utilities designed to bypass signature-based AV/EDR detections of that era.
3. **Kernel-Level Hooks:** Detailed analysis of the rootkit's driver stack filter, manipulating filesystem requests to hide industrial payloads.

---

## 🔬 How to Navigate

1. Start with `main/Dropper/Main.c` to trace the initialization sequence and layout mapping.
2. Review the encoding pipelines within `main/Dropper/EncodingAlgorithms.c` to see the payload protection layers.
3. Dive into `main/Rootkit/FastIo.c` to examine low-level kernel I/O requests.

---

## ⚖️ License

Distributed under the **MIT License**. See `LICENSE` for more information.

---
<p align="center">
  <i>"Technical excellence; not from hierarchy, but from the weight of the technical burden we voluntarily undertake."</i><br>
  <b>Stux6 Technology Team</b>
</p>

<!-- Thank's: 

1) Urban Müller
2) Muhammed Abdi-ibrahim
3) Michael Jason
4) Hasan Müftüoğlu
5) Alperen ERKAN
6) Christian Roggia

--!>
