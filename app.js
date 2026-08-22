/* ============================================================
   CHECKPOINT RACING — rendering engine
   You shouldn't need to edit this file. Edit config.js instead.
   ============================================================ */

const PHOTO_SVG = `<svg viewBox="0 0 24 24" fill="none" stroke="#9C6A3C" stroke-width="1.6"><rect x="3" y="6" width="18" height="14" rx="2"/><circle cx="12" cy="13" r="3.4"/><path d="M8 6l1.5-2.5h5L16 6"/></svg>`;
const CHECKER_SVG = `<svg viewBox="0 0 24 24"><rect width="24" height="24" fill="#fff"/><g fill="#232323"><rect x="0" y="0" width="6" height="6"/><rect x="12" y="0" width="6" height="6"/><rect x="6" y="6" width="6" height="6"/><rect x="18" y="6" width="6" height="6"/><rect x="0" y="12" width="6" height="6"/><rect x="12" y="12" width="6" height="6"/><rect x="6" y="18" width="6" height="6"/><rect x="18" y="18" width="6" height="6"/></g></svg>`;
const PLAY_SVG = `<svg viewBox="0 0 24 24" fill="#fff"><path d="M8 5v14l11-7z"/></svg>`;

function isVideoFile(src){
  return /\.(mp4|mov|webm|m4v)$/i.test(src || "");
}

function mediaTag(src){
  if(!src) return "";
  return isVideoFile(src)
    ? `<video src="${src}" autoplay muted loop playsinline></video>`
    : `<img src="${src}" alt="">`;
}

document.addEventListener("DOMContentLoaded", () => {
  if (typeof CONFIG === "undefined") {
    console.error("config.js did not load — check the <script> order in index.html.");
    return;
  }

  document.title = CONFIG.hero.pageTitle || document.title;

  // ---------- HERO ----------
  document.getElementById("heroTitle").innerHTML =
    `${CONFIG.hero.brandLine1}<span class="accent-line">${CONFIG.hero.brandLine2}</span>`;
  document.getElementById("heroSubtitle").textContent = CONFIG.hero.subtitle;
  document.getElementById("heroStartBtn").textContent = CONFIG.hero.startButtonText;
  document.getElementById("heroTapHint").textContent = CONFIG.hero.tapHint;

  // ---------- CHECKPOINT 01 ----------
  if (CONFIG.checkpoint01) {
    const c = CONFIG.checkpoint01;
    document.getElementById("cp1Tag").innerHTML = `${CHECKER_SVG} ${c.tag}`;
    document.getElementById("cp1Title").textContent = c.title;
    document.getElementById("cp1Sub").textContent = c.subtitle;
    const grid = document.getElementById("cp1Grid");
    grid.innerHTML = (c.photos || []).map(p => `
      <div>
        <div class="photo-slot">
          ${mediaTag(p.src)}
          <div class="corner tl"></div><div class="corner br"></div>
          ${PHOTO_SVG}
          <div class="slot-label">${p.label || ""}</div><div class="slot-sub">tap to replace</div>
        </div>
      </div>
    `).join("");
  } else {
    document.getElementById("checkpoint01").remove();
  }

  // ---------- CHECKPOINT 02 ----------
  if (CONFIG.checkpoint02) {
    const c = CONFIG.checkpoint02;
    document.getElementById("cp2Tag").textContent = c.tag;
    document.getElementById("cp2Title").textContent = c.title;
    document.getElementById("cp2Sub").textContent = c.subtitle;
    const grid = document.getElementById("cp2Grid");
    grid.innerHTML = (c.cards || []).map(card => `
      <div class="achv-card">
        <div class="photo-slot">${mediaTag(card.photo)}${PHOTO_SVG}</div>
        <div>
          <span class="achv-badge">${card.badge || ""}</span>
          <div class="achv-title">${card.title || ""}</div>
          <div class="achv-desc">${card.desc || ""}</div>
        </div>
      </div>
    `).join("");
  } else {
    document.getElementById("checkpoint02").remove();
  }

  // ---------- CHECKPOINT 03 — videos ----------
  if (CONFIG.checkpoint03) {
    const c = CONFIG.checkpoint03;
    document.getElementById("cp3Tag").textContent = c.tag;
    document.getElementById("cp3Title").textContent = c.title;
    document.getElementById("cp3Sub").textContent = c.subtitle;
    const grid = document.getElementById("cp3Grid");
    grid.innerHTML = (c.videos || []).map(src => `
      <div class="video-slot">
        <video src="${src}" autoplay muted loop playsinline></video>
        <div class="film-strip left"></div><div class="film-strip right"></div>
        <div class="play-btn">${PLAY_SVG}</div>
      </div>
    `).join("");
  } else {
    document.getElementById("checkpoint03").remove();
  }

  // ---------- OPTIONAL GALLERY ----------
  const gallerySection = document.getElementById("checkpointGallery");
  if (CONFIG.checkpointGallery) {
    const c = CONFIG.checkpointGallery;
    gallerySection.innerHTML = `
      <div class="section-wrap reveal">
        <span class="checkpoint-tag">${c.tag}</span>
        <h2 class="level-title">${c.title}</h2>
        <p class="level-sub">${c.subtitle}</p>
        <div class="collect-grid">
          ${(c.photos || []).map((p, i) => `
            <div class="collect-card">
              <span class="collect-num">#${String(i + 1).padStart(2, "0")}</span>
              <div class="photo-slot">${mediaTag(p.src)}${PHOTO_SVG}</div>
              <div class="caption-line" style="border:none; font-weight:700; color:var(--dirt-darker);">${p.title || ""}</div>
              <div class="caption-line" style="border:none;">${p.date || ""}</div>
            </div>
          `).join("")}
        </div>
      </div>
    `;
  } else if (gallerySection) {
    gallerySection.remove();
  }

  // ---------- QUIZ ----------
  const quizSection = document.getElementById("checkpointQuiz");
  if (CONFIG.quiz && CONFIG.quiz.questions && CONFIG.quiz.questions.length) {
    document.getElementById("quizTag").textContent = CONFIG.quiz.tag;
    document.getElementById("quizTitle").innerHTML = CONFIG.quiz.title;
    document.getElementById("quizSub").textContent = CONFIG.quiz.subtitle;
    initQuiz(CONFIG.quiz.questions);
  } else if (quizSection) {
    quizSection.remove();
  }

  // ---------- FINAL MESSAGE ----------
  if (CONFIG.finalMessage) {
    const f = CONFIG.finalMessage;
    document.getElementById("finalTag").textContent = f.tag;
    document.getElementById("finalTitle").innerHTML = f.title;
    document.getElementById("finalSub").textContent = f.subtitle;
    const slot = document.getElementById("finalPhotoSlot");
    slot.insertAdjacentHTML("afterbegin", mediaTag(f.photo));
    document.getElementById("finalPhotoLabel").textContent = f.photoLabel || "";
    document.getElementById("finalGreeting").textContent = f.greeting || "";
    document.getElementById("finalMessageText").textContent = f.message || "";
  } else {
    document.getElementById("finalmsg").remove();
  }

  // ---------- FINISH LINE ----------
  if (CONFIG.finish) {
    const fi = CONFIG.finish;
    document.getElementById("finishTitle").textContent = fi.title;
    document.getElementById("finishLine1").textContent = fi.line1;
    document.getElementById("finishLine2").textContent = fi.line2;
    const slot = document.getElementById("finishPhotoSlot");
    slot.insertAdjacentHTML("afterbegin", mediaTag(fi.media));
    document.getElementById("finishPhotoLabel").textContent = fi.mediaLabel || "";
    document.getElementById("madeWith").textContent = fi.footer || "";
  }

  initRevealObserver();
  initProgressBar();
});

