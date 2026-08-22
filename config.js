/*
  ============================================================
  CHECKPOINT RACING — CONFIG
  ============================================================
  This is the ONLY file you need to edit.

  - Put your photo/video files in the assets/ folder.
  - Reference them below by filename only, e.g. "photo1.jpg"
    (this assumes they live in assets/ — see index.html if you
    move them elsewhere).
  - Any list below (photos, cards, videos, quiz questions) can
    have as many or as few items as you want — the page builds
    itself to match. Delete a whole section object and set it
    to null to skip that checkpoint entirely (e.g. no quiz).
  - This template was originally built for Raksha Bandhan, but
    every label is editable — reuse it for a birthday, an
    anniversary, a friendship day, a graduation, whatever you like.
  ============================================================
*/

const CONFIG = {

  // ---------- HERO ----------
  hero: {
    pageTitle: "CHECKPOINT RACING — A Journey Through Our Memories",
    brandLine1: "CHECKPOINT",
    brandLine2: "RACING",
    subtitle: "Your biggest adventure starts here.",
    startButtonText: "START THE RACE →",
    tapHint: "🏁 Tap to begin. Unlock the memories."
  },

  // ---------- CHECKPOINT 01 — simple photo grid ----------
  checkpoint01: {
    tag: "CHECKPOINT 01",
    title: "THE BEGINNING",
    subtitle: "Where it all started.",
    // Add or remove entries freely — the grid adapts automatically.
    photos: [
      { src: "assets/photo1.jpg", label: "PHOTO 01" },
      { src: "assets/photo2.jpg", label: "PHOTO 02" },
      { src: "assets/photo3.jpg", label: "PHOTO 03" },
      { src: "assets/photo4.jpg", label: "PHOTO 04" }
    ]
  },

  // ---------- CHECKPOINT 02 — achievement / memory cards ----------
  checkpoint02: {
    tag: "🏆 CHECKPOINT 02",
    title: "MEMORY UNLOCKED",
    subtitle: "A few achievements worth remembering.",
    // Add or remove cards freely.
    cards: [
      {
        photo: "assets/photo5.jpg",
        badge: "⭐ +100 XP",
        title: "Your achievement title",
        desc: "A short story or caption goes here."
      },
      {
        photo: "assets/photo6.jpg",
        badge: "🔓 UNLOCKED",
        title: "Your achievement title",
        desc: "A short story or caption goes here."
      }
    ]
  },

  // ---------- CHECKPOINT 03 — videos ----------
  checkpoint03: {
    tag: "🎬 CHECKPOINT 03",
    title: "MEMORY CHECKPOINT",
    subtitle: "Press play and relive it.",
    // Add or remove videos freely. All loop + autoplay muted.
    videos: [
      "assets/video1.mp4",
      "assets/video2.mp4"
    ]
  },

  // ---------- OPTIONAL — collectible photo gallery ----------
  // Set to null to skip this checkpoint entirely.
  checkpointGallery: null,
  /* Example if you want it:
  checkpointGallery: {
    tag: "🃏 CHECKPOINT 04",
    title: "OUR BEST MOMENTS",
    subtitle: "Collect them all.",
    photos: [
      { src: "assets/moment1.jpg", title: "Memory title", date: "2022" },
      { src: "assets/moment2.jpg", title: "Memory title", date: "2023" }
    ]
  },
  */

  // ---------- QUIZ ----------
  // Set to null to skip the quiz entirely.
  quiz: {
    tag: "🧠 CHECKPOINT",
    title: "HOW WELL DO YOU<br>KNOW THEM?",
    subtitle: "Answer to earn XP.",
    // Add or remove questions freely. "correct" is the index (0-based)
    // of the right answer in "options".
    questions: [
      {
        q: "Sample question — replace with your own?",
        options: ["Option A", "Option B", "Option C", "Option D"],
        correct: 0
      }
    ]
  },

  // ---------- FINAL MESSAGE ----------
  finalMessage: {
    tag: "🏁 FINAL CHECKPOINT",
    title: "BEFORE YOU FINISH<br>THE RACE…",
    subtitle: "One more thing before the finish line.",
    photo: "assets/final-photo.jpg",   // photo OR video file — auto-detected by extension
    photoLabel: "MY PERSON",
    greeting: "Dear [Name],",
    // Line breaks in this string become line breaks on the page.
    message: "Write your personal message here.\nIt's fully editable on the page too."
  },

  // ---------- FINISH LINE ----------
  finish: {
    title: "LEVEL COMPLETE",
    line1: "Thanks for being part of this.",
    line2: "Happy celebrating ❤️",
    media: "assets/finish-photo.jpg",  // photo OR video file — auto-detected by extension
    mediaLabel: "TOGETHER",
    footer: "CHECKPOINT RACING · made with love, one checkpoint at a time"
  }

};
