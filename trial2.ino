<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1">
<title>RAKHI RACING — A Journey Through Our Memories</title>
<link rel="preconnect" href="https://fonts.googleapis.com">
<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
<link href="https://fonts.googleapis.com/css2?family=Baloo+2:wght@500;700;800&family=Quicksand:wght@500;600;700&family=Kalam:wght@400;700&display=swap" rel="stylesheet">
<style>
  :root{
    --sky-top:#4FC3F0;
    --sky-mid:#8FDFF5;
    --sky-bottom:#DFF6FD;
    --grass:#6DBE3F;
    --grass-dark:#4A8F2A;
    --grass-darker:#3A7020;
    --dirt:#9C6A3C;
    --dirt-dark:#7A4E28;
    --dirt-darker:#5C3A1E;
    --cream:#FFF8ED;
    --paper:#FFFCF6;
    --ink:#2B2118;
    --flag-black:#232323;
    --accent-orange:#FF6B35;
    --accent-red:#E8432F;
    --gold:#FFC93C;
    --gold-dark:#E0A800;
    --sky-cloud:#FFFFFF;
    --font-display:'Baloo 2', system-ui, sans-serif;
    --font-body:'Quicksand', system-ui, sans-serif;
    --font-hand:'Kalam', cursive;
  }
  *{box-sizing:border-box; margin:0; padding:0;}
  html{scroll-behavior:smooth;}
  body{
    font-family:var(--font-body);
    color:var(--ink);
    background:var(--cream);
    overflow-x:hidden;
    -webkit-font-smoothing:antialiased;
  }
  img{max-width:100%; display:block;}
  h1,h2,h3{font-family:var(--font-display);}
  section{position:relative;}

  /* ---------- progress road bar ---------- */
  #progress-road{
    position:fixed; top:0; left:0; right:0; height:44px; z-index:500;
    background:linear-gradient(180deg,var(--dirt) 0%,var(--dirt-dark) 100%);
    border-bottom:3px solid var(--dirt-darker);
    display:flex; align-items:center;
    box-shadow:0 4px 14px rgba(0,0,0,.25);
  }
  #progress-track{
    position:relative; flex:1; height:10px; margin:0 14px;
    background:repeating-linear-gradient(90deg,#fff 0 16px, transparent 16px 32px);
    opacity:.85; border-radius:5px;
  }
  #progress-fill{
    position:absolute; top:0; left:0; height:100%; width:0%;
    background:var(--gold); border-radius:5px;
    transition:width .08s linear;
  }
  #progress-car{
    position:absolute; top:50%; left:0%;
    transform:translate(-50%,-58%);
    font-size:22px; transition:left .08s linear;
    filter:drop-shadow(0 2px 2px rgba(0,0,0,.4));
  }
  #progress-label{
    font-family:var(--font-display); color:var(--cream); font-weight:700;
    font-size:12px; letter-spacing:.5px; padding-right:14px; white-space:nowrap;
  }

  /* ---------- reveal animation ---------- */
  .reveal{opacity:0; transform:translateY(36px); transition:opacity .7s ease, transform .7s ease;}
  .reveal.in{opacity:1; transform:translateY(0);}

  /* ---------- shared checkpoint header ---------- */
  .checkpoint-tag{
    display:inline-flex; align-items:center; gap:8px;
    background:var(--flag-black); color:#fff;
    font-family:var(--font-display); font-weight:700;
    font-size:13px; letter-spacing:1.5px;
    padding:7px 16px 7px 12px; border-radius:999px;
    margin-bottom:14px;
  }
  .checkpoint-tag svg{width:16px; height:16px;}
  .level-title{
    font-size:clamp(28px,7vw,44px); font-weight:800; line-height:1.05;
    color:var(--dirt-darker); -webkit-text-stroke:1px var(--dirt-darker);
    margin-bottom:6px;
  }
  .level-sub{
    font-size:15px; color:#5C4A3A; max-width:520px; margin-bottom:34px; line-height:1.5;
  }
  .section-wrap{
    max-width:980px; margin:0 auto; padding:80px 22px 70px;
  }

  /* ---------- hill divider ---------- */
  .hill-divider{display:block; width:100%; line-height:0;}
  .hill-divider svg{width:100%; height:auto; display:block;}

  /* =========================================================
     HERO
  ==========================================================*/
  #hero{
    min-height:100svh; position:relative; overflow:hidden;
    background:linear-gradient(180deg,var(--sky-top) 0%,var(--sky-mid) 55%,var(--sky-bottom) 100%);
    display:flex; flex-direction:column; align-items:center; justify-content:flex-end;
    padding-top:70px;
  }
  .cloud{position:absolute; background:var(--sky-cloud); border-radius:100px; opacity:.9;}
  .cloud::before,.cloud::after{content:'';position:absolute; background:var(--sky-cloud); border-radius:100px;}
  .sun{
    position:absolute; top:70px; right:12%; width:78px; height:78px; border-radius:50%;
    background:radial-gradient(circle at 35% 30%,#FFF6C9,var(--gold) 70%);
    box-shadow:0 0 40px 10px rgba(255,201,60,.5);
  }
  .hero-content{
    position:relative; z-index:5; text-align:center; padding:0 20px 26px;
  }
  .flag-row{display:flex; justify-content:center; gap:10px; margin-bottom:14px;}
  .flag-row svg{width:34px; height:34px; transform:rotate(-8deg);}
  .flag-row svg:last-child{transform:rotate(8deg);}
  .hero-title{
    font-size:clamp(46px,15vw,96px); font-weight:800; color:#fff;
    -webkit-text-stroke:3px var(--flag-black); paint-order:stroke fill;
    line-height:.95; letter-spacing:1px;
    text-shadow:5px 6px 0 rgba(0,0,0,.18);
    margin-bottom:10px;
  }
  .hero-title span{display:block; color:var(--accent-orange); -webkit-text-stroke:3px var(--flag-black);}
  .hero-subtitle{
    font-family:var(--font-hand); font-size:clamp(20px,4.5vw,28px);
    color:var(--dirt-darker); margin-bottom:26px;
  }
  .start-btn{
    font-family:var(--font-display); font-weight:700; font-size:19px;
    color:#fff; background:linear-gradient(180deg,var(--accent-orange),var(--accent-red));
    border:3px solid var(--flag-black); border-radius:999px;
    padding:16px 34px; box-shadow:0 6px 0 var(--flag-black);
    cursor:pointer; letter-spacing:.5px;
    transition:transform .12s ease, box-shadow .12s ease;
    text-decoration:none; display:inline-block;
  }
  .start-btn:active{transform:translateY(6px); box-shadow:0 0 0 var(--flag-black);}
  .tap-hint{
    margin-top:16px; font-size:13px; color:#5C4A3A; font-weight:600;
    display:flex; align-items:center; justify-content:center; gap:6px;
  }

  /* hero hill scene */
  .hero-scene{position:relative; width:100%; height:38vh; min-height:230px;}
  .hero-hill{position:absolute; bottom:0; left:0; width:100%; height:100%;}
  .hero-vehicle{
    position:absolute; bottom:16%; left:52%; width:112px;
    transform:translateX(-50%) rotate(-16deg);
    animation:bob 2.4s ease-in-out infinite;
    filter:drop-shadow(3px 6px 3px rgba(0,0,0,.25));
  }
  @keyframes bob{0%,100%{transform:translateX(-50%) rotate(-16deg) translateY(0);}50%{transform:translateX(-50%) rotate(-14deg) translateY(-6px);}}
  .dust{position:absolute; bottom:10%; left:38%; width:70px; opacity:.85; animation:dustPuff 1.8s ease-in-out infinite;}
  @keyframes dustPuff{0%{opacity:.2; transform:translate(0,0) scale(.7);}50%{opacity:.75;}100%{opacity:0; transform:translate(-26px,10px) scale(1.15);}}

  /* =========================================================
     GENERIC PLACEHOLDERS
  ==========================================================*/
  .photo-slot{
    position:relative; aspect-ratio:4/5; border-radius:16px;
    border:3px dashed var(--dirt); background:
      repeating-linear-gradient(135deg,#EFE3CE 0 12px,#F6EEDD 12px 24px);
    display:flex; flex-direction:column; align-items:center; justify-content:center;
    gap:10px; overflow:hidden; text-align:center; padding:14px;
  }
  .photo-slot svg{width:38px; height:38px; opacity:.55;}
  .photo-slot .slot-label{
    font-family:var(--font-display); font-weight:700; font-size:13px;
    color:var(--dirt-darker); letter-spacing:.4px;
  }
  .photo-slot .slot-sub{font-size:11px; color:#8a745a; font-weight:600;}
  .photo-slot .corner{
    position:absolute; width:20px; height:20px; border:3px solid var(--accent-orange);
    opacity:.9;
  }
  .photo-slot .corner.tl{top:8px; left:8px; border-right:none; border-bottom:none;}
  .photo-slot .corner.br{bottom:8px; right:8px; border-left:none; border-top:none;}

  .caption-area{margin-top:10px;}
  .caption-line{
    border:none; border-bottom:2px dotted #C7B49A; background:transparent;
    width:100%; font-family:var(--font-body); font-weight:600; font-size:13px;
    color:#8a745a; padding:4px 2px; margin-bottom:4px;
  }
  .caption-line::placeholder{color:#B7A488;}

  .video-slot{
    position:relative; aspect-ratio:16/10; border-radius:20px;
    background:linear-gradient(150deg,#2B2118,#463527);
    border:3px solid var(--flag-black);
    display:flex; flex-direction:column; align-items:center; justify-content:center;
    gap:12px; overflow:hidden;
  }
  .video-slot::before{
    content:''; position:absolute; inset:0;
    background-image:repeating-linear-gradient(45deg, rgba(255,255,255,.03) 0 2px, transparent 2px 14px);
  }
  .play-btn{
    width:66px; height:66px; border-radius:50%;
    background:var(--accent-orange); border:3px solid #fff;
    display:flex; align-items:center; justify-content:center;
    box-shadow:0 0 0 6px rgba(255,255,255,.15);
  }
  .play-btn svg{width:26px; height:26px; margin-left:3px;}
  .video-slot .v-label{font-family:var(--font-display); color:#fff; font-weight:700; font-size:14px; letter-spacing:1px;}
  .video-slot .v-sub{color:#C9BBA8; font-size:11px; font-weight:600;}
  .film-strip{position:absolute; top:0; bottom:0; width:16px; background:
    repeating-linear-gradient(180deg,#111 0 10px, #333 10px 14px);}
  .film-strip.left{left:0;} .film-strip.right{right:0;}

  /* =========================================================
     LEVEL 01 — grid
  ==========================================================*/
  #level01{background:var(--paper);}
  .grid-6{display:grid; grid-template-columns:repeat(2,1fr); gap:18px;}
  @media(min-width:700px){.grid-6{grid-template-columns:repeat(3,1fr);}}

  /* =========================================================
     LEVEL 02 — achievement cards
  ==========================================================*/
  #level02{background:linear-gradient(180deg,#FFF3DC,var(--paper));}
  .achv-grid{display:grid; grid-template-columns:1fr; gap:20px;}
  @media(min-width:640px){.achv-grid{grid-template-columns:1fr 1fr;}}
  .achv-card{
    background:var(--paper); border:3px solid var(--dirt);
    border-radius:18px; padding:16px; display:flex; gap:14px; align-items:flex-start;
    box-shadow:5px 5px 0 rgba(122,78,40,.18);
  }
  .achv-card .photo-slot{width:96px; height:96px; aspect-ratio:auto; flex-shrink:0; border-radius:12px;}
  .achv-badge{
    display:inline-flex; align-items:center; gap:5px;
    background:var(--gold); color:var(--dirt-darker);
    font-family:var(--font-display); font-weight:700; font-size:11.5px;
    padding:4px 10px; border-radius:999px; margin-bottom:8px; border:2px solid var(--gold-dark);
  }
  .achv-title{font-family:var(--font-display); font-weight:700; font-size:15px; margin-bottom:4px;}
  .achv-desc{font-size:12.5px; color:#7a6650;}

  /* =========================================================
     LEVEL 03 — video section
  ==========================================================*/
  #level03{background:linear-gradient(180deg,var(--dirt-darker),#241a12);}
  #level03 .level-title{color:var(--cream); -webkit-text-stroke:1px var(--flag-black);}
  #level03 .level-sub{color:#D9C8B3;}
  .video-grid{display:grid; grid-template-columns:1fr; gap:24px;}
  @media(min-width:700px){.video-grid{grid-template-columns:1fr 1fr;}}
  .video-grid .video-slot:first-child{grid-column:1/-1;}

  /* =========================================================
     LEVEL 04 — collectible gallery
  ==========================================================*/
  #level04{background:var(--paper);}
  .collect-grid{display:grid; grid-template-columns:repeat(2,1fr); gap:16px;}
  @media(min-width:700px){.collect-grid{grid-template-columns:repeat(3,1fr);}}
  .collect-card{
    background:#fff; border-radius:16px; border:3px solid var(--dirt);
    padding:10px; box-shadow:4px 5px 0 rgba(122,78,40,.16);
    display:flex; flex-direction:column; gap:8px;
  }
  .collect-card .photo-slot{aspect-ratio:1/1; border-radius:10px;}
  .collect-num{
    font-family:var(--font-display); font-size:11px; font-weight:700;
    color:#fff; background:var(--accent-orange); border-radius:6px;
    padding:2px 7px; align-self:flex-start;
  }

  /* =========================================================
     LEVEL 05 — quiz
  ==========================================================*/
  #level05{background:linear-gradient(180deg,var(--sky-mid),var(--paper));}
  .quiz-card{
    background:var(--paper); border:3px solid var(--flag-black); border-radius:22px;
    padding:26px 22px; max-width:600px; margin:0 auto; box-shadow:6px 7px 0 rgba(0,0,0,.15);
  }
  .quiz-top{display:flex; justify-content:space-between; align-items:center; margin-bottom:16px; gap:10px;}
  .xp-pill{
    font-family:var(--font-display); font-weight:700; font-size:12.5px;
    background:var(--gold); border:2px solid var(--gold-dark); color:var(--dirt-darker);
    padding:5px 12px; border-radius:999px;
  }
  .quiz-progress-outer{flex:1; height:10px; background:#EADFCB; border-radius:6px; overflow:hidden; border:1.5px solid var(--dirt);}
  .quiz-progress-inner{height:100%; width:0%; background:var(--accent-orange); transition:width .3s ease;}
  #quiz-question{font-family:var(--font-display); font-size:19px; font-weight:700; margin-bottom:16px; line-height:1.3;}
  .quiz-options{display:flex; flex-direction:column; gap:10px;}
  .quiz-opt{
    font-family:var(--font-body); font-weight:600; font-size:14.5px;
    text-align:left; padding:13px 16px; border-radius:12px;
    border:2.5px solid var(--dirt); background:#fff; cursor:pointer;
    transition:transform .1s ease, background .2s ease;
  }
  .quiz-opt:hover{transform:translateX(3px); background:#FFF3DC;}
  .quiz-opt.correct{background:#DCF4D0; border-color:var(--grass-dark);}
  .quiz-opt.wrong{background:#FBDAD3; border-color:var(--accent-red);}
  #quiz-result{display:none; text-align:center;}
  #quiz-result .badge-icon{font-size:52px; margin-bottom:8px;}
  #quiz-next{
    margin-top:16px; font-family:var(--font-display); font-weight:700;
    background:var(--flag-black); color:#fff; border:none; border-radius:999px;
    padding:11px 22px; cursor:pointer; font-size:14px; display:none;
  }

  /* =========================================================
     FINAL CHECKPOINT — message
  ==========================================================*/
  #finalmsg{background:linear-gradient(180deg,#3A2A1C,#1E140D); color:var(--cream);}
  #finalmsg .level-title{color:var(--cream); -webkit-text-stroke:1px #000;}
  #finalmsg .level-sub{color:#D9C8B3;}
  .msg-layout{display:grid; grid-template-columns:1fr; gap:28px; align-items:start;}
  @media(min-width:760px){.msg-layout{grid-template-columns:0.8fr 1.2fr;}}
  #finalmsg .photo-slot{background:repeating-linear-gradient(135deg,#3E2E1F 0 12px,#463527 12px 24px); border-color:#C9A56A;}
  #finalmsg .photo-slot svg{opacity:.5; filter:invert(1);}
  #finalmsg .slot-label,#finalmsg .slot-sub{color:#E8D9C4;}
  .letter-box{
    background:var(--paper); color:var(--ink); border-radius:18px; padding:26px;
    position:relative; box-shadow:6px 8px 0 rgba(0,0,0,.3);
  }
  .letter-box::before{
    content:'✉'; position:absolute; top:-18px; left:22px; font-size:30px;
  }
  .letter-heading{font-family:var(--font-hand); font-size:26px; color:var(--accent-red); margin-bottom:10px;}
  .letter-editable{
    font-family:var(--font-hand); font-size:19px; line-height:1.7; color:#4a3a28;
    min-height:180px; outline:none; border-bottom:2px dashed #C7B49A;
  }
  .edit-hint{margin-top:10px; font-size:11.5px; color:#9a8770; font-weight:600;}

  /* =========================================================
     FINISH LINE
  ==========================================================*/
  #finish{
    background:repeating-conic-gradient(#fff 0% 25%, #232323 0% 50%) 0 0/50px 50px;
    padding:0;
  }
  .finish-inner{
    background:rgba(255,248,237,.94); padding:90px 22px 100px; text-align:center;
  }
  .finish-flag{font-size:54px; margin-bottom:6px;}
  .finish-title{font-size:clamp(34px,9vw,56px); font-weight:800; color:var(--dirt-darker); -webkit-text-stroke:1px var(--dirt-darker); margin-bottom:10px;}
  .finish-line1{font-family:var(--font-body); font-weight:700; font-size:18px; color:#5C4A3A; margin-bottom:2px;}
  .finish-line2{font-family:var(--font-hand); font-size:26px; color:var(--accent-red); margin-bottom:30px;}
  .finish-photo{max-width:280px; margin:0 auto;}
  .finish-photo .photo-slot{aspect-ratio:1/1; border-radius:50%;}
  .made-with{margin-top:40px; font-size:11px; color:#B7A488; font-weight:600;}

  /* misc */
  .checker-strip{height:14px; width:100%;
    background:repeating-linear-gradient(90deg,#fff 0 14px,#232323 14px 28px);}
</style>
</head>
<body>

<!-- ===================== PROGRESS ROAD ===================== -->
<div id="progress-road">
  <div id="progress-label">RACE&nbsp;PROGRESS</div>
  <div id="progress-track">
    <div id="progress-fill"></div>
    <div id="progress-car">🚙</div>
  </div>
</div>

<!-- ===================== HERO ===================== -->
<section id="hero">
  <div class="sun"></div>
  <div class="cloud" style="width:100px;height:36px;top:110px;left:8%;"></div>
  <div class="cloud" style="width:70px;height:26px;top:170px;left:62%;"></div>
  <div class="cloud" style="width:60px;height:24px;top:90px;left:40%;"></div>

  <div class="hero-content">
    <div class="flag-row">
      <svg viewBox="0 0 24 24"><rect width="24" height="24" fill="#fff"/><g fill="#232323"><rect x="0" y="0" width="6" height="6"/><rect x="12" y="0" width="6" height="6"/><rect x="6" y="6" width="6" height="6"/><rect x="18" y="6" width="6" height="6"/><rect x="0" y="12" width="6" height="6"/><rect x="12" y="12" width="6" height="6"/><rect x="6" y="18" width="6" height="6"/><rect x="18" y="18" width="6" height="6"/></g></svg>
      <svg viewBox="0 0 24 24"><rect width="24" height="24" fill="#fff"/><g fill="#232323"><rect x="0" y="0" width="6" height="6"/><rect x="12" y="0" width="6" height="6"/><rect x="6" y="6" width="6" height="6"/><rect x="18" y="6" width="6" height="6"/><rect x="0" y="12" width="6" height="6"/><rect x="12" y="12" width="6" height="6"/><rect x="6" y="18" width="6" height="6"/><rect x="18" y="18" width="6" height="6"/></g></svg>
    </div>
    <h1 class="hero-title">RAKHI<span>RACING</span></h1>
    <p class="hero-subtitle">Your biggest adventure starts here.</p>
    <a href="#level01" class="start-btn">START THE RACE →</a>
    <p class="tap-hint">🪢 Tap the Rakhi. Unlock the memories.</p>
  </div>

  <div class="hero-scene">
    <svg class="hero-hill" viewBox="0 0 500 230" preserveAspectRatio="none">
      <path d="M0,230 L0,140 Q120,40 250,110 Q380,180 500,90 L500,230 Z" fill="var(--grass-dark)"/>
      <path d="M0,230 L0,160 Q130,70 260,130 Q390,190 500,120 L500,230 Z" fill="var(--grass)"/>
      <path d="M0,230 L0,190 Q150,150 300,185 Q400,205 500,175 L500,230 Z" fill="var(--dirt)"/>
    </svg>
    <img class="hero-vehicle" alt="Original cartoon racing buggy climbing a dirt hill" src="data:image/svg+xml;utf8,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 140 100'%3E%3Cellipse cx='104' cy='78' rx='18' ry='18' fill='%23232323'/%3E%3Ccircle cx='104' cy='78' r='9' fill='%23888'/%3E%3Cellipse cx='40' cy='78' rx='18' ry='18' fill='%23232323'/%3E%3Ccircle cx='40' cy='78' r='9' fill='%23888'/%3E%3Cpath d='M14,72 L20,44 Q26,32 44,32 L92,32 Q106,32 112,48 L124,72 Q124,80 112,80 L26,80 Q14,80 14,72 Z' fill='%23FF6B35' stroke='%23232323' stroke-width='4'/%3E%3Cpath d='M46,32 L56,14 Q62,8 72,8 L82,8 Q90,8 92,18 L94,32 Z' fill='%23FFDD55' stroke='%23232323' stroke-width='4'/%3E%3Ccircle cx='72' cy='18' r='7' fill='%23F4C9A0'/%3E%3C/svg%3E">
    <img class="dust" alt="" src="data:image/svg+xml;utf8,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 100 60'%3E%3Ccircle cx='20' cy='40' r='10' fill='%23C9A56A' opacity='.7'/%3E%3Ccircle cx='42' cy='30' r='14' fill='%23C9A56A' opacity='.6'/%3E%3Ccircle cx='68' cy='38' r='11' fill='%23C9A56A' opacity='.7'/%3E%3C/svg%3E">
  </div>
  <div class="checker-strip"></div>
</section>

<!-- ===================== LEVEL 01 ===================== -->
<section id="level01">
  <div class="section-wrap reveal">
    <span class="checkpoint-tag">
      <svg viewBox="0 0 24 24"><rect width="24" height="24" fill="#fff"/><g fill="#232323"><rect x="0" y="0" width="6" height="6"/><rect x="12" y="0" width="6" height="6"/><rect x="6" y="6" width="6" height="6"/><rect x="18" y="6" width="6" height="6"/><rect x="0" y="12" width="6" height="6"/><rect x="12" y="12" width="6" height="6"/><rect x="6" y="18" width="6" height="6"/><rect x="18" y="18" width="6" height="6"/></g></svg>
      CHECKPOINT 01
    </span>
    <h2 class="level-title">THE BEGINNING</h2>
    <p class="level-sub">Where it all started — [add your earliest memory together as a caption on the photos below].</p>

    <div class="grid-6">
      <!-- Repeated photo slot block x6 — duplicate this <div class="photo-slot-wrap"> to add more -->
      <div>
        <div class="photo-slot"><div class="corner tl"></div><div class="corner br"></div>
          <svg viewBox="0 0 24 24" fill="none" stroke="#9C6A3C" stroke-width="1.6"><rect x="3" y="6" width="18" height="14" rx="2"/><circle cx="12" cy="13" r="3.4"/><path d="M8 6l1.5-2.5h5L16 6"/></svg>
          <div class="slot-label">PHOTO 01</div><div class="slot-sub">tap to replace</div>
        </div>
        <div class="caption-area">
          <input class="caption-line" placeholder="Year">
          <input class="caption-line" placeholder="Place">
          <input class="caption-line" placeholder="Funny memory / short caption">
        </div>
      </div>
      <div>
        <div class="photo-slot"><div class="corner tl"></div><div class="corner br"></div>
          <svg viewBox="0 0 24 24" fill="none" stroke="#9C6A3C" stroke-width="1.6"><rect x="3" y="6" width="18" height="14" rx="2"/><circle cx="12" cy="13" r="3.4"/><path d="M8 6l1.5-2.5h5L16 6"/></svg>
          <div class="slot-label">PHOTO 02</div><div class="slot-sub">tap to replace</div>
        </div>
        <div class="caption-area">
          <input class="caption-line" placeholder="Year">
          <input class="caption-line" placeholder="Place">
          <input class="caption-line" placeholder="Funny memory / short caption">
        </div>
      </div>
      <div>
        <div class="photo-slot"><div class="corner tl"></div><div class="corner br"></div>
          <svg viewBox="0 0 24 24" fill="none" stroke="#9C6A3C" stroke-width="1.6"><rect x="3" y="6" width="18" height="14" rx="2"/><circle cx="12" cy="13" r="3.4"/><path d="M8 6l1.5-2.5h5L16 6"/></svg>
          <div class="slot-label">PHOTO 03</div><div class="slot-sub">tap to replace</div>
        </div>
        <div class="caption-area">
          <input class="caption-line" placeholder="Year">
          <input class="caption-line" placeholder="Place">
          <input class="caption-line" placeholder="Funny memory / short caption">
        </div>
      </div>
      <div>
        <div class="photo-slot"><div class="corner tl"></div><div class="corner br"></div>
          <svg viewBox="0 0 24 24" fill="none" stroke="#9C6A3C" stroke-width="1.6"><rect x="3" y="6" width="18" height="14" rx="2"/><circle cx="12" cy="13" r="3.4"/><path d="M8 6l1.5-2.5h5L16 6"/></svg>
          <div class="slot-label">PHOTO 04</div><div class="slot-sub">tap to replace</div>
        </div>
        <div class="caption-area">
          <input class="caption-line" placeholder="Year">
          <input class="caption-line" placeholder="Place">
          <input class="caption-line" placeholder="Funny memory / short caption">
        </div>
      </div>
      <div>
        <div class="photo-slot"><div class="corner tl"></div><div class="corner br"></div>
          <svg viewBox="0 0 24 24" fill="none" stroke="#9C6A3C" stroke-width="1.6"><rect x="3" y="6" width="18" height="14" rx="2"/><circle cx="12" cy="13" r="3.4"/><path d="M8 6l1.5-2.5h5L16 6"/></svg>
          <div class="slot-label">PHOTO 05</div><div class="slot-sub">tap to replace</div>
        </div>
        <div class="caption-area">
          <input class="caption-line" placeholder="Year">
          <input class="caption-line" placeholder="Place">
          <input class="caption-line" placeholder="Funny memory / short caption">
        </div>
      </div>
      <div>
        <div class="photo-slot"><div class="corner tl"></div><div class="corner br"></div>
          <svg viewBox="0 0 24 24" fill="none" stroke="#9C6A3C" stroke-width="1.6"><rect x="3" y="6" width="18" height="14" rx="2"/><circle cx="12" cy="13" r="3.4"/><path d="M8 6l1.5-2.5h5L16 6"/></svg>
          <div class="slot-label">PHOTO 06</div><div class="slot-sub">tap to replace</div>
        </div>
        <div class="caption-area">
          <input class="caption-line" placeholder="Year">
          <input class="caption-line" placeholder="Place">
          <input class="caption-line" placeholder="Funny memory / short caption">
        </div>
      </div>
    </div>
  </div>
</section>

<div class="hill-divider"><svg viewBox="0 0 500 60" preserveAspectRatio="none"><path d="M0,0 L0,30 Q130,60 260,25 Q380,-5 500,30 L500,0 Z" fill="#FFF3DC"/></svg></div>

<!-- ===================== LEVEL 02 ===================== -->
<section id="level02">
  <div class="section-wrap reveal">
    <span class="checkpoint-tag">🏆 CHECKPOINT 02</span>
    <h2 class="level-title">CHILDHOOD CHAOS</h2>
    <p class="level-sub">Every sibling duo unlocks a few achievements along the way.</p>

    <div class="achv-grid">
      <div class="achv-card">
        <div class="photo-slot"><svg viewBox="0 0 24 24" fill="none" stroke="#9C6A3C" stroke-width="1.6"><rect x="3" y="6" width="18" height="14" rx="2"/><circle cx="12" cy="13" r="3.4"/></svg></div>
        <div>
          <span class="achv-badge">⭐ +100 XP</span>
          <div class="achv-title">Survived Another Sibling Fight</div>
          <div class="achv-desc">[Add the story behind this one]</div>
        </div>
      </div>
      <div class="achv-card">
        <div class="photo-slot"><svg viewBox="0 0 24 24" fill="none" stroke="#9C6A3C" stroke-width="1.6"><rect x="3" y="6" width="18" height="14" rx="2"/><circle cx="12" cy="13" r="3.4"/></svg></div>
        <div>
          <span class="achv-badge">🔓 UNLOCKED</span>
          <div class="achv-title">Annoying Each Other Since Forever</div>
          <div class="achv-desc">[Add the story behind this one]</div>
        </div>
      </div>
      <div class="achv-card">
        <div class="photo-slot"><svg viewBox="0 0 24 24" fill="none" stroke="#9C6A3C" stroke-width="1.6"><rect x="3" y="6" width="18" height="14" rx="2"/><circle cx="12" cy="13" r="3.4"/></svg></div>
        <div>
          <span class="achv-badge">🍟 BONUS</span>
          <div class="achv-title">Stole Each Other's Food</div>
          <div class="achv-desc">[Add the story behind this one]</div>
        </div>
      </div>
      <div class="achv-card">
        <div class="photo-slot"><svg viewBox="0 0 24 24" fill="none" stroke="#9C6A3C" stroke-width="1.6"><rect x="3" y="6" width="18" height="14" rx="2"/><circle cx="12" cy="13" r="3.4"/></svg></div>
        <div>
          <span class="achv-badge">⭐ +100 XP</span>
          <div class="achv-title">[Your own achievement title]</div>
          <div class="achv-desc">[Add the story behind this one]</div>
        </div>
      </div>
    </div>
  </div>
</section>

<div class="hill-divider"><svg viewBox="0 0 500 60" preserveAspectRatio="none"><path d="M0,60 L0,20 Q140,0 260,35 Q400,65 500,15 L500,60 Z" fill="var(--dirt-darker)"/></svg></div>

<!-- ===================== LEVEL 03 ===================== -->
<section id="level03">
  <div class="section-wrap reveal">
    <span class="checkpoint-tag">🎬 CHECKPOINT 03</span>
    <h2 class="level-title">MEMORY CHECKPOINT</h2>
    <p class="level-sub">Press play and relive it.</p>

    <div class="video-grid">
      <div class="video-slot">
        <div class="film-strip left"></div><div class="film-strip right"></div>
        <div class="play-btn"><svg viewBox="0 0 24 24" fill="#fff"><path d="M8 5v14l11-7z"/></svg></div>
        <div class="v-label">▶ PLAY MEMORY</div>
        <div class="v-sub">Checkpoint Replay 01 — tap to insert video</div>
      </div>
      <div class="video-slot">
        <div class="film-strip left"></div><div class="film-strip right"></div>
        <div class="play-btn"><svg viewBox="0 0 24 24" fill="#fff"><path d="M8 5v14l11-7z"/></svg></div>
        <div class="v-label">▶ PLAY MEMORY</div>
        <div class="v-sub">Checkpoint Replay 02</div>
      </div>
      <div class="video-slot">
        <div class="film-strip left"></div><div class="film-strip right"></div>
        <div class="play-btn"><svg viewBox="0 0 24 24" fill="#fff"><path d="M8 5v14l11-7z"/></svg></div>
        <div class="v-label">▶ PLAY MEMORY</div>
        <div class="v-sub">Checkpoint Replay 03</div>
      </div>
    </div>
  </div>
</section>

<div class="hill-divider"><svg viewBox="0 0 500 60" preserveAspectRatio="none"><path d="M0,0 L0,35 Q120,60 260,20 Q390,-10 500,25 L500,0 Z" fill="var(--paper)"/></svg></div>

<!-- ===================== LEVEL 04 ===================== -->
<section id="level04">
  <div class="section-wrap reveal">
    <span class="checkpoint-tag">🃏 CHECKPOINT 04</span>
    <h2 class="level-title">OUR BEST MOMENTS</h2>
    <p class="level-sub">Collect them all — nine memory cards, nine reasons you're stuck with each other.</p>

    <div class="collect-grid" id="collectGrid"></div>
  </div>
</section>

<div class="hill-divider"><svg viewBox="0 0 500 60" preserveAspectRatio="none"><path d="M0,60 L0,15 Q150,-5 260,30 Q380,60 500,10 L500,60 Z" fill="var(--sky-mid)"/></svg></div>

<!-- ===================== LEVEL 05 — QUIZ ===================== -->
<section id="level05">
  <div class="section-wrap reveal">
    <span class="checkpoint-tag">🧠 CHECKPOINT 05</span>
    <h2 class="level-title">HOW WELL DO YOU<br>KNOW YOUR SISTER?</h2>
    <p class="level-sub">Answer to earn XP. [Swap in your own questions in the code — look for the QUIZ_DATA list.]</p>

    <div class="quiz-card">
      <div class="quiz-top">
        <div class="quiz-progress-outer"><div class="quiz-progress-inner" id="quizBar"></div></div>
        <span class="xp-pill" id="xpPill">0 XP</span>
      </div>
      <div id="quiz-live">
        <div id="quiz-question"></div>
        <div class="quiz-options" id="quiz-options"></div>
      </div>
      <div id="quiz-result">
        <div class="badge-icon">🏅</div>
        <div class="level-title" style="font-size:26px;">CHECKPOINT CLEARED</div>
        <div id="quiz-score" style="font-weight:700; color:#5C4A3A;"></div>
      </div>
      <button id="quiz-next">NEXT QUESTION →</button>
    </div>
  </div>
</section>

<div class="hill-divider"><svg viewBox="0 0 500 60" preserveAspectRatio="none"><path d="M0,0 L0,30 Q140,60 260,25 Q400,-8 500,28 L500,0 Z" fill="#3A2A1C"/></svg></div>

<!-- ===================== FINAL CHECKPOINT — MESSAGE ===================== -->
<section id="finalmsg">
  <div class="section-wrap reveal">
    <span class="checkpoint-tag" style="background:var(--accent-red);">🏁 FINAL CHECKPOINT</span>
    <h2 class="level-title">BEFORE YOU FINISH<br>THE RACE…</h2>
    <p class="level-sub">One more thing before the finish line.</p>

    <div class="msg-layout">
      <div class="photo-slot" style="aspect-ratio:3/4;">
        <svg viewBox="0 0 24 24" fill="none" stroke="#E8D9C4" stroke-width="1.6"><rect x="3" y="6" width="18" height="14" rx="2"/><circle cx="12" cy="13" r="3.4"/></svg>
        <div class="slot-label">FINAL PHOTO</div><div class="slot-sub">tap to replace</div>
      </div>
      <div class="letter-box">
        <div class="letter-heading">Dear [Brother's name],</div>
        <div class="letter-editable" contenteditable="true">[Write your personal message here — this whole paragraph is editable. Say whatever you've been meaning to say to him.]</div>
        <div class="edit-hint">✏️ Click the text above to write your own message.</div>
      </div>
    </div>
  </div>
</section>

<!-- ===================== FINISH LINE ===================== -->
<section id="finish">
  <div class="finish-inner">
    <div class="finish-flag">🏁</div>
    <h2 class="finish-title">LEVEL COMPLETE</h2>
    <p class="finish-line1">Thanks for being my forever teammate.</p>
    <p class="finish-line2">Happy Raksha Bandhan ❤️</p>
    <div class="finish-photo">
      <div class="photo-slot">
        <svg viewBox="0 0 24 24" fill="none" stroke="#9C6A3C" stroke-width="1.6"><rect x="3" y="6" width="18" height="14" rx="2"/><circle cx="12" cy="13" r="3.4"/></svg>
        <div class="slot-label">US, TOGETHER</div><div class="slot-sub">tap to replace</div>
      </div>
    </div>
    <p class="made-with">RAKHI RACING · made with love, one checkpoint at a time</p>
  </div>
</section>

<script>
/* ---------------- reveal on scroll ---------------- */
const revealEls = document.querySelectorAll('.reveal');
const io = new IntersectionObserver((entries)=>{
  entries.forEach(e=>{ if(e.isIntersecting){ e.target.classList.add('in'); } });
},{threshold:.15});
revealEls.forEach(el=>io.observe(el));

/* ---------------- progress road ---------------- */
const fill = document.getElementById('progress-fill');
const car = document.getElementById('progress-car');
function updateProgress(){
  const h = document.documentElement;
  const scrolled = h.scrollTop;
  const max = h.scrollHeight - h.clientHeight;
  const pct = max>0 ? Math.min(100,(scrolled/max)*100) : 0;
  fill.style.width = pct+'%';
  car.style.left = pct+'%';
}
document.addEventListener('scroll',updateProgress,{passive:true});
updateProgress();

/* ---------------- Level 04 collectible cards (generated) ---------------- */
const collectGrid = document.getElementById('collectGrid');
const photoSvg = "<svg viewBox='0 0 24 24' fill='none' stroke='%239C6A3C' stroke-width='1.6'><rect x='3' y='6' width='18' height='14' rx='2'/><circle cx='12' cy='13' r='3.4'/></svg>";
for(let i=1;i<=9;i++){
  const card = document.createElement('div');
  card.className = 'collect-card';
  card.innerHTML = `
    <span class="collect-num">#${String(i).padStart(2,'0')}</span>
    <div class="photo-slot">
      <svg viewBox="0 0 24 24" fill="none" stroke="#9C6A3C" stroke-width="1.6"><rect x="3" y="6" width="18" height="14" rx="2"/><circle cx="12" cy="13" r="3.4"/></svg>
      <div class="slot-label">MOMENT ${i}</div><div class="slot-sub">tap to replace</div>
    </div>
    <input class="caption-line" placeholder="Memory title">
    <input class="caption-line" placeholder="Year / date (optional)">
  `;
  collectGrid.appendChild(card);
}

/* ---------------- Quiz ---------------- */
/* Replace these with your own questions about your brother! Mark isCorrect on the right option. */
const QUIZ_DATA = [
  { q:"What's my brother's go-to comfort food?", options:["[Option A]","[Option B]","[Option C]","[Option D]"], correct:0 },
  { q:"Where did we go on our funniest family trip?", options:["[Option A]","[Option B]","[Option C]","[Option D]"], correct:1 },
  { q:"What's the one thing he always says to annoy me?", options:["[Option A]","[Option B]","[Option C]","[Option D]"], correct:2 },
  { q:"What was his favorite childhood cartoon?", options:["[Option A]","[Option B]","[Option C]","[Option D]"], correct:0 },
  { q:"What nickname do I call him?", options:["[Option A]","[Option B]","[Option C]","[Option D]"], correct:3 }
];
let qIndex = 0, xp = 0, answered = false;
const qEl = document.getElementById('quiz-question');
const optsEl = document.getElementById('quiz-options');
const bar = document.getElementById('quizBar');
const xpPill = document.getElementById('xpPill');
const nextBtn = document.getElementById('quiz-next');
const liveEl = document.getElementById('quiz-live');
const resultEl = document.getElementById('quiz-result');
const scoreEl = document.getElementById('quiz-score');

function renderQuestion(){
  answered = false;
  nextBtn.style.display = 'none';
  const item = QUIZ_DATA[qIndex];
  qEl.textContent = `Q${qIndex+1}. ${item.q}`;
  optsEl.innerHTML = '';
  item.options.forEach((opt,i)=>{
    const b = document.createElement('button');
    b.className = 'quiz-opt';
    b.textContent = opt;
    b.addEventListener('click',()=>{
      if(answered) return;
      answered = true;
      const buttons = optsEl.querySelectorAll('.quiz-opt');
      buttons.forEach((bt,bi)=>{
        if(bi===item.correct) bt.classList.add('correct');
        else if(bi===i) bt.classList.add('wrong');
      });
      if(i===item.correct){ xp += 20; xpPill.textContent = xp+' XP'; }
      nextBtn.style.display='inline-block';
      nextBtn.textContent = (qIndex===QUIZ_DATA.length-1)?'SEE RESULT →':'NEXT QUESTION →';
    });
    optsEl.appendChild(b);
  });
  bar.style.width = (qIndex/QUIZ_DATA.length*100)+'%';
}
nextBtn.addEventListener('click',()=>{
  qIndex++;
  if(qIndex>=QUIZ_DATA.length){
    bar.style.width='100%';
    liveEl.style.display='none';
    nextBtn.style.display='none';
    resultEl.style.display='block';
    scoreEl.textContent = `You scored ${xp} XP out of ${QUIZ_DATA.length*20}. Certified sibling expert 🏆`;
  } else {
    renderQuestion();
  }
});
renderQuestion();
</script>
</body>
</html>
