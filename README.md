# windows-virtual-camera

A **system‑wide virtual camera and virtual microphone platform for Windows 11**, built with **Media Foundation** and native Windows APIs.

This project allows users to replace their physical webcam and microphone with **custom video, avatars, and altered audio**, usable across **all applications** that support Windows camera and microphone devices.

---

## 🚀 Features

### ✅ Core (Implemented / In Progress)
- System‑wide **virtual camera** (appears in all apps)
- Media Foundation–based architecture
- Windows‑native C++ implementation
- Installer / registrar executable
- Clean separation of installer, engine, and UI layers

### 🎥 Video Capabilities (Planned)
- Upload and play video files (`.mp4`, `.avi`, `.mov`)
- Static image and image‑sequence input
- Live webcam passthrough
- Video looping and frame control
- Picture‑in‑picture and overlays

### 🎙 Audio Capabilities (Planned)
- Virtual microphone device
- Live microphone passthrough
- Audio file input
- Voice alteration (pitch, tone, effects)
- AI / uploaded voice models (premium)

### 🧍 Avatar & Gesture System (Planned)
- Face tracking
- Body pose tracking
- Gesture‑driven avatars
- Full‑body and multi‑angle character support
- MediaPipe integration

### 🔐 Product & Licensing (Planned)
- Free version (no watermark)
- Subscription plans
- Lifetime license
- Coupon system:
  - 100% discount
  - Partial discount
  - Lifetime unlock
- Global payments with Nigerian Naira (₦) settlement

---

## 🧠 How It Works

This project follows the **industry‑standard Windows virtual camera architecture** used by tools like OBS Virtual Camera and NVIDIA Broadcast.

### Architecture Overview

```text
┌─────────────────────────────┐
│  VirtualCamInstaller (EXE)  │
│  - Registers system camera  │
│  - Unregisters camera       │
└──────────────┬──────────────┘
               │
┌──────────────▼──────────────┐
│  Virtual Camera Engine DLL  │
│  - Media Foundation source  │
│  - Video & audio streaming  │
└──────────────┬──────────────┘
               │
┌──────────────▼──────────────┐
│        UI Application       │
│  - Upload video/audio       │
│  - Avatar & voice control  │
└─────────────────────────────┘



yaml
Copy code

- Applications (Zoom, browsers, social apps, OBS, etc.) **see only a normal camera**
- They are unaware whether the source is real, virtual, video‑based, or avatar‑based
- This approach is **legal, supported, and stable**

---

## 🖥 Supported Platforms

- **Windows 11 (Pro recommended)**
- Windows 10 (limited support planned)

---

## 📦 Project Structure

windows-virtual-camera/
│
├── VirtualCamDriver/ # Media Foundation virtual camera engine (DLL)
├── VirtualCamInstaller/ # Camera registration tool (EXE)
├── README.md
├── .gitignore
└── LICENSE

yaml
Copy code

> Build outputs (`x64/`, `Debug/`, `Release/`, `.vs/`) are intentionally excluded.

---

## 🛠 Build Requirements

- Windows 11
- Visual Studio 2022+
- Windows 11 SDK (10.0.22621+)
- C++ Desktop Development workload
- Developer Mode enabled (Windows Settings)

---

## ▶️ Build & Run (Development)

> ⚠️ This project is under active development.  
> Instructions may evolve as features are added.

1. Open the solution in **Visual Studio**
2. Build the solution
3. Run `VirtualCamInstaller` **as Administrator**
4. Confirm the camera appears in:
Settings → Bluetooth & devices → Cameras

yaml
Copy code

---

## 📌 Roadmap

### Phase 1
- ✔ Virtual camera registration
- ✔ Stable Media Foundation base

### Phase 2
- Video frame injection
- Test pattern / color output

### Phase 3
- Video file input
- Image & slideshow support

### Phase 4
- Virtual microphone
- Voice effects

### Phase 5
- Avatars & gesture tracking
- Full‑body animation

### Phase 6
- Licensing, subscriptions, coupons
- Payment integration (₦ + global)

---

## 🤝 Contributing

Contributions are welcome.

- Fork the repository
- Create a feature branch
- Commit clean, well‑documented code
- Open a pull request

Please avoid committing:
- Build outputs
- SDK binaries
- Personal configuration files

---

## ⚠️ Disclaimer

This project uses **official Windows APIs** and does not bypass application security.  
It is intended for legitimate use cases such as content creation, virtual presentations, avatars, and accessibility tools.

---

## 📄 License

MIT License.  
See `LICENSE` file for details.