/* ---------------- reveal on scroll ---------------- */
function initRevealObserver(){
  const revealEls = document.querySelectorAll(".reveal");
  const io = new IntersectionObserver((entries) => {
    entries.forEach(e => { if (e.isIntersecting) e.target.classList.add("in"); });
  }, { threshold: .15 });
  revealEls.forEach(el => io.observe(el));
}

/* ---------------- progress road ---------------- */
function initProgressBar(){
  const fill = document.getElementById("progress-fill");
  const car = document.getElementById("progress-car");
  function update(){
    const h = document.documentElement;
    const scrolled = h.scrollTop;
    const max = h.scrollHeight - h.clientHeight;
    const pct = max > 0 ? Math.min(100, (scrolled / max) * 100) : 0;
    fill.style.width = pct + "%";
    car.style.left = pct + "%";
  }
  document.addEventListener("scroll", update, { passive: true });
  update();
}

/* ---------------- quiz ---------------- */
function initQuiz(QUIZ_DATA){
  let qIndex = 0, xp = 0, answered = false;
  const qEl = document.getElementById("quiz-question");
  const optsEl = document.getElementById("quiz-options");
  const bar = document.getElementById("quizBar");
  const xpPill = document.getElementById("xpPill");
  const nextBtn = document.getElementById("quiz-next");
  const liveEl = document.getElementById("quiz-live");
  const resultEl = document.getElementById("quiz-result");
  const scoreEl = document.getElementById("quiz-score");

  function renderQuestion(){
    answered = false;
    nextBtn.style.display = "none";
    const item = QUIZ_DATA[qIndex];
    qEl.textContent = `Q${qIndex + 1}. ${item.q}`;
    optsEl.innerHTML = "";
    item.options.forEach((opt, i) => {
      const b = document.createElement("button");
      b.className = "quiz-opt";
      b.textContent = opt;
      b.addEventListener("click", () => {
        if (answered) return;
        answered = true;
        const buttons = optsEl.querySelectorAll(".quiz-opt");
        buttons.forEach((bt, bi) => {
          if (bi === item.correct) bt.classList.add("correct");
          else if (bi === i) bt.classList.add("wrong");
        });
        if (i === item.correct) { xp += 20; xpPill.textContent = xp + " XP"; }
        nextBtn.style.display = "inline-block";
        nextBtn.textContent = (qIndex === QUIZ_DATA.length - 1) ? "SEE RESULT →" : "NEXT QUESTION →";
      });
      optsEl.appendChild(b);
    });
    bar.style.width = (qIndex / QUIZ_DATA.length * 100) + "%";
  }

  nextBtn.addEventListener("click", () => {
    qIndex++;
    if (qIndex >= QUIZ_DATA.length) {
      bar.style.width = "100%";
      liveEl.style.display = "none";
      nextBtn.style.display = "none";
      resultEl.style.display = "block";
      scoreEl.textContent = `You scored ${xp} XP out of ${QUIZ_DATA.length * 20}.`;
    } else {
      renderQuestion();
    }
  });

  renderQuestion();
}
