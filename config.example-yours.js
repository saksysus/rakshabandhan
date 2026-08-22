/*
  This is YOUR actual Rakhi Racing content, pre-filled, using the
  generic template's config shape. If you want your personalized
  version live, just rename this file to config.js (replacing the
  generic placeholder one) before deploying.
*/

const CONFIG = {

  hero: {
    pageTitle: "RAKHI RACING — A Journey Through Our Memories",
    brandLine1: "RAKHI",
    brandLine2: "RACING",
    subtitle: "Your biggest adventure starts here.",
    startButtonText: "START THE RACE →",
    tapHint: "🪢 Tap the Rakhi. Unlock the memories."
  },

  checkpoint01: {
    tag: "CHECKPOINT 01",
    title: "THE BEGINNING",
    subtitle: "Where it all started.",
    photos: [
      { src: "assets/2018.jpeg", label: "PHOTO 01" },
      { src: "assets/2019.jpeg", label: "PHOTO 02" },
      { src: "assets/2020.jpeg", label: "PHOTO 03" },
      { src: "assets/2021.jpeg", label: "PHOTO 04" },
      { src: "assets/2022.jpeg", label: "PHOTO 05" },
      { src: "assets/2023.jpeg", label: "PHOTO 06" }
    ]
  },

  checkpoint02: {
    tag: "🏆 CHECKPOINT 02",
    title: "CHILDHOOD CHAOS",
    subtitle: "Every sibling duo unlocks a few achievements along the way.",
    cards: [
      { photo: "assets/2024.jpeg", badge: "⭐ +100 XP", title: "Mera kanha", desc: "looking at you with those big eyes" },
      { photo: "assets/2025.jpeg", badge: "🔓 UNLOCKED", title: "Mahatma gandhi", desc: "you on gandhi jayanti" },
      { photo: "assets/2026.jpeg", badge: "🍟 BONUS", title: "mera kuchu puchuuu baby", desc: "you always ask me to play with you" },
      { photo: "assets/2027.jpeg", badge: "⭐ +100 XP", title: "all of us together", desc: "my lovesss" }
    ]
  },

  checkpoint03: {
    tag: "🎬 CHECKPOINT 03",
    title: "MEMORY CHECKPOINT",
    subtitle: "Press play and relive it.",
    videos: [
      "assets/2028.mp4",
      "assets/2029.mp4",
      "assets/2030.mp4"
    ]
  },

  checkpointGallery: null,

  quiz: {
    tag: "🧠 CHECKPOINT 04",
    title: "HOW WELL DO YOU<br>KNOW YOUR SISTER?",
    subtitle: "Answer to earn XP.",
    questions: [
      { q: "What's my brother's go-to comfort food?", options: ["pani puri", "samosa", "pav bhaji", "dal chawal"], correct: 0 },
      { q: "What nickname do I call him?", options: ["pup", "all", "papita", "handsome"], correct: 2 }
    ]
  },

  finalMessage: {
    tag: "🏁 FINAL CHECKPOINT",
    title: "BEFORE YOU FINISH<br>THE RACE…",
    subtitle: "One more thing before the finish line.",
    photo: "assets/final.jpeg",
    photoLabel: "MERA BHONDU",
    greeting: "Dear SHIBU,",
    message: "To my handsome 🦸🏻‍♂️❤️\nyou've filled my life with the biggest smiles, the funniest moments, and so much love. 🥹🫶🏻\nGrow up to be the amazing person you're meant to be🥺❤️\nHappy Raksha Bandhan, my little brother! 🎀🧿\nLove you more than you'll ever know. ❤️"
  },

  finish: {
    title: "LEVEL COMPLETE",
    line1: "Thanks for being my forever teammate.",
    line2: "Happy Raksha Bandhan ❤️",
    media: "assets/3031.mp4",
    mediaLabel: "US, TOGETHER",
    footer: "RAKHI RACING · made with love, one checkpoint at a time"
  }

};
